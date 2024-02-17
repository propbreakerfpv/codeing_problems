#include <stdio.h>
#include <stdlib.h>

void more_space(char* string, int size);
void push(char* string, char to_add, int len, int size);

char* encode(char* msg) {
    char* code = malloc(sizeof(char) * 2);
    int len = 0;
    int size = 2;
    printf("%s\n", msg);
    for (int i = 0; msg[i] != 0; ++i) {
        printf("msg[i]: %c, code: `%s`\n", msg[i], code);
        switch (msg[i]) {
            case 'e':
                push(code, '.', len, size);
                push(code, ' ', len, size);
                break;
            case 'i':
                push(code, '.', len, size);
                push(code, '.', len, size);
                push(code, ' ', len, size);
                break;
            case 't':
                push(code, '-', len, size);
                push(code, ' ', len, size);
                break;
        }
    }
    return code;
}

void push(char* string, char to_add, int len, int size) {
    if (len == size) {
        more_space(string, size);
    }
    len ++;
    string[len] = to_add;
}

void more_space(char* string, int size) {
    string = realloc(string, sizeof(char) * (size * 2));
    size = size * 2;
}

int main(){
    // ".... . .-.. .-.. ---   .-- --- .-. .-.. -.."
    char* code = encode("eit");
    // . .. -

    printf("ptr: %p\n", code);
    printf("string: %s\n", code);
    free(code);
}
