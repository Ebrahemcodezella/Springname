#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* previous;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    bool is_empty() {
        return head == nullptr;
    }

    void insert(int data) {
        Node* newnode = new Node();
        newnode->data = data;
        newnode->next = nullptr;

        if (is_empty()) {
            newnode->previous = nullptr;
            head = newnode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->previous = temp;
        }

        cout << "Insertion is done: " << data << endl;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insert(10);
    dll.insert(20);
    dll.insert(30);

    dll.display();

    return 0;
}