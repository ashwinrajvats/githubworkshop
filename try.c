
#include<stdio.h>
int main()
{
    int n,a[100][100],i,j,sum1=0,sum2=0,sum,finalsum;
    scanf("%d",&n);
    for (i=0; i<n; i++)
     {
    for (j=0; j<n; j++)
     {
    scanf("%d",&a[i][j]);
    }
    }
    for (i=0; i<n; i++)
     {
    for (j=0; j<n; j++)
     {
    if (i==j)
    sum1=sum1+a[i][j];
 else if ((i+j)==(n-1))
     sum2=sum2+a[i][j];
     }
    }
    sum=sum1-sum2;
    if (sum<0) 
    finalsum=-sum;
    else  
    finalsum=sum;
    printf("%d",finalsum);
    return 0;
}