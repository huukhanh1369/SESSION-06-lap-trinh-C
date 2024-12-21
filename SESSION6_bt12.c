#include<stdio.h>
#include<math.h>
int main (){
    int n,i,sum, a= 0, b= 1;
    printf("nhap vao so nguyen n : ");
    scanf("%d",&n);
    printf(" 0 1 ");
    for( i = 1 ; i<= n ; i++){
        sum = a + b;
        printf("%d ", sum) ;
        a= b;
        b= sum;
    }
    return 0 ;
}