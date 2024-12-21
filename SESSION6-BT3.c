#include<stdio.h>
int main ()
{
    int pass=123456789,n=2,enter;
    printf("hay nhap mat khau cua ban :");
    scanf("%d",&enter);
    while ( n == 2 )
    {
    if (enter == pass)
    {
        printf("chuc mung ban da nhap dung mat khau");
        n = 3;
    }
    else 
    {
        printf( "rat tiec ban da nhap sai mat khau hay nhap lai :");
        scanf("%d",&enter);
    }
    }
    return 0;
}