#include <stdio.h>

// a prime number is a number witch cannot be devided by any other number(excluding 1) without a remainder.
// your program should return the number of primes between 2 and n inclusive
//
// EXAMPLES:
// input: n = 10
// output: 4
// explanation: there are 4 prime numbers between 2 and 10
//
// input: n = 50
// output: 15
// explanation: there are 15 prime numbers between 2 and 50
//
// input: n = 97
// output: 25
// explanation: there are 25 prime numbers between 2 and 97. 
// 97 is a prime number, we count it because we need to be inclusive.
// meaning we must include 97(or whatever n happens to be) and 2 in are output
//
// INSTRUCTIONS:
// put your code in the prime function bellow and return your results.
// the main function is setup to automaticaly test if your code works :).
// you need to try and get the program to print `you got it right!!!!!`
// run with 
// gcc prime_numbers.c -o prime_numbers
// ./prime_numbers
//
// HINT 1:
// the % operator divides two numbers and returns the remainder
// 2 % 2 will be 0 because 2 divided by 2 has no remainder
// 19 % 8 will be 3 because 19 divided by 8 has a remainder of 3
// 
// HINT 2:
// dividing by 0 will result in a crash and is not good :(.

int prime(int n) {
}

int main() {
    int right = 1;
    int ret = prime(10);
    if (ret != 4) {
        printf("your program is not yet correct.\nexpected 4 got %i\n", ret);
        right = 0;
    }
    ret = prime(97);
    if (ret != 25) {
        printf("your program is not yet correct.\nexpected 25 got %i\n", ret);
        right = 0;
    }
    ret = prime(100);
    if (ret != 25) {
        printf("your program is not yet correct.\nexpected 25 got %i\n", ret);
        right = 0;
    }
    ret = prime(1000);
    if (ret != 168) {
        printf("your program is not yet correct.\nexpected 168 got %i\n", ret);
        right = 0;
    }

    if (right) {
        printf("you got it right!!!!!");
    }
}
