#include <stdio.h>
int main()
{
    char name[] = "manan";
    for (int i = 0; i < sizeof(name) - 1; i++)
    {
        // checking wheather the character is vowel if it vowel  than that character will be printed 
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c vowel\n", name[i]);
        }
        // if the character is consonant then it will be printed
        else
        {
            printf("%c consonant\n", name[i]);
        }
    }
    return 0;
}