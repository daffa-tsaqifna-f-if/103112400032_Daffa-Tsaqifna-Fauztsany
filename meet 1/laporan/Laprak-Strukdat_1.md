# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Muhammad Dhimas Hafizh Fathurrahman - 2311102151</p>

## Dasar Teori
Bahasa pemrograman C/C++ sangat penting untuk membekali siswa dengan pengetahuan dan keterampilan dasar pemrograman agar mereka mampu membangun aplikasi sederhana serta siap menghadapi dunia kerja yang menuntut kemampuan pemrograman [1]. Pelatihan berfokus tidak hanya pada praktik sintaks, variabel, tipe data, operator, penggunaan loop, kondisi, dan fungsi, tetapi juga pengembangan solusi yang logis dan efektif menggunakan algoritma [1].

Dalam konteks pembelajaran algoritma dan pemrograman, bahasa C dan C++ kerap diaplikasikan dalam dunia pendidikan dan industri untuk memecahkan berbagai persoalan, termasuk dalam perhitungan matematika dasar seperti operasi aritmatika (penjumlahan, pengurangan, perkalian, pembagian) menggunakan tipe data integer [2]. Operator aritmatika pada C terdiri atas kode +, -, *, /, dan %, yang memudahkan pengguna dalam mengeksekusi operasi matematika secara sederhana melalui program komputer [2].

Jurnal lain menekankan bahwa penguasaan operator dalam pemrograman C dan C++ sangat vital karena operator menjadi bagian inti dalam menulis kode logika serta struktur pengambilan keputusan [3]. Selain operator aritmatika, konsep variabel serta tipe data integer menjadi kunci dalam pengolahan data selama proses belajar pemrograman C [3].

Dalam pelaksanaan praktikum, digunakan juga panduan teknis berupa modul praktikum yang menekankan pada penggunaan IDE (Integrated Development Environment) seperti Codeblocks agar proses penulisan kode, kompilasi, hingga debugging berjalan efisien dan terstruktur [Modul Praktikum Informatika, 2025].


## Guided 

### 1.

```C++
#include<iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka pertama: ";
    cin >> angka;
    cout << "Masukkan yang dimaskukan adalah " << angka << endl;
    return 0;
}
```
penjelasan singkat guided 1

### 2. 

```C++
#include<iostream>
using namespace std;

int main() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "penjumlahan: " << angka1 + angka2 << endl;
    cout << "pengurangan: " << angka1 - angka2 << endl;
    cout << "perkalian: " << angka1 * angka2 << endl;
    cout << "pembagian: " << angka1 / angka2 << endl;
    cout << "modulus: " << angka1 % angka2 << endl;

    return 0;
}
```
penjelasan singkat guided 2

### 3. 

```C++
#include<iostream>
using namespace std;

int main() {
    int angka1, angka2, Pilihan;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    if (angka1 > angka2 ) {
        cout << angka1 << " lebih dari " << angka2 << endl;
    } else {
        cout << angka1 << " kurang dari " << angka2 << endl;
    }

    if (angka1 == angka2) {
        cout << angka1 << " sama dengan " << angka2 << endl;
    } else if (angka1 != angka2) {
        cout << " angka berbeda " << endl;
    }

     int pilihan;
    cout << "MENU" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "masukan pilihan: ";
    cin >> pilihan;

    switch (pilihan){
        case 1:
        cout << "Penjumlahan :" << angka1 + angka2 << endl;
        cout << endl;
        break; 
        case 2:
        cout << "Pengurangan :" << angka1 - angka2 << endl;
        cout << endl;
        break;
        default:
        cout << "Pilihan Salah" << endl;

    }
    return 0;
}
```
penjelasan singkat guided 3

### 4. 

```C++
#include <iostream>
using namespace std;

 int main(){
    int angka1;
    cout << "masukan angka1 : ";
    cin >> angka1;

    for (int i = 0; i  < angka1; i++){
      cout << i << " - ";
    }
    cout << endl;

    int j = 10;
    while (j > angka1){
      cout << j << " - ";
      j--;
    }

    cout << endl;
    int k = 10;
    do {
      cout << k << " - ";
    }while (k < angka1);

     return  0;
    
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
