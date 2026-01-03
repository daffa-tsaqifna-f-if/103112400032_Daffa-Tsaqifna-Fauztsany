# <h1 align="center">Laporan Praktikum Modul 2 - Pengenalan Bahas C++ (Bagian Kedua)</h1>
<p align="center">Daffa Tsaqifna Fauztsany - 103112400032</p>

## Dasar Teori

Bahasa pemrograman C++ merupakan alat yang fundamental dalam pengembangan perangkat lunak, namun penguasaan konsep-konsepnya seringkali menjadi tantangan. Untuk meningkatkan motivasi dan pemahaman, pendekatan pembelajaran modern seringkali mengintegrasikan aplikasi praktis seperti pengembangan game [1, 2]. Metode ini terbukti efektif dalam membuat konsep-konsep abstrak seperti array, pointer, dan fungsi menjadi lebih konkret dan relevan [1].

### Array
Array adalah sebuah struktur data inti dalam C++ yang berfungsi untuk menyimpan sekumpulan data sejenis. Dalam konteks aplikasi, array sangat vital untuk merepresentasikan data yang terstruktur. Sebagai contoh, dalam game edukasi, array dapat digunakan untuk menyimpan daftar pertanyaan atau elemen-elemen permainan [2]. Lebih lanjut, dalam aplikasi yang lebih kompleks seperti peta digital, array dapat digunakan untuk merepresentasikan jaringan rute atau titik-titik koordinat yang akan diolah oleh sebuah algoritma [3]. Kemampuan array untuk menyimpan data secara efisien menjadikannya dasar bagi banyak implementasi perangkat lunak.

### Fungsi
Fungsi adalah komponen esensial yang mendukung prinsip pemrograman modular. Dalam pengembangan aplikasi yang kompleks, seperti game atau perangkat lunak berbasis algoritma, logika program perlu dipecah menjadi bagian-bagian yang lebih kecil dan dapat dikelola [1, 3]. Fungsi memungkinkan pembungkusan tugas-tugas spesifik, seperti logika untuk menjawab kuis dalam game edukasi [2] atau kalkulasi jarak dalam algoritma pencarian rute [3]. Penggunaan fungsi tidak hanya membuat kode lebih terorganisir dan mudah dibaca, tetapi juga memungkinkan penggunaan kembali kode (reusability), sehingga proses pengembangan menjadi lebih efisien.

### Pointer
Meskipun tidak secara eksplisit dibahas dalam konteks aplikasi edukasi, pointer merupakan konsep C++ yang berjalan di balik layar untuk manajemen memori yang efisien. Dalam aplikasi yang membutuhkan performa tinggi, seperti game [1] atau pemrosesan algoritma yang intensif [3], kemampuan untuk mengelola memori secara langsung adalah krusial. Pointer memungkinkan developer untuk membuat struktur data dinamis dan mengoptimalkan bagaimana data diakses dan dimanipulasi, yang pada akhirnya sangat memengaruhi kecepatan dan efisiensi aplikasi secara keseluruhan.

## Guided 

### 1.

```C++
#include<iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        cout << "Masukkan value indeks ke-" << i << ": ";
        cin >> arr[i];
    }
    int j=0;
    while (j < 5){
        cout << "isi indeks ke-" << j << " :  " << arr[j] << endl;
        j++;
    }
    return 0;
}
```
Program C++ ini meminta pengguna memasukkan 5 nilai ke dalam sebuah array. Setelah semua nilai dimasukkan melalui perulangan for, program menampilkan kembali isi array tersebut menggunakan perulangan while. Tujuannya adalah menunjukkan cara menyimpan data dalam array dan cara menampilkan setiap elemennya berdasarkan indeks.

### 2. 

