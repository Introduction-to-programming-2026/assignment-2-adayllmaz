#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("Before: ");
    scanf("%s", s);

    printf("After: ");

    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", touper(s[i]));
    }

    printf("\n");
}
