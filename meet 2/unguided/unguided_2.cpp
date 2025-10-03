#include <iostream>
using namespace std;

void output1(int *p, int *l){
    cout <<"--- Nilai awal ---" << endl;
    cout << "Panjang: " << *p << endl;
    cout << "Lebar: " << *l << endl;
}

void output2(int *p, int *l){
    cout <<"--- Hasil  Perhitungan ---" << endl;
    cout << "Luas Persegi Panjang: " << (*p) * (*l)<< endl;
    cout << "Keliling Persegi Panjang: " << 2 * (*p + *l) << endl;
}

void output3(int *p, int *l){
    *p = 12;
    *l = 6;
    cout <<"--- Nilai Setelah Diubah Melalui pointer ---" << endl;
    cout << "Panjang: " << *p << endl;
    cout << "Lebar: " << *l << endl;
    cout << "Luas Persegi Panjang: " << (*p) * (*l)<< endl;
    cout << "Keliling Persegi Panjang: " << 2 * (*p + *l) << endl;
}

int main() {
    int panjang = 10;
    int lebar = 5;
    int *p = &panjang;
    int *l = &lebar;
    output1(p, l);
    output2(p,l);
    output3(p, l);
    return 0;
}