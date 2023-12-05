// Second smallest number in a matrix
#include <stdio.h>

int main() {
    int m,n,i,j,a[30][30],large=0,secsmall,small;
    printf("Enter rows(m) and columns(n) of matrix A ");
    scanf("%d%d",&m,&n);
    printf("enter elements of matrix A \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>large)
            {
                large=a[i][j];
            }
        }
    }
    small=a[0][0];
    secsmall=large;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]<small)
            {
                secsmall=small;
                small=a[i][j];
            }
            if(a[i][j]<secsmall && a[i][j]>small)
            {
                secsmall=a[i][j];
            }
        }
    }
    printf("%d is the smallest element\n",small);
    printf("%d is the second smallest element\n",secsmall);

    return 0;

}
