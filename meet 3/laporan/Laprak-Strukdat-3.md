# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Daffa Tsaqifna Fauztsany - 103112400032</p>

## Dasar Teori


## Guided 

### 1. pisah

#### mahasiswa.h

```C++
#ifndef MAHASISWA_H
#define MAHASISWA_H

struct mahasiswa {
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);

#endif
```

#### mahasiswa.cpp

```C++
#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "Input NIM: "; 
    cin >> m.nim;
    cout << "Input Nilai 1: "; 
    cin >> m.nilai1;
    cout << "Input Nilai 2: "; 
    cin >> m.nilai2;
}

float rata2(mahasiswa m) {
    return (float) (m.nilai1 + m.nilai2) / 2;
}
```

#### main.cpp

```C++
#include <iostream>
#include "mahasiswa.h"
#include <cstdlib>

using namespace std;

int main() {
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "nilai rata Rata-rata adalah : " << rata2(mhs) << endl;
    system("pause");    
    return 0;
}
```
penjelasan singkat guided 3

### 2. gabung

```C++
#include <iostream>
#include <cstdlib>

using namespace std;

struct mahasiswa {
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m) {
    cout << "Input NIM: ";
    cin >> m.nim;
    cout << "Input Nilai 1: ";
    cin >> m.nilai1;
    cout << "Input Nilai 2: ";
    cin >> m.nilai2;
}

float rata2(mahasiswa m) {
    return (float)(m.nilai1 + m.nilai2) / 2;
}

int main() {
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "nilai rata Rata-rata adalah : " << rata2(mhs) << endl;
    system("pause");
    return 0;
}
```
penjelasan singkat guided 3

### 5. 

```C++
#include<iostream>
using namespace std;

int main(){
    const int MAX = 5;
    struct rapot{
        string nama;
        float nilai;
    };
    rapot siswa[MAX];

    for(int i = 0; i < MAX; i++){
        cout << "masukkan nama siswa : ";
        cin >> siswa[i].nama;
        cout << endl;
        cout << "masukkan nilai siswa : ";
        cin >> siswa[i].nilai;
    }

    int j = 0;
    while(j < MAX){
        cout << "nama siswa : " << siswa[j].nama << ", nilai : " << siswa[j].nilai << endl;
        j++;
    }
    return 0;
}
```
penjelasan singkat guided 3

## Unguided 

### 1. (isi dengan soal unguided 1)

```C++
#include <iostream>
using namespace std;

int input(int &angka, int &angka2) {
    cout<<"Masukkan angka pertama: ";
    cin>>angka;
    cout<<"Masukkan angka kedua: ";
    cin>>angka2;
    return 0;
}

void output(int angka, int angka2) {
    cout<<"hasil penjumlahan: "<<angka+angka2<<endl;
    cout<<"hasil pengurangan: "<<angka-angka2<<endl;
    cout<<"hasil perkalian: "<<angka*angka2<<endl;
    cout<<"hasil pembagian: "<<angka/angka2<<endl;
}

int main() {
    int x,y;
    input(x,y);
    output(x,y);
    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Alt Text](https://raw.githubusercontent.com/daffa-tsaqifna-f-if/103112400032_Daffa-Tsaqifna-Fauztsany/main/meet%201/unguided%20output/output-1.png)


penjelasan unguided 1 

### 2. (isi dengan soal unguided 2)

```C++
#include <iostream>
using namespace std;

int input(int &angka){
    while(true){
        cout << "Masukkan angka: ";
        cin >> angka;
        if (angka >100){
            cout <<"input lebih dari 100 coba lagi"<<endl;
            continue;
        }else{
            break;
        }
    }
    return 0;
}

void text(int angka){
    int satuan, puluhan;
    string less[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh"};
    string specific[] = {"belas","puluh"};
    string text;
    //check
    if (angka <=10){
        cout << angka<<" : "<<less [angka];
        }else if(angka == 100){
            cout<<"seratus";
            }else{
                satuan = angka % 10;
                puluhan = (angka / 10) % 10;
                if (puluhan == 1){
                    switch (satuan){
                    case 1:
                        cout<<angka<<" : "<<"sebelas";
                    default:
                        text = less[satuan]+" "+specific[0];
                        cout<<angka<<" : "<<text;
                    }
                }else {
                    text = less[puluhan]+" "+specific[1]+" "+less[satuan];
                    cout<<angka<<" : "<<text;
                    }
     };
}

int main() {
    int x;
    input(x);
    text(x);
    return 0;
}
```
### Output Unguided 2 :

##### Output 2
![Deskripsi Gambar](https://raw.githubusercontent.com/daffa-tsaqifna-f-if/103112400032_Daffa-Tsaqifna-Fauztsany/main/meet%201/unguided%20output/output-2.png)


penjelasan unguided 2

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int input(int &angka){
    cout << "Masukkan angka: ";
    cin >> angka;
    return 0;
}

int output(int &angka){
    for (int i = angka; i >= 1; i--) {
        for (int s = 0; s < (angka - i) * 2; s++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "* ";

        for (int j = 1; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        cout << endl;
    }

    for (int s = 0; s < angka * 2; s++) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}

int main() {
    int x;
    input(x);
    output(x);      
    return 0;
}
```
### Output Unguided 3 :

##### Output 3
![Deskripsi Gambar](https://raw.githubusercontent.com/daffa-tsaqifna-f-if/103112400032_Daffa-Tsaqifna-Fauztsany/main/meet%201/unguided%20output/output-3.png)

penjelasan unguided 3

## Kesimpulan
...

## Referensi
[1]Sulistyono, A. D., & Prabowo, R. Y. (2023). Peningkatan Kompetensi Algoritma dan Pemrograman C/C++. Kacanegara: Jurnal Pengabdian Kepada Masyarakat, 5(4), 191–200. Diakses dari https://ejournals.itda.ac.id/index.php/KACANEGARA/article/download/1689/pdf

[2]Rofikoh, S., & Oktarina, R. (2022). Analisis Studi Literatur Penyelesaian Operator Aritmatika dalam Pemrograman C++. Jurnal Saber, 1(3), 145–151. Diakses dari https://jurnal.stikes-ibnusina.ac.id/index.php/SABER/article/download/604/577/2178

[3]Hasanah, S. (2025). Jurnal Operator Pada C++. Scribd. Diakses dari https://id.scribd.com/document/793190402/jurnal-Operator-pada-C
