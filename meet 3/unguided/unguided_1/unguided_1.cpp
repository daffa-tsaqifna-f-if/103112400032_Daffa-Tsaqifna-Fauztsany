#include <iostream>
using namespace std;

const int max = 10;

float Nakhir(float x,float y, float z){
    return (0.3*x)+(0.4*y)+(0.3*z);
}

struct mahasiswa{
    string Nama,NIM;
    float uts,uas,tugas;
    float nilai_akhir;
};


int main() {
    mahasiswa mhs[max];

    mhs[0].uts = 80;
    mhs[0].uas = 85;
    mhs[0].tugas = 90;
    mhs[0].nilai_akhir = Nakhir(mhs[0].uts,mhs[0].uas,mhs[0].tugas);

    cout << mhs[0].nilai_akhir;
    return 0;
}