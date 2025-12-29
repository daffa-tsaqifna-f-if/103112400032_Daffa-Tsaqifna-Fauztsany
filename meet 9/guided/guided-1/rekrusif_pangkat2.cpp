#include <iostream>
using namespace std;

int pangkat_2(int x){
    if (x==0){
        return 1;
    }else {
        return 2 *pangkat_2(x-1);
    }
}

int main() {
    cout << "=== rekrusif pangkat 2 ==="<<endl;
    int x;
    cout << "masukkan nilai x: ";
    cin >> x;
    cout <<endl;
    cout << "pangkat 2 dari "<< x<< " adalah : "<< pangkat_2 (x);
    return 0;
}