/**
 * @file crt0.c
 * @brief Defines the _start symbol, where all C,C++ programs enter, sets up the process and runs it.
 *
 * @date 14th December 2025
 * @author Max Tyson
 */

/// Defined by the program, must exist to link
int main(int, char**, char**);


int _start(int argc, char* argv[], char* env[]) {


    // Execute the program and exit with the exit code
    int ret = main(argc, argv, env);
    exit(ret);

    // Failed to exit
    return -1;
}