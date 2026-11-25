#include <stdio.h>
int main()
{
    char n[50];
    int i=0,c=0,s=0;
    printf("Enter a string: ");
    fgets(n,50,stdin);
    while(*(n+i)!='\n')
    {
        if(*(n+i)==' ')
        {s++;}
        c++;
        i++;
    }
    printf("Total Lenght:%d\n",c);
    printf("Without spaces:%d\n",c-s);
}