#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = next;
    }
};
void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while(1)
    {
        cin >> value;
        if(value == -1)
        {
            break;
        }
        insert_tail(head, tail, value);
    }

    for(Node* i = head;i != NULL;i->next)
    {
        for(Node *j = i->next;j != NULL;j->next)
        {
            if(i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    print_linekd_list(head);
    return 0;
}
