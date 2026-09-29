#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    do{ 
        if (i%3 == 0 || i%5 == 0) { //if i is multiples of 3 or 5
        sum = sum + i; //add the i number to the sum 
       }
       i++; // increasing the number i one by one 
    }
    while (i<1000); //if the condition is consistent, then run the loop

    printf("the sum of multiples of 3 or 5 below 1000 is %d\n", sum);

    return 0;
}