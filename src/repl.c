#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>

void repl(const char* prompt) {
    char* input;
    do {
        input = readline(prompt);
        puts(input);
        free(input);
    } while (input);
}
