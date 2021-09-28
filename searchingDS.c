#include <stdio.h>
int linearsearch(int i, int a[], int c, int t, int n);
int binarysearch(int c, int i, int a[], int n);
void main()
{
    int a[100], i, t, n, c = 0, sum = 0, opt, opt1, opt2;
start:
    printf("Main menu\nHow do you want to search the element in the array\n 1.Linear Search(press 1)\n2.Binary Search(press 2)\n");
    scanf("%d", &opt);
    if (opt == 1)
    {
    start1:
        printf("press 1 to confirm linear search and 2 to go back to main menu\n");
        scanf("%d", &opt1);
        if (opt1 == 1)
        {
            linearsearch(i, a, c, t, n);
        }
        else if (opt1 == 2)
        {
            goto start;
        }
        else
        {
            printf("wrong input\n");
            goto start1;
        }
    }
    else if (opt == 2)
    {
    start2:
        printf("press 1 to confirm binary search and 2 to go back to main menu\n");
        scanf("%d", &opt2);
        if (opt2 == 1)
        {
            binarysearch(c, i, a, n);
        }
        else if (opt2 == 2)
        {
            goto start;
        }
        else
        {
            printf("wrong input\n");
            goto start2;
        }
    }
    else
    {
        printf("wrong input\n");
        goto start;
    }
}

int linearsearch(int i, int a[], int c, int t, int n)
{
    printf("enter the number of elements you want in your array\n");
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
int binarysearch(int c, int i, int a[], int n)

{
    printf("enter the number of elements you want in your array\n");
    scanf("%d", &n);
    printf("enter the array elements \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int first = 0;
    int last = n - 1;
    int middle = (first + last) / 2;
    int key;
    printf("enter the element that you want to find\n");
    scanf("%d", &key);
    while (first <= last)
    {
        if (key < a[middle])
            last = a[middle] - 1;
        else if (key > a[middle])
            first = a[middle] + 1;
        else
        {
            printf("element found at %d\n", middle);
            c = 1;
            break;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        printf("element not found\n");
    }
    return 0;
}