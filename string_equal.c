#include <stdio.h>

// your input is 2 strings(arrays of characters). you need to check if they are the same
// you program needs to be able to handle empty strings and strings of diferent lengths
//
// EXAMPLES:
// input: str1 = "123" str2 = "123"
// output: 1 (true)
// explanation: the string "123" is the same as "123".
//
// input: str1 = "123" str2 = "abc"
// output: 0 (false)
// explanation: "123" is not the same as "abc"
//
// input: str1 = "123456" str2 = "abc"
// output: 0 (false)
// explanation: "123456" is not the same as "abc". it is also longer so you will have to
// make sure you check for this
//
// INSTRUCTIONS:
// put your code in the str_eq function bellow and return your results.
// the main function is setup to automaticaly test if your code works :).
// you need to try and get the program to print `you got it right!!!!!`
// run with 
// gcc str_equal.c -o str_equal
// ./str_equal
//
// HINT 1:
// the end of every string has a "NULL byte" or a 0. 
// so if str[some index] == 0 then you know your at the end of the string
//
// HINT 2:
// remember to check for the length of both strings

int str_eq(char* str1, char* str2) {
}

int main() {
    int right = 1;
    int ret = str_eq("123", "123");
    if (ret != 1) {
        printf("your program is not yet correct.\nexpected 1 (true) got %i\n", ret);
        right = 0;
    }
    ret = str_eq("abcdefg", "123");
    if (ret != 0) {
        printf("your program is not yet correct.\nexpected 0 (false) got %i\n", ret);
        right = 0;
    }
    ret = str_eq("short string", "this is a varry long string it just keeps going and going and going");
    if (ret != 0) {
        printf("your program is not yet correct.\nexpected 0 (false) got %i\n", ret);
        right = 0;
    }

    ret = str_eq("this string is the same", "this string is the same");
    if (ret != 1) {
        printf("your program is not yet correct.\nexpected 1 (true) got %i\n", ret);
        right = 0;
    }

    ret = str_eq("", "");
    if (ret != 1) {
        printf("your program is not yet correct.\nexpected 1 (true) got %i\n", ret);
        right = 0;
    }

    if (right) {
        printf("you got it right!!!!!\n");
    }
}
