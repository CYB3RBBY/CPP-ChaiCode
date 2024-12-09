#include <bits/stdc++.h>
using namespace std;

// Node Structure
struct Node {
    int data;
    Node * prev;
    Node * next;
};

// Function to create a new node 
Node * createNode(int data){
    Node * newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}