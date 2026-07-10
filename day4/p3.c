#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'A':
        case 'a':

        case 'E':
        case 'e':

        case 'I':
        case 'i':

        case 'O':
        case 'o':

        case 'U':
        case 'u':
            printf("%c is a Vowel.\n", ch);
            break;

        default:
            printf("%c is a Consonant.\n", ch);
    }

    return 0;
}