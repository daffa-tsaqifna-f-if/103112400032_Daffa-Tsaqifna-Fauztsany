# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Daffa Tsaqifna Fauztsany - 103112400032</p>

## Dasar Teori


## Guided 

### 1. gabung

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
### 2. pisah

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



## Unguided 

### 1. 
#### soal:
Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3*uts+0.4*uas+0.3*tugas.
#### code:
```C++
#include <iostream>
using namespace std;

const int MAX = 10;

float Nakhir(float x,float y, float z){
    return (0.3*x)+(0.4*y)+(0.3*z);
}

struct mahasiswa_data{
    string Nama,NIM;
    float uts,uas,tugas;
    float nilai_akhir;
};

struct mahasiswa_list{
    mahasiswa_data list[MAX];
    int jumlah = 0;
};


void DataSafe(mahasiswa_list &m){
    if (m.jumlah >= MAX){
        cout << "data penuh";
        return;
    }

    cout << "Masukan Nama  : ";
    cin >> m.list[m.jumlah].Nama;

    cout << "Masukan NIM   : ";
    cin >> m.list[m.jumlah].NIM;

    cout << "Masukan UTS   : ";
    cin >> m.list[m.jumlah].uts;

    cout << "Masukan UAS   : ";
    cin >> m.list[m.jumlah].uas;

    cout << "Masukan Tugas : ";
    cin >> m.list[m.jumlah].tugas;

    m.list[m.jumlah].nilai_akhir = Nakhir( m.list[m.jumlah].uts,m.list[m.jumlah].uas,m.list[m.jumlah].tugas);

    m.jumlah++;
    cout << "data sudah di masukan";
}

void Show(mahasiswa_list m){
    if (m.jumlah == 0){
        cout << "Data Masih Kosong";
    }

     for (int i = 0; i < m.jumlah; i++){
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Nama           : " << m.list[i].Nama << endl;
        cout << "NIM            : " << m.list[i].NIM << endl;
        cout << "UTS            : " << m.list[i].uts << endl;
        cout << "UAS            : " << m.list[i].uas << endl;
        cout << "Tugas          : " << m.list[i].tugas << endl;
        cout << "Nilai Akhir  : " << m.list[i].nilai_akhir << endl;
    }
}



int main() {
    mahasiswa_list mhs;
    int choice;

    while (true){
        cout << "Apa yang ingin di lakuka\n";
        cout << "1. Masukan Data\n";
        cout << "2. Lihat data(full)\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            DataSafe(mhs);        
            break;
        case 2:
            Show(mhs);
            break;
        case 0:
            cout << "bye";
            return 0;
        default:
            cout << "Pilihan tidak valid\n";
            break;
        }
    }
    return 0;
}
```
### Output Unguided 1 :

##### Output 1

penjelasan unguided 1 

### 2.

Buatlah ADT pelajaran sebagai berikut di dalam file "pelajaran.h":
```
Type pelajaran <
namamapel : string
kodemapel : string
>

function create_pelajaran (namapel : string, kodepel : string) → pelajaran

procedure tampil_pelajaran (input pel pelajaran )
```

Buatlah implementasi ADT pelajaran pada file "pelajaran.cpp"

Cobalah hasil implementasi ADT pada file "main.cpp"
```C++
using namespace std;

int main() {

string namapel = "Struktur Data";

string kodepel = "STD";

pelajaran pel = create_pelajaran (namapel, kodepel);

tampil_pelajaran (pel);

return 0;

}
```
Gambar 3-1 main.cpp pelajaran

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
