#include <iostream>
using namespace std;



const int MAX=5;

struct paket{
    string KodeResi, NamaPengirim,tujuan;
    int beratbarang;
};


struct Queue {
    paket info[MAX];
    int head;
    int tail;
    int count;
};

bool isEmpty(Queue Q) {
    return Q.count == 0;
}

bool isFull(Queue Q) {
    return Q.count == MAX;
}

void createQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = 0;
    Q.count = 0;
}

void enqueue(Queue &Q,  x) {
    if (!isFull(Q)) {
        Q.info[Q.tail] = x;
        Q.tail = (Q.tail + 1) % MAX;
        Q.count++;
    } else {
        cout << "Antrean Penuh!" << endl;
    }
}

void dequeue(Queue &Q) {
    if (!isEmpty(Q)) {
        Q.head = (Q.head + 1) % MAX;
        Q.count--; 
    } else {
        cout << "Antrean Kosong!" << endl;
    }
}


int main() {
    
    return 0;
}