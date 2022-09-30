#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int numberOfArgs = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Number of Args: %d", numberOfArgs);
    printf("Arg1 is the program name: %s", arg1);
    printf("Arg2 is the command line argument: %s", arg2);

    return 0;
}