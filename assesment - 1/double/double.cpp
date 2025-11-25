#include <iostream>
using namespace std;

typedef struct node *address;

struct node {
    int DATA;
    address next;
    address prev;
};

struct doublylist {
    address first;
};

void createDList(doublylist &List) {
    List.first = nullptr;
}

void insertLast(doublylist &List, address nodeBaru) {
    if (List.first == nullptr) {
        List.first = nodeBaru;
    } else {
        address nodeBantu = List.first;
        while (nodeBantu->next != nullptr) {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
        nodeBaru->prev = nodeBantu;
    }
}
void deleteLast(doublylist &List) {
    if (List.first != nullptr) {
        if (List.first->next == nullptr) {
            delete List.first;
            List.first = nullptr;
        } else {
            address temp = List.first;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }
}

void printForward(doublylist List) {
    address temp = List.first;
    while (temp != nullptr) {
        cout << temp->DATA << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(doublylist List) {
    if (List.first == nullptr) return;
    address temp = List.first;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    while (temp != nullptr) {
        cout << temp->DATA << " ";
        temp = temp->prev;
    }
    cout << endl;
}


int main() {
     int x, y;
    doublylist dl;
    createDList(dl);
    address temp;
    while (true){
        cout<<"menu \n1. insert\n2. delete\n3. view depan\n4. reverse & view depan\n0. EXIT"<<endl;
        cin >> (x);
        switch (x){
            case 1:
                cout << "masukan nilai : ";
                cin >> y;
                temp->DATA = y;
                insertLast(dl,temp);
                break;
            case 2:
                deleteLast(dl);
                break;
            case 3:
                printForward(dl);
                break;
            case 4:
                printBackward(dl);
                break;
            case 0:
                return 0;
                break;
            default:
                break;
            }
        }

    return 0;
}