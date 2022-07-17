#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);

    i=2;
    while(i<n)
    {
        if(n%i==0)
           {
              printf("%d is not a prime",n);
              break;
           }
    i++;
    }
    if(i==n)
        printf("%d is a prime number",n);
    return 0;
}
