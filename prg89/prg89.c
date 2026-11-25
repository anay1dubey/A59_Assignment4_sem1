#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",a+i);
    }
    printf("Entered array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        *(b+i)=*(a+n-i-1);
    }
    printf("\nreversed array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}
