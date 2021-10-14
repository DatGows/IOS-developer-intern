#ifndef Dstruct_H
#define Dstruct_H

struct Node{
    int data;
    Node* next;
};

class Dstruct{
    public:
        Dstruct();
        void add(int someData);
        int get(int i);
        int size();
        bool isEmpty();
        void remove();
    private:
        Node* root;
};

#endif