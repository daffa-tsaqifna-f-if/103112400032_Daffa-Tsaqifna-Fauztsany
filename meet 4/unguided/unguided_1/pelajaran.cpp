#include "pelajaran.h"
#include <iostream>
using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.NamaMapel = namapel;
    pel.KodeMapel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.NamaMapel << endl;
    cout << "nilai : " << pel.KodeMapel << endl;
}