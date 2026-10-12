#include<stdio.h>

// Current coding question is
// https://leetcode.com/problems/number-of-1-bits
// to count the numbers of set bit present in a number.
int main(){

    int n;
    printf("Enter the number for calculating it's set bit. \n");
    scanf("%d", &n);

    int count = 0;
    while(n > 0){
        if((n & 1) != 0) count++;
        n = n >> 1;
    }

    printf("Number of set bits are:  %d", count);

    return 0;
}