#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int digit1 = n%10;
    n = n/10;

    if(digit1%n==0 || n%digit1==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}