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
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicates(Node* &head) {
    for (Node* i = head; i != NULL; i = i->next) {
        Node* prev = i;
        for (Node* j = i->next; j != NULL; ) {
            if (j->value == i->value) {
                Node* temp = j;
                prev->next = j->next;
                j = j->next;
                delete temp;
            } else {
                prev = j;
                j = j->next;
            }
        }
    }
}

void print_linked_list(Node *head)
{
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->value << " ";
        temp1 = temp1->next;
    }
    cout << endl;
}

int main()
{
    int x;
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
    }
    remove_duplicates(head);
    print_linked_list(head);
}
