#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}
