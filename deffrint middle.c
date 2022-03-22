#include <stdio.h>

int main()
{
    int i,j,n,x;
    scanf("%d",&n);
    x=(n/2)+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==x && j==x)
                printf("O ");
            else
                printf("* ");
        }
        printf("\n");

    }

    return 0;
}

