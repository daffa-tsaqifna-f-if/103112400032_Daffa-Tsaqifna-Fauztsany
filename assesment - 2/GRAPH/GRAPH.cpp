#include "graph.h"


void createGraph(Graph &G) {
    G.first = NULL;
    G.totalNodes = 0;
}

Node* newNode(char id) {
    Node* P = new Node;
    P->id = id;
    P->isLockedDown = false;
    P->visited = false;
    P->firstEdge = NULL;
    P->next = NULL;
    return P;
}

Edge* newEdge(Node* dest) {
    Edge* E = new Edge;
    E->dest = dest;
    E->next = NULL;
    return E;
}

void addNode(Graph &G, char id) {
    Node* P = newNode(id);

    if (G.first == NULL) {
        G.first = P;
    } else {
        Node* temp = G.first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = P;
    }
    G.totalNodes++;
}

Node* findNode(Graph G, char id) {
    Node* curr = G.first;
    while (curr != NULL) {
        if (curr->id == id) {
            return curr;
        }
        curr = curr->next;
    }
    return NULL;
}

void addEdge(Graph &G, char src, char dest) {
    Node* srcNode = findNode(G, src);
    Node* destNode = findNode(G, dest);

    if (srcNode != NULL && destNode != NULL) {
        Edge* E1 = newEdge(destNode);
        E1->next = srcNode->firstEdge;
        srcNode->firstEdge = E1;

        Edge* E2 = newEdge(srcNode);
        E2->next = destNode->firstEdge;
        destNode->firstEdge = E2;
    }
}

void resetVisited(Graph &G) {
    Node* curr = G.first;
    while (curr != NULL) {
        curr->visited = false;
        curr = curr->next;
    }
}

void DFS(Node* curr) {
    if (curr == NULL || curr->visited || curr->isLockedDown) {
        return;
    }

    curr->visited = true;

    Edge* E = curr->firstEdge;
    while (E != NULL) {
        DFS(E->dest);
        E = E->next;
    }
}

int countVisitedNodes(Graph G) {
    int count = 0;
    Node* curr = G.first;

    while (curr != NULL) {
        if (curr->visited && !curr->isLockedDown) {
            count++;
        }
        curr = curr->next;
    }
    return count;
}

void printGraph(Graph G) {
    cout << "Membangun Jaringan Distribusi Vaksin\n";
    Node* curr = G.first;

    while (curr != NULL) {
        cout << "Node " << curr->id << " terhubung ke: ";
        Edge* E = curr->firstEdge;
        while (E != NULL) {
            cout << E->dest->id << " ";
            E = E->next;
        }
        cout << endl;
        curr = curr->next;
    }
    cout << endl;
}

void analisisKotaKritis(Graph G) {
    cout << "Analisis Kota Kritis (Single Point of Failure)\n";

    Node* target = G.first;
    while (target != NULL) {
        target->isLockedDown = true;

        resetVisited(G);

        Node* start = G.first;
        if (start == target) {
            start = start->next;
        }

        if (start != NULL) {
            DFS(start);
        }

        int visitedCount = countVisitedNodes(G);
        int expected = G.totalNodes - 1;

        if (visitedCount < expected) {
            cout << "[PERINGATAN] Kota " << target->id << " adalah KOTA KRITIS!\n";
            cout << "Distribusi terputus jika kota ini lockdown\n";
        } else {
            cout << "Kota " << target->id << " aman\n";
        }

        target->isLockedDown = false;
        target = target->next;
    }
}
