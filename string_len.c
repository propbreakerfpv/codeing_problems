// you program should return the length of str
//
//EXAMPLES:
// input: str = "hello world"
// output: 11
// explanation: there are 11 characters in the string "hello world"
//
// put your code in the str_len function bellow and return your results.
// the main function is setup to automaticaly test if your code works :).
// run with 
// gcc prime_numbers.c -o prime_numbers
// ./prime_numbers
//
// HINT 1:
// strings in c are just arrays of characters with a null bite at the end.
// a null bite is just a 0 or '\0'. so the string "hello world" actualy has 
// 12 characters in it, the 11 normal ones and a null bite. we do not count 
// the null bite as part of the length but it is good to know it is there
// and it might be helpfull in your code!


#include <stdio.h>
int str_len(char* str) {
    int i = 0; 
    while (str[i] != 0) {
        ++i;
    }
    return i;
}

int main() {
    int right = 1;
    int res = str_len("hello world");
    if (res != 11) {
        printf("your program is not yet correct.\nexpected 11 got %i\n", res);
        right = 0;
    }

    res = str_len("the length of this string is 31");
    if (res != 31) {
        printf("your program is not yet correct.\nexpected 31 got %i\n", res);
        right = 0;
    }

    res = str_len("your program is not yet correct.\nexpected 11 got %i\n");
    if (res != 52) {
        printf("your program is not yet correct.\nexpected 52 got %i\n", res);
        right = 0;
    }

    if (right) {
        printf("you got it right!!!!!\n");
    }
}
