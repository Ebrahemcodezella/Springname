#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linkedlist
{
public:
    node *head;

public:
    linkedlist()
    {
        head = NULL;
    }
    bool isempty()
    {
        return (head == NULL);
    }
    void inserttohead(int item)
    {
        node *newnode = new node();
        newnode->data = item;
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
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void addtotail(int item)
    {
        node *newnode = new node();
        newnode->data = item;
        if (isempty())
        {
            head = newnode;
            newnode->next = NULL;
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
        bool flage = true;
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                cout << "Item is found " << endl;
                flage = false;
                break;
            }
            temp = temp->next;
        }
        if (flage)
        {
            cout << "item not found " << endl;
        }
    }
    void count()
    {
        int count = 0;
        node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        cout << "Number of nodes is " << count << endl;
    }
    void sum(string str = "all")
    {
        node *temp = head;
        int sum = 0;
        int sume = 0;
        int sumd = 0;
        while (temp != NULL)
        {
            if (str == "all")
            {
                sum += temp->data;
            }
            else if (str == "odd" && temp->data % 2 != 0)
            {
                sum += temp->data;
            }
            else if (str == "even" && temp->data % 2 == 0)
            {
                sume += temp->data;
            }
            temp = temp->next;
        }
        if (str == "all")
        {
            cout << "Sum of all elements is " << sum << endl;
        }
        else if (str == "odd")
        {
            cout << "Sum of odd numbers is " << sum << endl;
        }
        else if (str == "even")
        {
            cout << "Sum of even numbers is " << sume << endl;
        }
    }
    void getminiormax(string str)
    {
        node *temp = head;
        int min = head->data;
        int max = head->data;
        while (temp != NULL)
        {
            if (str == "min" && temp->data < min)
            {
                min = temp->data;
            }
            else if (str == "max" && temp->data > max)
            {
                max = temp->data;
            }
            temp = temp->next;
        }
        if (str == "max")
        {
            cout << "Maximum element is " << max << endl;
        }
        else if (str == "min")
        {
            cout << "Minimum element is " << min << endl;
        }
    }
    void delet(int value)
    {
        node *temp = head;
        node *prev = NULL;
        if (isempty())
        {
            cout << "List is empty" << endl;
        }
        while (temp != NULL && temp->data != value)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        cout << "element " << value << " is deleted" << endl;
        delete temp;
    }
    void insertbefore(int post, int value)
    {
        node *temp = head;
        node *newnode=new node();
        while (temp!=NULL&&temp->next->data!=post)
        {
            temp= temp->next;
        }
        newnode->data=value;
        newnode->next=temp->next;
        //temp=newnode;
        temp->next = newnode;
    }
};

int main()
{
    linkedlist s1;
    s1.inserttohead(4);
    s1.inserttohead(3);
    s1.inserttohead(2);
    s1.inserttohead(1);
    s1.addtotail(6);
    //s1.insertbefore(6,5);
    // s1.isfound(12);
    // s1.isfound(5);
    // s1.count();
    // s1.sum();
    // s1.sum("odd");
    // s1.sum("even");
    // s1.getminiormax("min");
    // s1.getminiormax("max");
    // s1.delet(3);
    s1.display();
}