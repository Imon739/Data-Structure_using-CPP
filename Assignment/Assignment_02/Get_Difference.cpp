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

int difference(Node* head){
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    Node* temp = head;
    while(temp != NULL){
        if(temp->value < minVal){
            minVal = temp->value;
        }
        if(temp->value > maxVal){
            maxVal = temp->value;
        }
        temp = temp->next;
    }

    int diff = maxVal - minVal;
    return diff;
}

int main(){
    int x;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter value : ";
    while(true){
        cin >> x;
        if(x == -1){
            break;
        }
        insert_at_tail(head, tail, x);
    }

    int diff = difference(head);
    cout << "Difference is " << diff << endl;

    return 0;
}
