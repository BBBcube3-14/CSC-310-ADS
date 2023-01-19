#ifndef SOLUTIONHEADER_HPP
#define SOLUTIONHEADER_HPP
#include <iostream>
#include <string>
using namespace std;
template<typename T>

struct node{
    T data;
    //int data;
    node* next;
};

void insert_front(node*& head, T d){
    node* newNode = new node;
    newNode->data = d;
    newNode->next = head;
    head = newNode;
    return;
}

void insert_back(node*& head, T d){
    if(head == nullptr){
        node* newNode = new node;
        newNode->data = d;
        newNode->next = nullptr;
        head = newNode;
        return;
    }else{
        node* newNode = new node;
        newNode->data = d;
        node* ptr = head;
        while(ptr->next!=nullptr){
            ptr = ptr->next;
        }
        newNode->data = d;
        ptr->next = newNode;
    }
    return;
}

void print_list(node* head){
    node* ptr = head;
    while(ptr != nullptr){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    return;
}

void search_list(node* head, T d){
    node* ptr = head;
    while(ptr != nullptr && ptr->data != d){
        ptr = ptr->next;
    }
    if(ptr == nullptr){
        cout << "Index not found";
    }else{
        cout << "Index found";
    }
    cout << endl;
    return;
}
void remove_front(node*& head){
    if(head == nullptr){
        cout << "Index is empty. Canceling deletion.\n";
        return;
    }
    node* ptr = head;
    head = head->next;
    delete(ptr);
    return;
}

void remove_back(node*& head){
    if(head == nullptr){
        cout << "Index is empty. Canceling deletion.\n";
        return;
    }
    node* ptr = head;
    while(ptr->next->next != nullptr){
        ptr = ptr->next;
    }
    delete(ptr->next);
    ptr->next = nullptr;
    return;
}

#endif