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