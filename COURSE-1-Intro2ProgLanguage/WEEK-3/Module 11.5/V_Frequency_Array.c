#include<stdio.h>
#include<limits.h>
int main()
{
    int n, m;
    scanf("%d%d",&n,&m);
    int ar[n];
    int cnt[100001] = {0};
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        cnt[ar[i]]++;
    }


    for(int i=1; i<=m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    
    return 0;
}