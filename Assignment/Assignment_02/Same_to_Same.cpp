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

int main(){
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int value1;
    while(true){
        cin >> value1;
        if(value1 == -1){
            break;
        }
        insert_tail(head1, tail1, value1);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int value2;
    while(true){
        cin >> value2;
        if(value2 == -1)
            break;
        insert_tail(head2, tail2 , value2);
    }

    Node *temp1 = head1;
    Node *temp2 = head2;
    bool result = true;

    while(temp1 != NULL && temp2 != NULL){
        if(temp1->value != temp2->value){
            result = false;
            break;
        }
        temp1 =temp1->next;
        temp2 =temp2->next;
    }

    if(temp1 != NULL||temp2 != NULL) {
        result=false;
    }

    if(result)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
