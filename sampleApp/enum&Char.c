#include <stdio.h>

int main()
{
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    return 0;
}

int main()
{
    char myCharacter = '\n';

    printf("%c", myCharacter);

    return 0;
}