#include <iostream>
using namespace std;
//tidak membaca bahwa harus ADT
const int MAX=5;

struct mahasiswa{
    string nama,NIM;
    float Nilaitugas, NilaiUTS, NilaiUAS;
};


struct Stack {
    mahasiswa data[MAX];
    int top;
};

void createStack(Stack &S) {
    S.top = -1;
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == MAX;
}



void inputs(string nama,string NIM, float tugas, float UTS, float UAS){
}

void push(Stack &S, mahasiswa value) {
    if (S.top < MAX-1) {
        S.top++;
        S.data[S.top] = value;
    } else {
        cout << "Stack penuh!" << endl;
    }
}


void pop(Stack &S) {
    if (S.top >= 0) {
        S.top--;
    } else {
        cout << "Stack kosong!" << endl;
    }
}



int main() {
    Stack s;
    createStack (s);

    return 0;
}