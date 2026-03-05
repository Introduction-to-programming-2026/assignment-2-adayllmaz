// Missing cs50.h, variable's type, semicolon, %s, and second printf argument.
#include <stdio.h>

int main(void)
{
    char name[100];

    printf("What's your name? ");
    scanf("%99s", name);

    printf("hello' %s\n", name);
    return 0;
}




