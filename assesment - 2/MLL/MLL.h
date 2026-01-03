#ifndef MLL_H
#define MLL_H
#include <iostream>
using namespace std;


struct infoGenre {
    string IDGenre;
    string namaGenre;
};

struct infoFilm {
    string IDFilm;
    string judulFilm;
    int durasiFilm;
    int tahunTayang;
    float ratingFilm;
};

struct elmFilm {
    infoFilm info;
    elmFilm* next;
    elmFilm* prev;
};

struct elmGenre {
    infoGenre info;
    elmGenre* next;
    elmGenre* prev;
    elmFilm* firstChild;
};

struct MultiLinkedList {
    elmGenre* first;
    elmGenre* last;
};

void createListParent(MultiLinkedList &L);

elmGenre* newGenre(string id, string nama);
elmFilm* newFilm(string id, string judul, int durasi, int tahun, float rating);

void insertFirstParent(MultiLinkedList &L, elmGenre* P);
void insertLastChild(elmGenre* P, elmFilm* C);

void deleteAfterParent(MultiLinkedList &L, string IDGenrePrev);
void deleteAllChild(elmGenre* P);

void printStrukturMLL(MultiLinkedList L);
void searchFilmByRatingRange(MultiLinkedList L, float minRating, float maxRating);



#endif // MLL_H