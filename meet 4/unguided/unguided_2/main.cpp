#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5, P;

    CreateList(L);

    P1 = alokasi(2);  insertFirst(L, P1);
    P2 = alokasi(0);  insertFirst(L, P2);
    P3 = alokasi(8);  insertFirst(L, P3);
    P4 = alokasi(12); insertFirst(L, P4);
    P5 = alokasi(9);  insertFirst(L, P5);

    printInfo(L);

    deleteFirst(L, P);   // delete 9
    dealokasi(P);

    deleteLast(L, P);    // delete 2
    dealokasi(P);

    address Prec = L.First; // 12
    deleteAfter(Prec, P);   // delete 8
    dealokasi(P);

    printInfo(L); // 12 0
    cout << "Jumlah node : " << nbList(L) << endl;

    deleteList(L);
    cout << "- List Berhasil Terhapus -" << endl;
    cout << "Jumlah node : " << nbList(L) << endl;
    
    return 0;
}
