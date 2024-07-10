#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, int num) {
    Node* newNode = new Node(num);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node* head) {
    cout << "Linked list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    while (1) {
        cout << "01. Insert at tail" << endl;
        cout << "02. Print Linked List" << endl;
        cout << "03. Break !!!" << endl;
        int choice, num;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> num;
            insert_tail(head, num);
        } else if (choice == 2) {
            print_linked_list(head);
        } else {
            cout << "Thank you !!!" << endl;
            break;
        }
    }
    return 0;
}
