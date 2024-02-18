


#include <stdio.h>
#include <stdlib.h>
char** split(char* string, char delim, int len) {
    char buf[512];
    int bufdx = 0;

    char* tmp[128];
    int tmpdx = 0;

    for (int i = 0; string[i] != 0; ++i) {
        if (string[i] == delim) {
            buf[bufdx] = '\0';
            tmp[tmpdx] = malloc(sizeof(char) * bufdx);
            for (int j = 0; j < bufdx; ++j) {
                tmp[tmpdx][j] = buf[j];
            } 
            tmpdx ++;
        } else {
            buf[bufdx++] = string[i];
        }
    }

    char **out = malloc(sizeof(char*) * tmpdx);

    for (int i = 0; i < tmpdx; ++i) {
        out[i] = tmp[i];
    }
    return out;
}

int main() {
    int len;
    char **array_of_str = split("hello world", ' ', len);

    for (int i = 0; i < len; ++i) {
        printf("%s", array_of_str[i]);
        free(array_of_str[i]);
    }
    free(array_of_str);
}
