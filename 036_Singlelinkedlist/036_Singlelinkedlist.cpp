#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
    int nim;
    string nama;
    Node* nodeBaru = new Node();

    cout << "Masukkan NIM  : ";
    cin >> nim;
    cout << "Masukkan nama : ";
    cin >> nama;

    if (START == NULL || nim <= START->noMhs) {
        if (START != NULL && nim == START->noMhs) {
            cout << "\nNIM sudah ada!" << endl;
            return;
        }
        nodeBaru->next = START;
        START = nodeBaru;
        return;
    }

    while ((current != NULL) && (nim >= current->noMhs)) {
        if (nim == current->noMhs) {
            cout << "\nNIM sudah ada!" << endl;
            return;
        }
        previous = current;
        current = current->next;
    }
}