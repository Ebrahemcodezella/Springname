#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;
};
class Singel_Linkedlist
{
public:
    node *head;
    Singel_Linkedlist()
    {
        head = NULL;
    }
    bool isempty()
    {
        return head == NULL;
    }
    void addtohead(int data)
    {
        node *newnode = new node();
        newnode->data = data;
        if (isempty())
        {
            head = newnode;
            newnode->next = NULL;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void addtotail(int data)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = NULL;
        if (isempty())
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void isfound(int item)
    {
        if (head == NULL)
        {
            cout << "List is empty \n";
            return;
        }
        node *temp = head;
        bool flage = true;
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                cout << "\nIs found ";
                flage = false;
                break;
            }
            temp = temp->next;
        }
        if (flage)
        {
            cout << "\nnot found";
        }
    }
    void count()
    {
        node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        cout << "number of nodes is " << count << endl;
    }
    void sumodd()
    {
        node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            if (temp->data % 2 == 1)
            {
                count += temp->data;
            }
            temp = temp->next;
        }
        cout << "Odd sum is " << count << endl;
    }
    void getmini()
    {
        node *temp = head;
        int count = head->data;
        while (temp != NULL)
        {
            if (count > temp->data)
            {
                count = temp->data;
            }
            temp = temp->next;
        }
        cout << "mini is " << count << endl;
    }
    void dispaly()

    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    // Singel_Linkedlist copylist()
    // {
    //     Singel_Linkedlist copy1;
    // if(head==NULL)
    // {
    //     return copy1;
    // }
    // else
    // {
    //     node* current =head;
    //     node* temp =head;
    //     copy1.head=new node();
    //     copy1.head->data=current->data;
    //     copy1.head->next=NUUL;
    // while(temp!=NULL)
    // {
    //     temp=temp->next;
    // }
    // }
    //     return copy1;
    // }

    void delet(int value)
    {
        node *delptr = head;
        node *prev = NULL;
        // node *temp = head;
        if (head->data == value)
        {
            head = head->next;
            delete delptr;
        }
        while (delptr->data != value)
        {
            prev = delptr;
            delptr = delptr->next;
        }
        prev->next = delptr->next;
        delete delptr;
    }
    void insertbefore(int post, int value)
    {
        node *temp = head;
        node *newnode = new node();
        newnode->data = value;
        while (temp != NULL && temp->next->data != post)
        {

            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
};
int main()
{
    Singel_Linkedlist s1;
    Singel_Linkedlist s2;
    s1.addtohead(12);
    s1.addtohead(13);
    s1.addtohead(14);
    s1.addtotail(45);
    s1.addtotail(-9);
    s1.addtotail(0);
    s1.addtotail(45);
    s1.addtotail(65);
    s1.addtotail(87);
    s1.delet(0);
    s1.insertbefore(65, 50);
    s1.dispaly();
    s1.count();
    s1.sumodd();
    s1.getmini();
    //s1.copylist();
    return 0;
}