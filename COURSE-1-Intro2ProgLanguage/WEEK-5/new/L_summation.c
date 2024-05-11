#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void fun(int ar[], int n, int i)
{
    if(i == n) return; 
    
    printf("%d\n",fun(ar,n,i+1));
}

int main()
{
    int n; 
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);

    int res = fun(ar,n,0);
    printf("sum is = %d\n",res); 
    
    return 0;
}