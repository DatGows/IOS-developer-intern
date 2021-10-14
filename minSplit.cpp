#include <iostream>
using namespace std;

int minSplit(int amount){
    int coins[] = {1, 5, 10, 20, 50};
    int index = 4; //index in the coins[] array

    int coinsUsed = 0;
    while(index != -1){
        if(coins[index] <= amount){
            amount = amount - coins[index];
            coinsUsed++;
        }
        if(coins[index] > amount){
            index--;
        }
    }

    return coinsUsed;
}