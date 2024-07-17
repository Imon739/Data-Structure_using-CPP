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

int Search(Node *head, int X){
    Node *temp =head;
    int pos = 0;
    while(temp!=NULL){
        if(temp->value == X){
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}

int main(){
    int T;
    cin>>T;
    int x;

    while(T--){
        Node *head = NULL;
        Node *tail = NULL;

        while(true){
            cin >> x;
            if(x == -1){
                break;
            }
            insert_at_tail(head, tail, x);
        }
        int target;
        cin >> target;
        cout << Search(head, target)<<endl;;
    }
    return 0;
}
