#include "mll.h"
#include <iostream>
using namespace std;

void createListParent(MultiLinkedList &L) {
    L.first = NULL;
    L.last = NULL;
}

elmGenre* newGenre(string id, string nama) {
    elmGenre* P = new elmGenre;
    P->info.IDGenre = id;
    P->info.namaGenre = nama;
    P->next = NULL;
    P->prev = NULL;
    P->firstChild = NULL;
    return P;
}

elmFilm* newFilm(string id, string judul, int durasi, int tahun, float rating) {
    elmFilm* C = new elmFilm;
    C->info.IDFilm = id;
    C->info.judulFilm = judul;
    C->info.durasiFilm = durasi;
    C->info.tahunTayang = tahun;
    C->info.ratingFilm = rating;
    C->next = NULL;
    C->prev = NULL;
    return C;
}

void insertFirstParent(MultiLinkedList &L, elmGenre* P) {
    if (L.first == NULL) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLastChild(elmGenre* P, elmFilm* C) {
    if (P->firstChild == NULL) {
        P->firstChild = C;
    } else {
        elmFilm* temp = P->firstChild;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = C;
        C->prev = temp;
    }
}

void deleteAllChild(elmGenre* P) {
    elmFilm* C = P->firstChild;
    while (C != NULL) {
        elmFilm* temp = C;
        C = C->next;
        delete temp;
    }
    P->firstChild = NULL;
}

void deleteAfterParent(MultiLinkedList &L, string IDGenrePrev) {
    elmGenre* prec = L.first;

    while (prec != NULL && prec->info.IDGenre != IDGenrePrev) {
        prec = prec->next;
    }

    if (prec == NULL || prec->next == NULL) {
        cout << "Node tidak ditemukan\n";
        return;
    }

    elmGenre* target = prec->next;

    deleteAllChild(target);

    prec->next = target->next;
    if (target->next != NULL) {
        target->next->prev = prec;
    } else {
        L.last = prec;
    }

    delete target;
}

void printStrukturMLL(MultiLinkedList L) {
    elmGenre* P = L.first;

    while (P != NULL) {
        cout << "ID Genre   : " << P->info.IDGenre << endl;
        cout << "Nama Genre : " << P->info.namaGenre << endl;

        elmFilm* C = P->firstChild;
        if (C == NULL) {
            cout << "  (Tidak ada film)\n";
        }

        while (C != NULL) {
            cout << "  Judul  : " << C->info.judulFilm << endl;
            cout << "  Tahun  : " << C->info.tahunTayang << endl;
            cout << "  Rating : " << C->info.ratingFilm << endl;
            C = C->next;
        }

        cout << "----------------------\n";
        P = P->next;
    }
}

void searchFilmByRatingRange(MultiLinkedList L, float minRating, float maxRating) {
    elmGenre* P = L.first;
    bool found = false;

    while (P != NULL) {
        elmFilm* C = P->firstChild;
        while (C != NULL) {
            if (C->info.ratingFilm >= minRating && C->info.ratingFilm <= maxRating) {
                found = true;
                cout << "Judul Film : " << C->info.judulFilm << endl;
                cout << "Rating     : " << C->info.ratingFilm << endl;
                cout << "Genre      : " << P->info.namaGenre << endl;
                cout << "-----------------\n";
            }
            C = C->next;
        }
        P = P->next;
    }

    if (!found) {
        cout << "Tidak ada film dalam range tersebut\n";
    }
}
