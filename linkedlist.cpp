#include <iostream>
using namespace std;
class node
{
public:
	int Data = 0;
	node* next;
};
class linkedlist
{
	public:
	node* head;
	linkedlist()
	{
		head = NULL;
	}
	bool isempty()
	{
		return (head == NULL);
	}
	void inserthead(int item)
	{
		node* newnode = new node;  
		newnode->Data = item; 
		if (isempty())
		{
			newnode->next = NULL;
			head = newnode ;
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}
	}
	void display()
	{
		node* temp = head;
		while (temp != NULL)
		{
			cout << temp->Data <<" ";
			temp = temp->next;
			
		}
		
	}
	void counter()
	{
		int count = 0;
		node* temp = head;
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		cout << "the number of element is "<<count<<"\n";
	}
	bool isfound(int key)
	{
		bool found = false; 
		node* temp = head;
		while (temp != NULL)
		{
			if (temp->Data == key)
			{
				found = true;
				break;
			}
			temp = temp->next;
		}
		return found;
	}
	void insertbefore(int item,int newvalue)
	{
		if (isempty())
		{ 
			inserthead(item);
		}
		return;
			if (isfound(item))
			{
				node* newnode = new node();
				newnode->Data = newvalue;
				node* temp = head;
				while (temp->next != NULL && temp->next->Data != item)//temp->next != NULL && temp->next&&temp->Data != item
				{
					temp = temp->next;

				}
				newnode->next = temp->next;
				temp->next = newnode;
			}
			else
			{
				cout << "Please enter invaled item ";
			}
			
	}
	void append(int value)
	{
		node* newnode = new node();
		node* temp = head;
		newnode->Data = value;
		if (isempty())
			inserthead(value);
		else
		{
			while (temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next = newnode;

			newnode->next = NULL;
		}

	}
	//void delet(int item)
	//{
	//	node* delptr = head;
	//	head = head->next;
	//	if (delptr->Data == head->Data)
	//	{
	//		delete;
	//	}
	//}
};
int main()
{
	cout << "welcome to our Linked list \n";
	linkedlist lis;
	if (lis.isempty())
	{
		cout << "list is empty \n";
	}
	
	int number = 0;
	cout << "insret the number to list : ";
	cin >> number;
	lis.inserthead(number);
	cout << "insret the number to list : ";
	cin >> number;
	lis.inserthead(number);
	cout << "insret the number to list : ";
	cin >> number;
	lis.inserthead(number);
	lis.counter();
	//lis.display();
	cout << "\nEnter  value to the end \n";
	int value=0;
	cin >> value;
	lis.append(value);
	lis.display();
	cout << endl;
	lis.counter();

	/*int item, newvalue;
	cin >> item >> newvalue;
	lis.insertbefore(item, newvalue);
	lis.display();*/

	return 0;
}
//
