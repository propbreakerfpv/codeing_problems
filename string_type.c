#include <stdio.h>
#include <stdlib.h>

struct String {
    char* ptr;
    int len;
    int size;
};

struct String *string_create() {
    struct String* string = malloc(sizeof(struct String));
    string->ptr = malloc(sizeof(char) * 2);
    string->len = 0;
    string->size = 2;
    return string;
}

void string_free(struct String *string) {
    free(string->ptr);
    free(string);
}

void string_push(struct String *string, char ch) {
    if (string->len == string->size) {
        realloc(string, sizeof(char) * (string->size * 2));
        string->size *= 2;
    }
    string->ptr[string->len] = ch;
    string->len ++;
}

void string_push_str(struct String *string, char *str) {
    for (int i = 0; str[i] != 0; ++i) {
        string_push(string, str[i]);
    }
}

int main() {
    struct String* string = string_create();
    string_push(string, 'a');
    printf("%s, len: %i, size: %i\n", string->ptr, string->len, string->size);
    string_push(string, 'b');
    printf("%s, len: %i, size: %i\n", string->ptr, string->len, string->size);
    string_push(string, 'c');
    printf("%s, len: %i, size: %i\n", string->ptr, string->len, string->size);
    string_push_str(string, "hello world");
    printf("%s, len: %i, size: %i\n", string->ptr, string->len, string->size);
    string_free(string);
}