```C++
#include<iostream>
using namespace std;

void tamplikankanHasil(int arr[2][2]) {
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int arrA[2][2]={
        {1,2},
        {3,4}
    };
    int arrB[2][2]={
        {2,3},
        {4,5}
    };
    int arrC[2][2]={0};
    int arrD[2][2]={0};
    //penjumlahan matriks 2x2
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            arrC[i][j] = arrA[i][j] + arrB[i][j];
        }
    }
    cout << "Hasil penjumlahan matrik adalah: " << endl;
    tamplikankanHasil(arrC);
    //perkalian matriks 2x2
    for (int i = 0; i < 2; i++){                                  //perualangan baris  
        for (int j = 0; j < 2; j++){                             //perualangan kolom
            for (int k = 0; k < 2; k++){                       //perulangan perkalian
                arrD[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }
    cout << "Hasil perkalian : " << endl;
    tamplikankanHasil(arrD);
    return 0;
}
```
Program C++ ini melakukan operasi penjumlahan dan perkalian pada dua matriks berukuran 2×2. Dua matriks awal (arrA dan arrB) sudah ditentukan nilainya. Program pertama-tama menjumlahkan kedua matriks elemen per elemen dan menyimpan hasilnya pada arrC, lalu menampilkannya. Setelah itu, program menghitung perkalian matriks menggunakan tiga tingkat perulangan dan menyimpan hasilnya pada arrD, kemudian menampilkannya melalui fungsi tampilkanhasil(). Program ini menunjukkan cara kerja operasi dasar matriks dalam C++.

### 3. 

```C++
#include<iostream>
using namespace std;

int main() {
    int arr[]={10,20,30,40,50};  
    int* ptr = arr;

    //mengakses elemen array menggunakan pointer
    for (int i = 0; i < 5; i++){
        cout <<"Element array ke-"<<i+1<< "menggunakan pointer: " << *(ptr + i) << endl;
    }
    //mengakses elemen array menggunakan indeks
    for (int i = 0; i < 5; i++) {
        cout <<"Element array ke-"<<i+1<< "mengkunakan indeks: " << arr[i] << endl;
    }
    
    return 0;
}
```
Program C++ ini menampilkan isi array dengan dua cara berbeda. Pertama, program menggunakan pointer (ptr) yang menunjuk ke elemen pertama array, lalu mengakses elemen-elemen berikutnya melalui operasi pointer arithmetic (*(ptr + i)). Kedua, program menampilkan elemen array menggunakan akses indeks biasa (arr[i]). Program ini menunjukkan perbedaan dan kesetaraan antara akses array menggunakan pointer dan menggunakan indeks.

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
Program C++ ini meminta pengguna memasukkan sebuah angka, lalu menampilkan deretan nilai menggunakan perulangan for, while, dan do-while. Program ini bertujuan menunjukkan perbedaan cara kerja ketiga jenis perulangan tersebut dalam menampilkan data.



## Unguided 

### 1. 
Diketahui 2 buah matriks 3x3 seperti dibawah ini : 
 
$$
\text{matriksA} =
\begin{bmatrix}
7 & 12 & 22 \\
31 & 6 & 41 \\
15 & 19 & 36
\end{bmatrix}
\quad
\text{MatriksB} =
\begin{bmatrix}
11 & 34 & 7 \\
3 & 25 & 41 \\
5 & 18 & 33
\end{bmatrix}
$$

 
Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian 
matriks 3x3 tersebut. Buat prosedur untuk masing-masing operasi yang dilakukan; 
jumlahMatriks() untuk operasi penjumlahan, kurangMatriks() untuk pengurangan, dan 
kaliMatriks() untuk perkalian. Buat program tersebut menggunakan menu switch-case 
seperti berikut ini : 
 --- Menu Program Matriks --- 
1. Penjumlahan matriks 
2. Pengurangan matriks 
3. Perkalian matriks 
4. Keluar

```C++
#include <iostream>
using namespace std;

void tampilMatriks(int A[3][3], int B[3][3]) {
    cout << "\nMatriks A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks B:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void swap(int A[3][3], int B[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int temp = A[i][j];
            A[i][j] = B[i][j];
            B[i][j] = temp;
        }
    }
}

void penjumlahan(int A[3][3], int B[3][3]) {
    cout << "\nHasil Penjumlahan Matriks:" << endl;
    int C[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void pengurangan(int A[3][3], int B[3][3]) {
    cout << "\nHasil Pengurangan Matriks:" << endl;
    int C[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void perkalian(int A[3][3], int B[3][3]) {
    cout << "\nHasil Perkalian Matriks:" << endl;
    int C[3][3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = {
        {7,12,22},
        {31,6,41},
        {15,19,36}
    };
    int B[3][3] = {
        {11,34,7},
        {3,25,41},
        {5,18,33}
    };

    while (true) {
        tampilMatriks(A, B);

        int x;
        cout << "--- Menu Program Matriks ---\n"
        "1. Penjumlahan matriks\n"
        "2. Pengurangan matriks\n"
        "3. Perkalian matriks\n"
        "4. Tukar Matriks A <-> B\n"
        "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> x;

        switch (x) {
            case 1:
                penjumlahan(A, B);
                continue;
            case 2:
                pengurangan(A, B);
                continue;
            case 3:
                perkalian(A, B);
                continue;
            case 4:
                swap(A, B);
                cout << "\nMatriks A dan B berhasil ditukar.\n";
                continue;
            case 5:
                cout << "Keluar dari program." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid, coba lagi." << endl;
                continue;
        }
    }
}
```
### Output Unguided 1 :

