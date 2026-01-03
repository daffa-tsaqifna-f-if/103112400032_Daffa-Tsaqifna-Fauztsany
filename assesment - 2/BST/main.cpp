#include "BST.h"
#include <iostream>
using namespace std;

int main() {
    list* root;
    createTree(root);
    //data
    member m1 = {"Rizkina Azizah", "Basic", 60};
    member m2 = {"Hakan Ismail", "Bronze", 50};
    member m3 = {"Olivia Saevali", "Silver", 65};
    member m4 = {"Felix Pedrosa", "Gold", 47};
    member m5 = {"Gamel Al Ghifari", "Platinum", 56};
    member m6 = {"Hanif Al Faiz", "Basic", 70};
    member m7 = {"Mutiara Fauziah", "Bronze", 52};
    member m8 = {"Davi Ilyas", "Silver", 68};
    member m9 = {"Abdad Mubarok", "Gold", 81};
    //insert
    root = insertNode(root, m1);
    root = insertNode(root, m2);
    root = insertNode(root, m3);
    root = insertNode(root, m4);
    root = insertNode(root, m5);
    root = insertNode(root, m6);
    root = insertNode(root, m7);
    root = insertNode(root, m8);
    root = insertNode(root, m9);

    //stuff
    InOrder(root);
    cout <<endl;
    mostLeft(root);
    cout <<endl;
    mostRight(root);
    cout <<endl;
    searchNode(root, 70);
    

    return 0;
}
