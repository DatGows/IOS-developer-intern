#include <iostream>
using namespace std;

void countVariantsHelper(int stairsCount, int& totalRoutes){
    if(stairsCount == 1){
        totalRoutes++;
        return;
    }
    if(stairsCount == 0){
        totalRoutes++;
        return;
    }
    for(int i = 1; i <=2; i++){
        countVariantsHelper(stairsCount - i, totalRoutes);
    }
}

int countVariants(int stairsCount){
    int totalRoutes = 0;
    countVariantsHelper(stairsCount, totalRoutes);
    return totalRoutes;
}