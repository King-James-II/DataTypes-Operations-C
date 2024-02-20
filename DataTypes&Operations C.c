#include <stdio.h>

int main() {
    // This program performs various operations and prints the sizes of different data types.

    // Declaration of variables
    int high_score = 2500;
    int low_score = 950;
    int med_score = 1550;
    int result;
    long longresult; 
    int dividend1 = 20;
    int divisor1 = 4;
    int result1;
    int dividend2 = 11;
    int divisor2 = 5;
    int result2;
    char a;
    int b;
    float c;
    unsigned long d;
    double e;
    
    // Adding and printing scores
    result = (high_score + med_score + low_score);
    printf("Result = %d\n", result);
    
    // Mutiplying and printing scores
    result = (high_score * med_score * low_score);
    printf("Result = %d\n", result);
    
    // Multiplying using long to print accurate answer
    longresult = (long)high_score * med_score * low_score; 
    printf("Result = %ld\n", longresult); 

    // Modulus division with no remainder
    result1 = dividend1 % divisor1;
    printf("%d %% %d = %d\n", dividend1, divisor1, result1);

    // Modulus division with remainder
    result2 = dividend2 % divisor2;
    printf("%d %% %d = %d\n", dividend2, divisor2, result2);

    // Printing the size in bytes of different data types
    printf("Size of char: %zu bytes\n", sizeof(a));
    printf("Size of int: %zu bytes\n", sizeof(b));
    printf("Size of float: %zu bytes\n", sizeof(c));
    printf("Size of unsigned long: %zu bytes\n", sizeof(d));
    printf("Size of double: %zu bytes\n", sizeof(e));
    
    return 0;
}
