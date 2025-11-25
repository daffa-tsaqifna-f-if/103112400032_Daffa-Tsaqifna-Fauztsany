#include <iostream>
using namespace std;

typedef struct node *address;

struct node {
    string DATA;
    address next;
};

struct linkedlist {
    address first;
};

void createList(linkedlist &List) {
    List.first = NULL;
}

void insertFirst(linkedlist &List, string value) {
    address newNode = new node;
    newNode->DATA = value;
    newNode->next = List.first;
    List.first = newNode;
}


void deletel(linkedlist &List, string value) {
    if (List.first != NULL) {
        address temp = List.first;
        while (List.first != NULL){
            if (temp->next->DATA == value){
                temp->next = temp->next->next;
                List.first = temp;
            }else{
                temp= temp->next;
            }
        }
    }else{
        cout << "not found cant delete";
    }
}

void printList(linkedlist List) {
    address temp = List.first;
    while (temp != NULL) {
        cout << temp->DATA << " ";
        temp = temp->next;
    }
}

int genap (linkedlist List){
    address temp = List.first;
    int x;
    while (temp !=nullptr){
        if (temp->DATA == "idk" ){
            x++;
            temp = temp->next;
        }else{
            temp = temp->next;
        }
    }
    return x;
}



int main() {
    int x;
    string y;
    linkedlist ll;
    createList(ll);

    while (true){
        cout<<"menu \n1. insert\n2. delete\n3. view\n4. hitung genap\n0. EXIT"<<endl;
        cin >> (x);
        switch (x){
            case 1:
                cout << "masukan nama : ";
                cin >> y;
                insertFirst(ll,y);
                break;
            case 2:
                cout << "masukan nama untuk delete";
                cin >> y;
                deletel(ll,y);
                break;
            case 3:
                printList(ll);
                break;
            case 4:
                cout << "jumblah nama dengan huruf genap";
                cout << genap(ll);
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