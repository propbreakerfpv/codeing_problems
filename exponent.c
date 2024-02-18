// you program needs to recursivly find x to the power of y.
//
// EXAMPLES:
// input: num = 2, pwr = 2
// output: 4
// explanation: 2 to the power of 2 is 4.
//
// input: num = 8, pwr = 4
// output: 4096 
// explanation: 8 to the power of 4 is 4096
//
// INSTRUCTIONS:
// put your code in the exponent function bellow and return your results.
// the main function is setup to automaticaly test if your code works :).
// run with 
// gcc missing_number.c -o missing_number
// ./missing_number
//
// HINT 1:
// the first step to any recursive problem is to find a way to simplify the problem down
// into a base case. 
// think about what the simplest exponent could be. 2 ^ 2 is pretty simple but can you go
// any simpler?
// this base case may be so simple it seems stupid but the simpler the better...
// one way of thinking about recursion is like a loop. the base case is the condition 
// (so in a for loop that would be like i < length) 
//
// if the first step is the condition of the loop, the next step is the body of the loop
// that will be called every iteration. 
// you want to think about this as building on top of the base case untill you reach the
// output you want.
//
// HINT 2:
// if you where doing this in a loop it might look something like this
//  
// int num = 2;
// int pwr = 2;
// int output = num;
// while (pwr > 1) {
//      output = output * num;
//      pwr --;
// }
// we loop as long as the power is more then 1.
// every loop we multiply the output by num and subtract one from pwr
//
// in this case we are doing 2 ^ 2.
// so in the first loop output will equal num * num (4)
// in the next loop pwr will be 1 so we exit the loop and have are output, 4.
// this is a simple example but you can imagin how it would work for 2 ^ 8 for example
//
// HINT 3:
// if your really stuck go watch this vidoe. the second and therd examples might be a bit
// hard to falow but the first problem should help you wrap your head around how to tackle
// this problem
// https://www.youtube.com/watch?v=ngCos392W4w

#include <stdio.h>

int exponent(float num, int pwr) {
}

int main() {
    int right = 1;

    int ret = exponent(8, 4);
    if (ret != 4096) {
        printf("your program is not yet correct.\nexpected 4096 got %i\n", ret);
        right = 0;
    }
    ret = exponent(2, 3);
    if (ret != 8) {
        printf("your program is not yet correct.\nexpected 8 got %i\n", ret);
        right = 0;
    }

    ret = exponent(2, 20);
    if (ret != 1048576) {
        printf("your program is not yet correct.\nexpected 1267650600228229401496703205376 got %i\n", ret);
        right = 0;
    }

    if (right) {
        printf("you got it right!!!!!\n");
    }
}

