#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
            if(j <= (n+1-i))
            {
                if(i==1 || j==1 || j == (n+1-i) )
                    printf("* ");
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
