#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
char s[100];
scanf("%s", s);

    if(s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
        printf("%c\n", s[i]);
        }
    }
    
}
