#include <stdio.h>
int main()
{
    int n,*p;
    printf("Enter no of element in array: ");
    scanf("%d",&n);
    int a[n],c[n];
    p=a;
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",a+i);
    }
    printf("Copied array\n");
    for(int i=0;i<n;i++)
    {
        c[i]=*(p+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",c[i]);
    }
}
