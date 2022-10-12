#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company { Frodo, Bilbo, Gandalf };

    enum Company LOTR = Frodo;
    enum Company Hobbit = Bilbo;
    enum Company ROP = Gandalf;

    printf("The power of the ring: %d\n", LOTR);
    printf("The finder of the ring: %f\n", Hobbit);
    printf("The forging of the ring: %d\n", ROP);

    return 0;
}