#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* temp = NULL;

    int n;

    cout << "How many nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        Node* newNode = new Node();

        cout << "Enter data: ";
        cin >> newNode->data;

        newNode->next = NULL;
        newNode->prev = NULL;

        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    cout << "Double Linked List:\n";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
