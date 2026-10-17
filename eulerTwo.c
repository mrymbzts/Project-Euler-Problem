#include <stdio.h>

int main() {
    int v1 = 1; //first value of Fibonacci sequence
    int v2 = 2; //second value of Fibonacci sequence
    int v3 = 2; //sum of the even-valued terms of 1 to 2
    int sum = 0; //create a variable for sum of the even-valued terms

    do{
        if( v3 % 2 == 0) { //if v3 is even 
            sum = sum + v3; // add to the sum
        }

        v3 = v2 + v1; //moving to next term of sequence through v2 and v1
        v1 = v2; 
        v2 = v3;

    } while (v3 < 4000000); //if v3 less than 4 million then run the above code

    printf("%d\n", sum);
    
    return 0;

}