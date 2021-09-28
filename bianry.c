#include <stdio.h>
int linearsearch(int i, int a[], int c, int t, int n);

void main()
{
    int a[100], i, t, n, c = 0, sum = 0,opt,opt1;



    linearsearch(i, a, c, t, n);
}


int linearsearch(int i, int a[], int c, int t, int n)
{ printf("enter the number of elements you want in your array\n");
    scanf("%d", &n);
    printf("enter the array elements \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
     

    printf("enter the element you want to search in the array \n");
    scanf("%d", &t);
    int replace;
    for (i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            c = 1;
            printf("element found. enter the element that you want to replace\n");
            scanf("%d", &replace);
            a[i] = replace;
            printf("element replaced. your new array is \n");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", a[i]);
            }
        }
    }
    if (c == 0)
    {
        printf("element not found\n");
    }
    return 0;
}