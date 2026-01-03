#ifndef BST_H
#define BST_H
#include <iostream>
using namespace std;

struct member{
    string nama, tier;
    float bb;
};

struct list{
    member data;
    list* left;
    list* right;
};


bool isEmpty(list* root);
void createTree(list* &root);

list* newNode(member x);
list* insertNode(list* root, member x);

void searchNode(list* root, float bb);

void mostLeft(list* root);
void mostRight(list* root);

void InOrder(list* root);



#endif // BST_H