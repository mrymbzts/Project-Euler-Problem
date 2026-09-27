#include <stdio.h>

int main() {
    long long S = 1;
    long long i = 2;
    
    do{
        if(i % 2 == 1){ //if i is an odd number 
            S = S + (i*i); // then add the square of i to the S
        }
        i++; //increase the number i one by one
    }
    while(i <= 959000); //if the condition is consistent, run the do loop

    printf("%lld\n", S); //printing the sum of first 959 thousand square number which is odd

    return 0;
}