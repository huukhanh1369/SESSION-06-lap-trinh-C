#include<stdio.h>
int main()
{
    int n,i;
    printf("nhap vao so nguyen n : ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++)
    {
        if (n % i == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}