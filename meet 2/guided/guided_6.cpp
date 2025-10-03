#include <iostream>
using namespace std;

int carimax(int arr[], int ukuran) {
    int max = arr[0];
    for (int i = 1; i < ukuran; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void operasiaritmatika(int arr[], int ukuran){
    int totaljumblah = 0;
    for (int i = 0; i < ukuran; i++){
        totaljumblah += arr[i];
    }
    cout << "Total jumblah: " << totaljumblah << endl;
    int totalkali = 1;
    for (int i = 0; i < ukuran; i++){
        totalkali *= arr[i];
    }
    cout << "Total kali: " << totalkali << endl;
}

int main() {
    const int ukuran = 5;
    int arr[ukuran];
    for (int i = 0; i < ukuran; i++){
        cout << "Masukkan nilai array ke-" << i << ": ";
        cin >> arr[i];
    }
    cout <<endl;
    cout << "Nilai terbesar dalam array: " << carimax(arr, ukuran) << endl;
    operasiaritmatika(arr, ukuran);
    return 0;
}