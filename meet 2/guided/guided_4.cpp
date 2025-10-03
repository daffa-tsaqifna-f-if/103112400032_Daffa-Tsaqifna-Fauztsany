#include <iostream>
using namespace std;

void ubahnilai(int* ptr){
    *ptr = 20;
}


 int main(){
    int x = 10;
    cout << "Nilai sebelum diubah: " << x << endl;
    ubahnilai(&x);
    cout << "Nilai setelah diubah: " << x << endl;
     return  0;
    
 }