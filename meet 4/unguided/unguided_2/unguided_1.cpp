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