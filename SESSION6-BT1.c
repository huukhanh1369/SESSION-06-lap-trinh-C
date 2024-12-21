#include<stdio.h>
int main ()
{
    int n,sum ;
    printf("nhap vao so nguyen thu nhat : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        sum = sum + n;
    }
    printf("nhap vao so nguyen thu hai : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        sum = sum + n;
    }
    printf("nhap vao so nguyen thu ba : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        sum = sum + n;
    }
    printf("nhap vao so nguyen thu tu : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        sum = sum + n;
    }
    printf("nhap vao so nguyen thu nam : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        sum = sum + n;
    }
    printf (" tong cua cac so le la : %d", sum);
    return 0;   
}