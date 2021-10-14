#include <iostream>
using namespace std;

bool isProperly(string sequence){
    int countL = 0;
    int countR = 0;

    for(int i = 0; i < sequence.length(); i++){
        if(sequence[i] == '(') countL++;
        if(sequence[i] == ')') countR++;
    }

    if(countL == countR) return true;
    return false;
}
