#include "mll.h"
#include <iostream>
using namespace std;

int main() {
    MultiLinkedList L;
    createListParent(L);

    elmGenre* G1 = newGenre("G001", "Action");
    elmGenre* G2 = newGenre("G002", "Comedy");
    elmGenre* G3 = newGenre("G003", "Horror");
    elmGenre* G4 = newGenre("G004", "Romance");

    insertFirstParent(L, G4);
    insertFirstParent(L, G3);
    insertFirstParent(L, G2);
    insertFirstParent(L, G1);

    insertLastChild(G1, newFilm("FA001", "The Raid", 101, 2011, 7.6));
    insertLastChild(G2, newFilm("FC001", "Agak Laen", 119, 2024, 8.0));
    insertLastChild(G2, newFilm("FC002", "My Stupid Boss", 108, 2016, 6.8));
    insertLastChild(G3, newFilm("FH001", "Pengabdi Setan", 107, 2017, 8.4));
    insertLastChild(G4, newFilm("FR001", "Habibie & Ainun", 118, 2012, 7.6));
    insertLastChild(G4, newFilm("FR002", "Dilan 1990", 110, 2018, 6.6));

    cout << "original List Film" << endl;
    printStrukturMLL(L);
    cout << endl;
    cout << endl << "Film Dengan rating 8.0 - 8.5" << endl;
    searchFilmByRatingRange(L, 8.0, 8.5);
    cout << endl;
    deleteAfterParent(L, "G001");
     cout << endl <<"List Film setelah menghapus Genre komedi (G002)" << endl;
    printStrukturMLL(L);

    return 0;
}
