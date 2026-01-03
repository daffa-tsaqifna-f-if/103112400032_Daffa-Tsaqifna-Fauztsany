#ifndef PELAJARAN_H
#define PELAJARAN_H
#include <iostream>
using namespace std;

struct pelajaran{
    string NamaMapel,KodeMapel;
};

pelajaran create_pelajaran(string namapel, string kodepel);

void tampil_pelajaran(pelajaran pel);

#endif 