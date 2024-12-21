#include<stdio.h>
int main (){
    int n;
    for ( int n = 1 ; n <= 100 ; n++)
    {
    if(n % 3 == 0 ){
            if( n % 5 ==0 ){
                printf ("FizzBuzz\n");
            }
            else{
                printf("Fizz\n");
            }
    }
    else if (n % 5 ==0){
        printf("Buzz\n");
    }
    else {
        printf("%d\n",n);
    }
    }
    return 0 ;
}