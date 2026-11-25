#include <stdio.h>
int main()
{
    int n;
    printf("Enter lenght of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",a+i);
    }
    int max=0;
    int* p=&max;
    for(int i=0;i<n;i++)
    {
        if((*p)<(*(a+i)))
        {
            *p=*(a+i);
        }
    }
    printf("Max element: %d",*p);
}
