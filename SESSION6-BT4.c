#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c, delta;
    printf("hay nhap vao 2 so a,b,c de giai phuong trinh bac 2: ");
    scanf("%f%f%f",&a,&b,&c);
    delta = b*b - 4*a*c;
    if ( delta < 0)
    {
        printf("phuong trinh vo nghiem");
    }
     else if ( delta == 0 )
    {
        printf("phuong trinh co nghiem kep x1 = x2 = %.2f", (-b)/(2*a) );
    }
    else if ( delta > 0)
    {
        printf( "phuong trinh co hai nghiem phan biet voi x1 = %.2f va x2 = %.2f", (-b+ sqrt(delta))/(2*a), (-b -sqrt(delta))/(2*a));
    }
    return 0;
}