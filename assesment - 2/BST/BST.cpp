#include <iostream>
#include "BST.h"
using namespace std;

bool isEmpty(list* root) {
    return root == NULL;
}

void createTree(list* &root) {
    root = NULL;
}

list* newNode(member x) {
    list* temp = new list;
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

list* insertNode(list* root, member x) {
    if (root == NULL) {
        return newNode(x);
    }

    if (x.bb < root->data.bb) {
        root->left = insertNode(root->left, x);
    } else if (x.bb > root->data.bb) {
        root->right = insertNode(root->right, x);
    }

    return root;
}

void searchNode(list* root, float bb) {
    list* parent = NULL;
    list* curr = root;

    while (curr != NULL && curr->data.bb != bb) {
        parent = curr;
        if (bb < curr->data.bb)
            curr = curr->left;
        else
            curr = curr->right;
    }

    if (curr == NULL) {
        cout << "Data tidak ditemukan\n";
        return;
    }

    cout << "Data ditemukan\n";
    cout << "Nama : " << curr->data.nama << endl;
    cout << "BB   : " << curr->data.bb << endl;
    cout << "Tier : " << curr->data.tier << endl;

    if (parent != NULL) {
        cout << "\nParent\n";
        cout << "Nama : " << parent->data.nama << endl;
        cout << "BB   : " << parent->data.bb << endl;
        cout << "Tier : " << parent->data.tier << endl;
    } else {
        cout << "\nParent : ROOT\n";
    }

    cout << "\nSibling\n";
    if (parent != NULL) {
        if (parent->left == curr && parent->right != NULL) {
            cout << "Nama : " << parent->right->data.nama << endl;
            cout << "BB   : " << parent->right->data.bb << endl;
            cout << "Tier : " << parent->right->data.tier << endl;
        } else if (parent->right == curr && parent->left != NULL) {
            cout << "Nama : " << parent->left->data.nama << endl;
            cout << "BB   : " << parent->left->data.bb << endl;
            cout << "Tier : " << parent->left->data.tier << endl;
        } else {
            cout << "NULL\n";
        }
    } else {
        cout << "NULL\n";
    }

    cout << "\nLeft Child\n";
    if (curr->left != NULL) {
        cout << "Nama : " << curr->left->data.nama << endl;
        cout << "BB   : " << curr->left->data.bb << endl;
        cout << "Tier : " << curr->left->data.tier << endl;
    } else {
        cout << "NULL\n";
    }

    cout << "\nRight Child\n";
    if (curr->right != NULL) {
        cout << "Nama : " << curr->right->data.nama << endl;
        cout << "BB   : " << curr->right->data.bb << endl;
        cout << "Tier : " << curr->right->data.tier << endl;
    } else {
        cout << "NULL\n";
    }
}
void mostLeft(list* root) {
    if (isEmpty(root)) {
        cout << "BST kosong\n";
        return;
    }

    while (root->left != NULL) {
        root = root->left;
    }

    cout << "Most Left BB : " << root->data.bb << endl;
}

void mostRight(list* root) {
    if (isEmpty(root)) {
        cout << "BST kosong\n";
        return;
    }

    while (root->right != NULL) {
        root = root->right;
    }

    cout << "Most Right BB : " << root->data.bb << endl;
}
void InOrder(list* root) {
    if (root == NULL) {
        return;
    }

    InOrder(root->left);
    cout << root->data.bb << " - ";
    InOrder(root->right);
}
