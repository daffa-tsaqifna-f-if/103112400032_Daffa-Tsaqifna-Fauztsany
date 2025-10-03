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