#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;
    Node(int x)
    {
        key = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int v)
{
    Node *temp;
    temp = new Node(v);
    temp->next = head;

    return temp;
}

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->key << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head = insertBegin(head, 15);
    head = insertBegin(head, 20);
    head = insertBegin(head, 25);
    print(head);
    return 0;
}
