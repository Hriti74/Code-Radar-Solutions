#include <stdio.h>
int main() 
{
    char a[20];
    int b;
    char c[20];
    scanf("%s %d %s",a, &b, c);
    printf("Name: %s \nAge: %d\nHobby: %s",a,b,c);
    return 0;
}