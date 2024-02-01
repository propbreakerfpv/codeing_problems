// tokenize a string put a \0 in place of the delimiter and return a pointer to 
// the beginning of every section

#include <stdio.h>
#include <string.h>
char* token(char string[], char del) {
    static char *last_call = 0;
    if (string != 0) {
        last_call = string;
    }
    // return null if the first time we where called was with null
    if (last_call == 0) {
        return 0;
    }

    for (int i = 0; last_call[i] != 0; ++i) {
        if (last_call[i] == del) {
            last_call[i] = 0;
            char *ret = last_call;
            if (last_call[i + 1] == 0) {
                last_call = 0;
            } else {
                last_call += i + 1;
            }
            return ret;
        }
    }
    
    char *ret = last_call;
    last_call = 0;
    return ret;
}


int main() {
    char str[] = "hello world world2";
    char *tok = token(str, ' ');
    while (tok != 0) {
        printf("%s\n", tok);
        tok = token(0, ' ');
    }
}

