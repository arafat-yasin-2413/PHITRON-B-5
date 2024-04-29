#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);

    int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            // printf("Hi honey\n");
            printf("%d",j);
        }
        printf("\n");
        k++;
    }
    
    return 0;
}