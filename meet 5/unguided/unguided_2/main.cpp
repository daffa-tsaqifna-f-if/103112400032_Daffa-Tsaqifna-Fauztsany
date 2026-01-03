#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node* &head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* linearSearch(Node* head, int target) {
    Node* current = head;
    int step = 1;

    while (current != NULL) {
        cout << "Langkah " << step++ << endl;
        cout << "Memeriksa node dengan data: " << current->data << endl;
        cout << "Alamat node: " << current << endl;

        if (current->data == target) {
            if (current->next != NULL)
                cout << "Data node berikutnya: " << current->next->data << endl;
            else
                cout << "Node ini adalah node terakhir" << endl;

            cout << endl;
            return current;
        }

        cout << endl;
        current = current->next;
    }
    return NULL;
}

int main() {
    Node* head = NULL;

    append(head, 5);
    append(head, 12);
    append(head, 3);
    append(head, 9);

    int key = 3;
    cout << "Mencari data: " << key << endl << endl;

    Node* result = linearSearch(head, key);

    if (result != NULL) {
        cout << "Data ditemukan!" << endl;
        cout << "Alamat memori node: " << result << endl;
    } else {
        cout << "Data tidak ditemukan dalam linked list" << endl;
    }

    return 0;
}
