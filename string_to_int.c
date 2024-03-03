#include <stdio.h>

// your function takes a string and returns a the string converted to a intager or -1 if the string is invalid. 
// you can asume that the string is a positive number. ie. there is no - minus sign.
// the string could contain non numaric characters, if any non numaric characters are encountered then
// you shuld return -1. a numaric character, in this case is 0-9.
//
// EXAMPLES:
// input: "123"
// output: 123
// explanation: 1 is a numaric char, so is 2 and 3. "123" converted to a int is 123
//
// EXAMPLES:
// input: " 123"
// output: -1
// explanation: ' ' space is not a numaric character so we return -1.
//
// EXAMPLES:
// input: " 1.1"
// output: -1
// explanation: 1.1 is not a valid int because ints can only store hole numbers (for numbers with a decimalpoint
// you need a float) so we retrun -1.
//
// instructions:
// put your code in the str_to_int function and return the result.
// I have put one test in the main function but you should make some more or modify the on there to make sure
// your code is working right. look back a previos problems if you wan't to see how I did the tests for them.
// 
// you know how to compile and run the code :p
//
// HINT 1:
// remember that the char '1' is not the same as the int 1. you can find a what int represents the char '1' by
// googling ascii table.
//
// HINT 2:
// lets try to simplify this problem down. how would you convert the string "1" to a intager?
// well it would be as simple as saving 1 to a variable sum and returning it.
//
// now lets think about the string "12". to start lets loop over each character in the string. the first char
// we come to is a 1, thats pritty simple as we saw above. now we come to a 2, this is where it starts to get
// fun. are sum is currently 1, ok so what do we need to do to turn 1 into 12? more specifically how do we 
// shift the 1 into the 10s place and get the 2 in the 1s? 
// putting the 2 in the 1s place isn't to hard if the 1s place already has a 0 in it; you just add 2...
// but what if we don't have a 0 there? well lets think about moving the 1 to the left first, this is actualy
// pretty simple as well. its something you may have come across before when multiplying or dividing 
// something by 10. if we multiply are sum by 10 we essentially move it to the left by one diget. putting
// a 0 in the ones place. well this solves both of are problems, we have moved the 1 to the left by 
// multiplying it by 10 and we have put a 0 in the ones place in the process. now we just need to add 2
// and we are done. 
//
// that was a lot so lets do a recap
// first we create a sum variable to store are result.
// then we loop over every character in the string. 
// on the first loop we get the char '1', save it in are sum and keep going
// on the next loop we come to the '2' we convert it to the intager 2, multiply are sum by 10, add the 2
// we just converted and save that back into sum.
// thats the end of are loop so we return sum.
// 
// I havn't talked about dealing with non numaric characters, I will leave that to you :)

int str_to_int(char* str) {
}

int main() {
    int i = str_to_int("123");
    printf("the rusult is %i. expected 123", i);
}
