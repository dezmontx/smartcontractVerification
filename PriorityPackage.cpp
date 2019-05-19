#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool is_transition_allowed(){

    int arr[10] = {1,1,1,1,1,1,1,1,1,1};
    int probability = 70;
    probability = probability / 10;
    for(int i = 0; i < (10-probability); i++){
        int randIndex = rand() % 9;
        if(arr[randIndex] == 0){
            i--;
        }else{
            arr[randIndex] = 0;
        }
    }
    
    int randIndex = rand() % 9;
    
    if(arr[randIndex] == 1){
        return true;
    }else{
        return false;
    }
} 
