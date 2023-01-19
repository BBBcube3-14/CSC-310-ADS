#include "solutionHeader.hpp"
#include <iostream>
#include <string>
using namespace std;

/****Not using template code that works. See header file for error causing template code.****/
//template<typename T>
/*
struct node{
    //T data;
    int data;
    node* next;
};

void insert_front(node*& head, int d){
    node* newNode = new node();
    newNode->data = d;
    newNode->next = head;
    head = newNode;
    return;
}

void insert_back(node*& head, int d){
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

void search_list(node* head, int d){
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

void insert_front(node*& head, T d){
    node* newNode = new node();
    newNode->data = d;
    newNode->next = head;

    head = newNode;
    return;
}

void insert_back(node*& head, T d){
    if(head == nullptr){
        node* newNode = new node();
        newNode->data = d;
        newNode->next = nullptr;
        head = newNode;
        return;
    }else{
        node* newNode = new node;
        newNode->data = d;
        node* ptr = head;
        while(ptr!=nullptr){
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

void search_list(T data, node* head){
    node* ptr = head;
    while(ptr != nullptr && ptr->data != data){
        ptr = ptr->next;
    }
    if(ptr == nullptr){
        cout << "Index not found";
    }else{
        cout << "Index found";
    }
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
    while(ptr->next != nullptr){
        ptr = ptr->next;
    }
    delete(ptr->next);
    ptr->next = nullptr;
    return;
}
*/

int main(){
    node<T>* head = nullptr;

    insert_front<int>(head,1);
    insert_back<int>(head,2);
    insert_back<int>(head,3);
    print_list<int>(head);

    search_list<int>(head, 4);

    remove_front<int>(head);
    remove_back<int>(head);
    print_list<int>(head);
    //remove_back<int>(head);

    return 0;
}