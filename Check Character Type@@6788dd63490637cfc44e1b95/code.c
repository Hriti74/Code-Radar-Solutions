#include <stdio.h>
#include <ctype.h>
int main() 
{
    char n;
    scanf("%c",&n);
    if(n=='a'|| n=='e' || n=='i' || n=='o' || n=='u'|| n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') 
    {
        printf("Vowel");
    }
    else if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
    {
        printf("%c is a consonant.\n", n);
    }
    else if (isdigit(n)) 
    {
        printf("%c is a digit.\n", n);
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}