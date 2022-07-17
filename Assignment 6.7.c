#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter n:");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("NUMBER OF DIGITS = %d",count);
    return 0;
}
