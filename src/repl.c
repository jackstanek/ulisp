#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>

/**
 * Infinitely runs a read-eval-print-loop.
 * Currently, "eval" means "print verbatim"
 */
void repl(const char* prompt) {
    char* input;
    while (1) {
        input = readline(prompt);
        if (input) {
            /* Check if line is non-empty */
            if (*input) {
                puts(input);
                add_history(input);
            }

            free(input);
        } else {
            return;
        }
    }
}
