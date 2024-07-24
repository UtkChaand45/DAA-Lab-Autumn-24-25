#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
 
    Node *next; // self referential structure
 
    Node(int x) // constructor
    {
        data = x;
        next = nullptr;
    }

    Node(int x, Node* Next) // constructor
    {
        data = x;
        next = Next;
    }
};

void insertionSort1(Node* head,int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int cur = arr[i];
        while(j>=0 && arr[j]>cur){
                arr[j+1] = arr[j];
                j = j - 1;
        }
        arr[j+1] = cur;
    }
}

void printNode(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* arrToLL(vector<int>arr,int n){
    Node* head = new Node(arr[0]);
    for(int i = 1; i < n; i++){
        Node* temp = new Node(arr[i]);

    }
}