#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
class DoublyLinkedList
{
private:
    Node *head;
    
public : DoublyLinkedList() : head(nullptr) {};

public:
    bool isempty()
    {
        return head == nullptr;
    }
    void insertAtHead(int data)
    {
        Node *node = new Node();
        node->data = data;
        if (isempty())
        {
            head = node;
            node->next = nullptr;
            node->prev = nullptr;
        }
        else
        {
            node->next = head;
            head->prev = node;
            head = node;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " " ;
            temp = temp->next;
        }
        cout << endl;
    }
    void insertAtTail(int data)
    {
        Node *node = new Node();
        node->data = data;
        Node* temp=head;
        if(isempty())
        {
            head=node;
            node->next = nullptr;
            node->prev = nullptr;
        }else{
            while(temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next= node;
            node->prev = temp;
            node->next=nullptr;
        }
    }

};
int main()
{
    DoublyLinkedList dll;
    // dll.insertAtTail(5);
    // dll.insertAtHead(4);
    // dll.insertAtHead(3);
    // dll.insertAtHead(2);
    // dll.insertAtHead(1);
    // dll.display();
    dll.insertAtTail(5);
    dll.insertAtTail(4);
    dll.insertAtTail(3);
    dll.insertAtTail(2);
    dll.insertAtTail(1);
    dll.insertAtHead(6);
    dll.insertAtTail(0);
    dll.display();
    return 0;
}