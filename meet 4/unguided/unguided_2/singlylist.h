#ifndef singlylist_H
#define singlylist_H
#include <iostream>
using namespace std;

typedef int infotype;
typedef struct ElmList* address;

struct ElmList{
    infotype info;
    address next;
};

struct List{
    address First;
};

void CreateList (List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void printInfo(List L);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address Prec, address &P);
int nbList(List L);
void deleteList(List &L);
#endif // singlylist_H