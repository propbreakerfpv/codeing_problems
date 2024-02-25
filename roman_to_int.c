#include <stdio.h>

// converting roman rumirals to a number
// roman numerals use seven symbols to represent numbers
// I - 1
// V - 5
// X - 10
// L - 50
// C - 100
// D - 500
// M - 1000
// they are almost always in descending order, meaning X before V, V before I, etc...
// there are however, exeptions; for example IV is V (5) minus I (1).
// this can be done with
// I before V and X - 4 and 9
// X before L and C - 40 and 90
// C before D and M - 400 and 900
//
// some example numbers in roman numeral:
// 3   - III
// 4   - IV
// 9   - IX
// 8   - VIII
// 100 - C
// 140 - CXL
// 150 - CL
// 149 - CXLIX ; 100 (C) + 40 (XL) + 9 (IX)
// if you want more examples a quick google search can find a decmal to roman numeral
// converter.
//
// EXAMPLES:
// input: "V" 
// output: 5
// explanation: V is 5
//
// input: "VI" 
// output: 6
// explanation: I (1) +  V (5) is 6
//
// input: "IV" 
// output: 4
// explanation: V (5) - I (1) is 4
//
// input: "CD" 
// output: 400
// explanation: D (500) - C (100) is 400
//
// input: "MCMXCIV" 
// output: 1994
// explanation: M + (M - C) + (C - X) + (V - I) is 1994
//
// HINT 1:
// there is a lot to think about with this problem, try to simplify it down to just one
// symbol.
// lets just think about V for now.
// if we see a V we need to add 5 to the total exept when the last symbol was a I in 
// witch case we need to add 4.
//
// ok that we pretty simple, if we see a V we need to check if the last symbol was I 
// or not and add 4 or 5 to the total.
//
// now lets think about I.
// I means we need to add 1 to the total unless the next symbol is V. lets do it anyway 
// and just subtract one in the V case. so that means we just need to add 1 to the 
// total. but it might make the V case easyier if we save that we just saw a I so lets
// also keep a variable that just stores the last symbol we saw. every time we se a 
// symbol we will change last_symbol to that symbol.
//
// that means that if we see a I we need to add 1 to the total and set the last_symbol
// to be 'I'.
// we also need to update the V case to add 3 insted of 4 if the last symbol was I because we add
// one every time we see a I even if the next symbol is V
//
// this should be all the logic you need, you will just have to add cases for all the 
// other symbols. but that should just be a variation of I or V or a combination.
//
// HINT 2:
// there can only ever be one symbol to subtract.
// for example IIV is not a valid roman numeral; same goes for IIX or CCM.
// the way to would write 3 is III
//
// run with:
// you should know how to do this by now.
// if your really stuck go and look at a preveos problem.
// the output file should have the same name as the c fild just without the .c on the 
// end.

int roman_to_int(char* roman) {
}


int main() {
    int right = 1;

    int ret = roman_to_int("MCMXCIV");
    if (ret != 1994) {
        printf("your program is not yet correct.\nexpected 1994 got %i\n", ret);
        right = 0;
    }
    ret = roman_to_int("IV");
    if (ret != 4) {
        printf("your program is not yet correct.\nexpected 4 got %i\n", ret);
        right = 0;
    }

    ret = roman_to_int("VI");
    if (ret != 6) {
        printf("your program is not yet correct.\nexpected 6 got %i\n", ret);
        right = 0;
    }

    ret = roman_to_int("IX");
    if (ret != 9) {
        printf("your program is not yet correct.\nexpected 9 got %i\n", ret);
        right = 0;
    }

    ret = roman_to_int("XL");
    if (ret != 40) {
        printf("your program is not yet correct.\nexpected 40 got %i\n", ret);
        right = 0;
    }
    ret = roman_to_int("XC");
    if (ret != 90) {
        printf("your program is not yet correct.\nexpected 90 got %i\n", ret);
        right = 0;
    }
    ret = roman_to_int("CD");
    if (ret != 400) {
        printf("your program is not yet correct.\nexpected 400 got %i\n", ret);
        right = 0;
    }
    ret = roman_to_int("CM");
    if (ret != 900) {
        printf("your program is not yet correct.\nexpected 900 got %i\n", ret);
        right = 0;
    }

    if (right) {
        printf("you got it right!!!!!\n");
    }
}
