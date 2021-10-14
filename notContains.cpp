#include <iostream>
using namespace std;

int notContains(int array[], int size){ //size stands for size of an array
    int notContained[size + 1]; // 0 1 2 3 4 5 .... size
    for(int i = 0; i < size + 1; i++){
        notContained[i] = i;
    }

    for(int i = 0; i < size; i++){
        if(array[i] > 0 && array[i] < size + 1) notContained[ array[i] ] = notContained[ array[i] + 1];
    }


    return notContained[1];
}