#include <iostream>
using namespace std;


void Show(int a[3][3], int b[3][3]) {
    cout << "\nArray A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nArray B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout <<endl;
}


void Swappos(int a[3][3], int b[3][3]) {
    int baris1, kolom1,baris2, kolom2;
    cout << "Masukkan baris (1-3) untuk array A: ";
    cin >> baris1;
    --baris1;
    cout << "Masukkan kolom (1-3) untuk array A: ";
    cin >> kolom1;
    --kolom1;

    cout << "Masukkan baris (1-3) untuk array B: ";
    cin >> baris2;
    --baris2;
    cout << "Masukkan kolom (1-3) untuk array B: ";
    cin >> kolom2;
    --kolom2;

    int temp = a[baris1][kolom1];
    a[baris1][kolom1] = b[baris2][kolom2];
    b[baris2][kolom2] = temp;

    cout << "Isi array berhasil ditukar pada posisi\n";
    Show(a,b);
}

void Swapptr(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "Nilai yang ditunjuk pointer berhasil ditukar\n";
}


int main() {
    int choice;
    int *p1, *p2;
    int arr1, r1, c1;
     int arr2, r2, c2;

    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[3][3] = {
        {10,11,12},
        {13,14,15},
        {16,17,18}
    };

    while(true){
        cout << "Apa yang ingin di lakuka\n";
        cout << "1. Menampilkan Array\n";
        cout << "2. Menukar isi Array\n";
        cout << "3. Menukar variable ptr\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice){
        case 1:
            Show(a,b);
            break;
        case 2:
            Swappos(a,b);
            break;
        case 3:
            cout << "Pointer 1 (array 1=A, 2=B): ";
            cin >> arr1;
            cout << "Baris: ";
            cin >> r1;
            cout << "Kolom: ";
            cin >> c1;

            cout << "Pointer 2 (array 1=A, 2=B): ";
            cin >> arr2;
            cout << "Baris: ";
            cin >> r2;
            cout << "Kolom: ";
            cin >> c2;

            if (arr1 == 1)
                p1 = &a[r1][c1];
            else
                p1 = &b[r1][c1];

            if (arr2 == 1)
                p2 = &a[r2][c2];
            else
                p2 = &b[r2][c2];

            Swapptr(p1, p2);
            Show (a,b);
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