#include <stdio.h>
int main()
{
    char a[50],b[50];
    int i=0,n=0;
    printf("Enter string: ");
    fgets(a,50,stdin);
    while(a[n]!='\n')
    {
        n++;
    }
    for(i=0;i<n-1;i++)
    {
        *(b+i)=*(a+n-i-2);
    }
    b[n-1]='\0';
    printf("Reversed String: ");
    puts(b);
}
