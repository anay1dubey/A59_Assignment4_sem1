#include <stdio.h>
int main()
{
    char s[50];
    printf("Enter string: ");
    fgets(s,50,stdin);
    int i=0,w=1;
    while(*(s+i)!='\n')
    {
        if(*(s+i)==' ')
        {
            w++;
        }
        i++;
    }
    printf("Total words:%d",w);
}