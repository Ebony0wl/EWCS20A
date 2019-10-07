//
//  main.cpp
//  Assignment 4
//
//  Created by Ebony Warren on 11/4/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    long length = string(s).size();
    if (length == 1){
        cout << "yes";
        return true;
    }
    if(s[length-1] == s[0]){
        isPalindrome(string(s).substr(1, length-2));
        return true;
    }
    
    return false;
}

int   mystery1(int   a, int   b) {
    if  (b == 0) return 1;
    if  (b % 2 == 0) return mystery1(a*a,  b / 2);
    return mystery1(a*a,  b / 2) * a;
}

int   mystery2(int   a, int   b) {
    if  (b == 0) return 0;
    if  (b % 2 == 0) return mystery2(a + a,  b / 2);
    return mystery2(a + a,  b / 2) + a;
}

void printReverse(int arr[], int n) {
    if (n == 0) return;
    printReverse(arr + 1, n - 1);
    cout << arr[0] <<  ", ";
    return;
}

int sumOfDigits (int num){
    
    if(num == 1) return 1;
    
    return sumOfDigits(num - 1) + num;
}

struct Node {
    int val;
    Node* next;
};
void deleteList(Node* head) {
    if (head == nullptr){ return;}
    Node* p = head->next;
    delete head;
    deleteList(p);
    
}

Node* inPlaceMerge(Node* list1, Node* list2) {
    if(list1 == nullptr) return list2;
    if(list2 == nullptr) return list1;
    if (list1->val < list2->val){
        Node *p=inPlaceMerge(list1->next, list2);
        list1->next = p;
        return list1;
    }
    
    Node *p=inPlaceMerge(list2->next, list1);
    list2->next = p;
    return list2;
}


void addTo(int item, Node *head) {

    if(head==nullptr){
    Node *p = new Node;
    p->val = item;
    p->next = head;
    head = p;}
    //Case2: there are things in the list
    else{
    Node *p;
    p = head;
    while(p->next != nullptr){
        p=p->next;
    }
    Node *n = new Node;
    n->val=item;
    p->next = n;
    n->next = nullptr;
    }
}

void printItems(Node *head) {
    
    /* TODO */
    Node *p;
    p = head;
    std::cout<<"Front \n";
    while(p!=nullptr){
        std::cout<< p->val << std::endl;
        p=p->next;
    }
    std::cout<<"Rear \n";
}


int main() {
    Node *N = new Node;
    Node *P = new Node;
    N->val=0;
    N->next=nullptr;
    P->val=0;
    P->next=nullptr;
//    int array [] = {1, 4, 3, 6};
//    cout << string("Hello World").substr(2, 5) << endl; // Prints "llo W"
//    cout << isPalindrome("step on no pets") << endl;
//    cout << mystery2(2,5) << endl;
//    printReverse(array, 4);
//    cout << endl << sumOfDigits(10);
    addTo(1,N);
    //addTo(6,N);
    //addTo(8,N);
    addTo(3,P);
    addTo(9,P);
    //addTo(10,P);
    printItems(N);
    printItems(P);
    Node *T;
    T = inPlaceMerge(N,P);
    printItems(T);

    //deleteList(N);
    
}
