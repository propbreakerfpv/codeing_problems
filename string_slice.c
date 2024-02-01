

#include <stdlib.h>
typedef struct {
    int len;
    char* start;
} Str;

Str *tokenize(char* str, char del) {
    static char* last = 0;
    char *idx = str;
    for (int i = 0; str[i] != 0; ++i) {
        if (str[i] == del) {
            Str* ret = malloc(sizeof(Str));
            return ret;
        }
    }
    return 0;
}

int main() {
    tokenize("hello world world2", ' ');
}
