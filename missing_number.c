#include <stdio.h>

// your input is a incrementing array of numbers. for example [1, 2, 3, 5]. as you can see 4 is missing.
// your program should find the missing number and return it.
//
// EXAMPLES:
// input: [1, 2, 3, 5]
// output: 4
// explanation: 2 is 1 + 1, 3 is 2 + 1, 5 is NOT 3 + 1 so your output is the missing number(4).
//
// input: [5, 6, 8, 9, 10]
// output: 7
// explanation: 7 is the missing number
//
// input: n = [101, 102, 103, 104, 106]
// output: 105
// explanation: 105 is the missing number
//
// INSTRUCTIONS:
// put your code in the missing_number function bellow and return your results.
// the main function is setup to automaticaly test if your code works :).
// you need to try and get the program to print `you got it right!!!!!`
// run with 
// gcc missing_number.c -o missing_number
// ./missing_number
//
// HINT 1:
// there will only ever be 1 missing number so as soon as you find it you can return without
// searching the rest of the input
//
// HINT 2:
// lenth is the length of the array.
// so for example 1 the length would be 4, etc

int missing_number(int* input, int length) {
}

int main() {
    int right = 1;

    int input1[] = {1, 2, 4, 5};
    int ret = missing_number(&input1[0], 4);
    if (ret != 3) {
        printf("your program is not yet correct.\nexpected 3 got %i\n", ret);
        right = 0;
    }
    int input2[] = {5, 6, 8, 9, 10};
    ret = missing_number(&input2[0], 5);
    if (ret != 7) {
        printf("your program is not yet correct.\nexpected 7 got %i\n", ret);
        right = 0;
    }
    int input3[] = {101, 102, 103, 104, 106};
    ret = missing_number(&input3[0], 5);
    if (ret != 105) {
        printf("your program is not yet correct.\nexpected 105 got %i\n", ret);
        right = 0;
    }

    if (right) {
        printf("you got it right!!!!!\n");
    }
}

