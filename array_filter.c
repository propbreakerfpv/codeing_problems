#include <stdio.h>
// filter all the zeros 0 out of the array
//
// your input is a array of ints and its length. 
// you need to move all the 0 to the end and return the length before the
// 0s
//
// EXAMPLES 1:
// input: array = [0, 1, 3, 2, 7] len = 5
// output: 4
// explenation: after you move the zero to the end, the length before the
// zeros is 4
//
// EXAMPLES 2:
// input: array = [1, 0, 0, 1, 3, 0] len = 6
// output: 3
// explenation: after you move all the zeros to the end, the length before the
// zeros is 3
// 
// some other info:
// you need to actualy move the zeros to the end not not just subtract how
// many zeros there are and subtract that from len.
//
// i made a simpole test in the main function. you should modify it to make
// sure it works with more then one input. just remember to change the length
// as well as the array.
//
// you know how to compile and run so i won't put that here

int filter(int* array, int len) {
}

int main() {
    // this is the array. make sure your solution works with more then just this one
    // just don't forget to change the length on the next line...
    int array[] = {1, 2, 0, 1, 2, 0};
    int len = 6;
    // right here we change len to be the value you returned from your function
    len = filter(array, len);

    printf("expected: 1212\ngot: ");
    for (int i = 0; i < len; ++i) {
        printf("%i", array[i]);
    }
    printf("\n");
}


