#include<stdio.h>
int main ()
{
    int n,le=0,chan=0;
    printf("nhap vao so nguyen thu nhat : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        le++;
    }
    else chan++;
    printf("nhap vao so nguyen thu hai : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        le++;
    }
    else chan++;
    printf("nhap vao so nguyen thu ba : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        le++;
    }
    else chan++;
    printf("nhap vao so nguyen thu tu : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        le++;
    }
    else chan++;
    printf("nhap vao so nguyen thu nam : ");
    scanf("%d",&n);
    if ( n % 2 != 0)
    {
        le++;
    }
    else chan++;
    printf (" so luong le trong 5 so tren la : %d va so luong chan la : %d", le, chan);
    return 0;   
}