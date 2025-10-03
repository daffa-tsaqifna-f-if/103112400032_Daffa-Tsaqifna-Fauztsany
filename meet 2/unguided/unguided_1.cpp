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
