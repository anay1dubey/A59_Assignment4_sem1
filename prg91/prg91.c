#include <stdio.h>
int main()
{
    int a,*p;
    printf("Enter a number: ");
    scanf("%d",&a);
    p=&a;
    printf("Square=%d\n",(*p)*(*p));
    printf("cube=%d\n",(*p)*(*p)*(*p));
}
