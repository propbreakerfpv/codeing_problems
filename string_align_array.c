#include <stdio.h>
#include <stdlib.h>

// your input is an array of strings, the length of that array and a charater. you have to print all the strings
// aligned so the first instance of the character is in a vertical line
//
// EXAMPLES:
// input: array = { "apple", "orange", "pear", "pinapple", "durian"}
// input: ch = 'a'
// output: 
//     apple
//   orange
//   pear
// pineapple
// durian
// explanation: all the strings have the first 'a' on top of eachother.
//
// input: array = { "apple", "orange", "pear", "pinapple", "durian"}
// input: ch = 'e'
// output: 
//  apple
// orange
//     pear
//   pineapple
// explanation: all the strings have the first 'e' on top of eachother exept "durian" 
// whitch does not contain a 'e' and therefor is not printed.
//
//
// INSTRUCTIONS:
// put your code in the string_align function bellow and print your results.
// the main function will run you code with several inputs but I do not have a way to 
// test this so you will have to check they is right youself.
// run with 
// gcc string_align.c -o string_align
// ./string_equal
//
// HINT 1:
// the end of every string has a "NULL byte" or a 0. 
// so if str[some index] == 0 then you know your at the end of the string
//
// HINT 2:
// array_len is the length of the array. it may be helpfull for looping over the array
//
// HINT 2:
// you may have to create a new array to store some info about each string.
// to do so you will need to allocate memory.
// use the malloc() function from <stdlib.h> to do this
// an example of allocating an array of intagers
//
//              casting the memory to type int*    the length of are array
//     the type         |        size of a int          |
//        |    name     |   malloc    |   multiplied by |
//        |     |       |    |        |       |         |
//       int *ints = (int*)malloc(sizeof(int) * array_len);
// 
// ints is now a array like any other. you can index it with ints[index] and so on
// the values in ints will start out as random. so if you wanted them to start at 0
// you would half to do that manualy
//  
// remember that every time you allocate memory you need to call free() on that 
// memory once you are done with it.
// so for the example above
//
// free(ints);

char **string_align(char** array, int array_len, char ch) {
    int* indexes = malloc(sizeof(int) * array_len);
    int entrys = 0;
    for (int i = 0; i < array_len; ++i) {
        int found = 0;
        for (int j = 0; array[i][j] != 0 && !found; ++j) {
            if (array[i][j] == ch) {
                indexes[i] = j;
                found = 1;
                entrys ++;
            }
        }
    }

    char buf[64];
    char** out = malloc(sizeof(char*) * entrys);

    for (int i = 0; i < array_len; ++i) {
        int len = 0;
        for (int j = 0; indexes[i] - j >= 0; ++j) {
            buf[j] = ' ';
            if (indexes[i] - j == 0) {
                for(int k = 0; array[i][k] != 0; ++k) {
                    buf[j + k] = array[i][k];
                    len = j + k + 1;
                } 
            }
        }
        out[i] = malloc(sizeof(char) * (len + 1));
        for (int j = 0; j < len; ++j) {
            out[i][j] = buf[j];
        }
        out[i][len] = 0;
    }

    return out;
}

int main() {
    printf("test #1 ch is a\n");
    char *array[6] = { "apple", "orange", "pear", "pinapple", "durian"};
    char ch = 'a';
    char **arrays = string_align(array, 5, ch);
    for (int i = 0; i < 5; ++i) {
        printf("%s\n", arrays[i]);
        // free(array[i]);
    }

    // free(arrays);

    // char *array[6] = { "apple", "orange", "pear", "pinapple", "durian"};
    // printf("\ntest #2 ch is e\n");
    // ch = 'e';
    // string_align(array, 5, ch);
    //
    // printf("\ntest #3 ch is p\n");
    // ch = 'p';
    // string_align(array, 5, ch);
    //
    // printf("\ntest #3 ch is o\n");
    // char *array2[11] = { "oral", "twin", "bare", "train", "soil", "trainer", "south", "blast", "domination", "new"};
    // ch = 'o';
    // string_align(array2, 10, ch);
    //
    // printf("\ntest #3 ch is a\n");
    // ch = 'a';
    // string_align(array2, 10, ch);
}