##### Output 1
![Alt Text](https://raw.githubusercontent.com/daffa-tsaqifna-f-if/103112400032_Daffa-Tsaqifna-Fauztsany/main/meet%202/unguided%20output/output-1.png)


Program C++ ini bekerja dengan dua matriks berukuran 3×3 (A dan B) dan menyediakan menu interaktif bagi pengguna. Di dalamnya terdapat beberapa fungsi: menampilkan matriks, menukar isi matriks A dan B, serta melakukan operasi penjumlahan, pengurangan, dan perkalian matriks. Program berjalan dalam loop sehingga pengguna bisa memilih operasi berkali-kali sampai memilih menu keluar. Program ini memperlihatkan bagaimana memanipulasi matriks menggunakan fungsi terpisah serta mengolah operasi dasar matriks dalam bentuk menu.

### 2. 
Buatlah program menghitung luas dan keliling persegi panjang dengan proses perhitungan 
dan perubahan nilainya menggunakan pointer, seperti berikut: 
1) Buatlah 3 variabel integer di fungsi main(): panjang (beri nilai 10), lebar (beri nilai 5), dan 
luas (beri nilai 0). 
2) Deklarasikan dua pointer: ptrPanjang yang menunjuk ke variabel panjang, dan ptrLebar 
yang menunjuk ke variabel lebar.  
3) Hitung luas persegi panjang tersebut dan simpan hasilnya ke dalam variabel luas. 
Syarat: Proses perhitungan ini wajib menggunakan ptrPanjang dan ptrLebar. 
4) Cetak nilai luas ke layar. 
5) Setelah itu, ubah nilai panjang menjadi 12 dan lebar menjadi 6, juga hanya melalui 
pointer ptrPanjang dan ptrLebar. 
6) Cetak nilai panjang dan lebar yang baru untuk membuktikan bahwa 
nilainya telah berubah. 

```C++
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
```
### Output Unguided 2 :

##### Output 2
![Deskripsi Gambar](https://raw.githubusercontent.com/daffa-tsaqifna-f-if/103112400032_Daffa-Tsaqifna-Fauztsany/main/meet%202/unguided%20output/output-2.png
)


Program C++ ini menggunakan pointer untuk mengakses dan memanipulasi nilai panjang dan lebar sebuah persegi panjang. Fungsi output1() menampilkan nilai awal, output2() menghitung luas dan keliling berdasarkan nilai tersebut, dan output3() mengubah nilai panjang dan lebar melalui pointer lalu menampilkan hasil perubahannya. Program ini menunjukkan bagaimana pointer dapat digunakan untuk membaca dan mengubah data secara langsung dari variabel aslinya.



## Kesimpulan
Modul ini mengajarkan penggunaan array, fungsi, dan pointer dalam C++. Mahasiswa belajar mengolah data, membuat program modular, dan memahami cara kerja pointer lewat berbagai tugas program. Praktikum memperkuat dasar logika dan struktur program C++.

## Referensi
[1]Narounta, F. G., & Adrian, F. (2019). Perancangan Game Edukasi C++ Programming Sebagai Media Pembelajaran Logika Pemrograman. Jurnal SIFO Mikroskil.
Tautan Artikel

[2]Taufan, M. R. A., & Yuliani, Y. (2022). Penerapan Algoritma Brute Force dalam Pencarian Rute Terpendek pada Aplikasi Peta Digital Menggunakan Bahasa C++. Jurnal Algoritma.
Tautan Artikel

[3]Yudistira, A. D., Jo, I. H., dkk. (2021). A Game Development-Based Learning Model to Improve Student Learning Motivation in the C++ Programming Language Course. 2021 International Conference on Information and Communication Technology Convergence (ICTC).
Tautan Artikel (IEEE Xplore)