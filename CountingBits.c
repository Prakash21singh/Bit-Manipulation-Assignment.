#include<stdio.h>

// The current statement is for the counting the number 
// of set bit of numbers between 1 -> n and return the array;

int countSetBit(int n){
    int count = 0;

    while(n > 0){
        if((n & 1) != 0) count++;
        n = n >> 1;
    }

    return count;
}

int main(){
    
    int n = 15;
    int arr[n + 1];

    for(int i = 0; i <= n; i++){
        printf("Set bit of %d is : %d \n", i, countSetBit(i));
    }

    return 0;
}