#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, int num)
{
    Node* newNode = new Node(num);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node* head)
{
    cout << "Linked list: ";
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insert_any_pos(Node* &head, int num, int pos)
{
    Node* newNode = new Node(num);
    Node* temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_head(Node* &head, int num)
{
    Node* newNode = new Node(num);
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node* head = NULL;
    while (1)
    {
        cout << "01. Insert at tail" << endl;
        cout << "02. Print Linked List" << endl;
        cout << "03. Insert any position" << endl;
        cout << "04. Insert at head" << endl;
        cout << "05. Break !!!" << endl;
        int choice, num, pos;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter value: ";
            cin >> num;
            insert_tail(head, num);
        }
        else if (choice == 2)
        {
            print_linked_list(head);
        }
        else if(choice == 3)
        {
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> num;

            insert_any_pos(head, num, pos);
        }
        else if(choice == 4)
        {
            cout << "Enter value: ";
            cin >> num;
            insert_head(head, num);
        }
        else
        {
            cout << "Thank you !!!" << endl;
            break;
        }
    }
    return 0;
}

