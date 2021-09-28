#include <stdio.h>
void main()
{
    int a[100], b[100], n, m, u[100], i, k, j;
    printf("enter the size of first set\n");
    scanf("%d", &n);
    printf("enter the set elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
        for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                if (a[j]<a[i])
                {
                    int t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                }
                
            }
            
        }
        

    printf("enter the size of second set\n");
    scanf("%d", &m);
    printf("enter the set elements\n");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
          for ( i = 0; i < n; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                if (b[j]<b[i])
                {
                    int t=b[j];
                    b[j]=b[i];
                    b[i]=t;
                }
                
            }  
            
        }
      
    for (i = 0, j = 0, k = 0; i < n && j < m;)
    {
        if (a[i] < b[j])
        {
            u[k] = a[i];
            i++;
            k++;
        }
        else if (b[j] < a[i])
        {
            u[k] = b[j];
            j++;
            k++;
        }
        else
        {
            u[k] = a[i];
            i++;
            j++;
            k++;
        }
    }
    if (i < n)
    {
        for (; i < n; ++i)
        {
            u[k] = a[i];
            k++;
        }
    }
    else if (j < m)
    {
        for (; j < m; ++j)
        {
            u[k] = b[j];
            k++;
        }
    }
printf("the union of the two array is\n");
for ( i = 0; i < k; i++)
printf("%d\t",u[i]);

}
