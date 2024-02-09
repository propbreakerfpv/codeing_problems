#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// your program should allocate and return a pointer to a string whith a length of len, filled 
// with the character fill.
// you MUST add a null terminator at the end of the string.
//
// EXAMPLES:
// input: len 5, fill 'h'
// output: a pointer to the string "hhhhh"
// explanation: allocate a string of length 5 plus a null terminator and fill it with the char 'h'.
//
// input: len 1, fill ' '
// output: a pointer to the string " "
// explanation: allocate a string of length 1 plus a null terminator and fill it with the char ' '.
//
// INSTRUCTIONS:
// put your code in the string_alloc function bellow and return your results.
// the main function is setup to automaticaly test if your code works :).
// run with 
// gcc string_alloc.c -o string_alloc
// ./string_alloc
//
// HINT 1:
// every string in c has a null terminator(a 0 or '\0') at the end.
// a null terminator could also be call a null byte among other names.
// you must add this yourself when you allocate a string.
// this means you will have to allocate enough space for the specifyed string length plus 1 for the
// null byte.
// your program may work without this but you still need to do it :p.
//
// HINT 2:
// something to remember is that every time you allocate memory manualy you will have to free it at
// some point. in this case I am doing it in the main function so you don't have to worry about it
// but in future you may have to do this.
//
// HINT 3: 
// you will have to call the malloc function to allocate memory.
// the malloc function takes the number of bytes you want to allocate and returns a pointer to them.
// in practice you wont ever need to thing about the number of bytes because you can just use the 
// sizeof function.
// for example. if you wanted to allocate memory for a single intager it would look like this
// int *intager = malloc(sizeof(int));
// sizeof(int) will give you the number of bytes the int type takes and so malloc will allocate 
// that number of bytes for you.
// if insted you wanted to allocate a array of intagers it would look like...
// int *intager = malloc(sizeof(int) * len);
// in this case len is the length of the array so sizeof(int) * len is the number of bytes malloc
// will allocate
//
// this is an example with intagers but it would be almost the same with chars. hoppfully it makes
// sense...



char *string_alloc(int len, char fill) {
    char* str = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; ++i) {
        str[i] = fill;
    }
    str[len] = '\0';
    return str;
}

int main() {

    int right = 1;

    char *ret = string_alloc(4, 'a');
    if (strcmp(ret, "aaaa")) {
        printf("your program is not yet correct.\nexpected \"aaaa\" got \"%s\"\n", ret);
        right = 0;
    }
    free(ret);
    ret = string_alloc(10, '\n');
    if (strcmp(ret, "\n\n\n\n\n\n\n\n\n\n")) {
        printf("your program is not yet correct.\nexpected \"\n\n\n\n\n\n\n\n\n\n\" got %s\n", ret);
        right = 0;
    }
    free(ret);
    ret = string_alloc(1, '!');
    if (strcmp(ret, "!")) {
        printf("your program is not yet correct.\nexpected \"!\" got %s\n", ret);
        right = 0;
    }
    free(ret);

    if (right) {
        printf("you got it right!!!!!\n");
    }
}

