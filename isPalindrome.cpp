#include <iostream>
using namespace std;


bool isPalindrome(string text){
    if(text.length() == 0 || text.length() == 1){
        return true;
    }
    if(text[0] != text[text.length()-1]){
        return false;
    }

    return isPalindrome(text.substr(1, text.length() - 2));
}

