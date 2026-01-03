#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node*& head, int value) {
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

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* middle(Node* start, Node* end) {
    Node* slow = start;
    Node* fast = start->next;

    while (fast != end) {
        fast = fast->next;
        if (fast != end) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    return slow;
}

Node* binarySearch(Node* head, int key, bool showNext) {
    Node* start = head;
    Node* end = NULL;
    int iterasi = 1;

    cout << "\nProses Pencarian:\n";

    while (start != end) {
        Node* mid = middle(start, end);

        if (mid->data == key) {
            cout << "Iterasi " << iterasi
                 << ": Mid = " << mid->data
                 << " (indeks tengah) - DITEMUKAN!\n";
            return mid;
        }
        else if (mid->data > key) {
            cout << "Iterasi " << iterasi
                 << ": Mid = " << mid->data
                 << " (indeks tengah) -> Cari di bagian kiri\n";
            end = mid;
        }
        else {
            cout << "Iterasi " << iterasi
                 << ": Mid = " << mid->data
                 << " (indeks tengah) -> Cari di bagian kanan\n";
            start = mid->next;
        }
        iterasi++;
    }

    cout << "Tidak ada elemen tersisa\n";
    return NULL;
}

int main() {
    Node* head = NULL;

    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);
    append(head, 50);
    append(head, 60);

    cout << "BINARY SEARCH PADA LINKED LIST\n";
    cout << "Linked List yang dibuat: ";
    printList(head);

    int cari1 = 40;
    cout << "Mencari nilai: " << cari1 << endl;

    Node* hasil1 = binarySearch(head, cari1, true);

    if (hasil1 != NULL) {
        cout << "\nHasil: Nilai " << cari1 << " DITEMUKAN pada linked list!\n";
        cout << "Alamat node: " << hasil1 << endl;
        cout << "Data node: " << hasil1->data << endl;
        if (hasil1->next != NULL)
            cout << "Node berikutnya: " << hasil1->next->data << endl;
    }

    int cari2 = 25;
    cout << "Mencari nilai: " << cari2 << endl;

    Node* hasil2 = binarySearch(head, cari2, false);

    if (hasil2 == NULL) {
        cout << "\nHasil: Nilai " << cari2
             << " TIDAK DITEMUKAN dalam linked list!\n";
    }

    return 0;
}
