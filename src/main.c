#include <stdio.h>
#include <unistd.h>

#include "repl.h"

/**
 * Tell whether running as a REPL or interpreting a source
 * file, or some other mode */
enum ExecutionMode {
    EM_REPL,     ///< Run as a REPL
    EM_HEADLESS, ///< Interpret a source file
    EM_HELP      ///< Print help message
};

void usage()
{
    printf("");
}

int main(int argc, char *argv[])
{
    int exec_mode = EM_REPL;
    switch (exec_mode) {
    case EM_REPL:
        repl(REPL_DEFAULT_PROMPT);
        break;
    default:
        usage();
        break;
    }

    return 0;
}
