#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("enter the value of number:\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum*i;
    }
        printf("the factorial of number %d is %d\n",n,sum);
    return 0;
}
