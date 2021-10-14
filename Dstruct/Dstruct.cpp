#include <iostream>
#include "Dstruct.h"

using namespace std;

Dstruct :: Dstruct(){
    root = new Node();
    root -> next = nullptr;
}
void Dstruct:: add(int someData){
    Node* newN = new Node();
    newN -> next = root -> next;
    root -> next = newN;
    newN -> data = someData;
}

int Dstruct :: get(int i){
    if(size() <= i){
        cout << "No such index is occupied" << endl;
        return 0; 
    }

    Node* temp = new Node();
    temp = root -> next;
    while(i > 0){
        temp = temp -> next;
        i--;
    }
    return temp -> data;
}

int Dstruct :: size(){
    if(isEmpty()) return 0;

    Node* temp =  new Node();
    temp = root -> next;
    
    int count = 0;
    while(true){
        if(temp -> next == nullptr){
            count++;
            break;
        }else{
            temp = temp -> next;
            count++;
        }
    }

    return count;
}

void Dstruct :: remove(){
    if(isEmpty()){
        cout << "You can not remove from empty Dstruct." << endl;
        return;
    }
    root -> next = root -> next -> next;
}

bool Dstruct :: isEmpty(){
    if(root -> next == nullptr) return true;
    return false;
}