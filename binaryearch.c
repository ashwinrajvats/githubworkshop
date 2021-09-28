#include<stdio.h>
int binarysearch(int c, int i, int a[], int n)

{
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
            printf("element found at %d\n",middle+1);
            c = 1;
            break;
        }
        middle=(first+last)/2;
    }
    if (first>last)
    {
        printf("element not found\n");
    }
    
}
void main()
{
    int a[100], i, t, n, c = 0, sum = 0;
    printf("enter the number of elements you want in your array\n");
    scanf("%d", &n);
    printf("enter the array elements \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        binarysearch(c,i,a,n); 
}