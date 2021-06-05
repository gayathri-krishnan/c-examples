#include <stdio.h>
//int is a keyword
//main is the identifier
int main(){
    int a=5, b=7, c=7;
    //gives rounding error, why? How to fix?
    double average =(a+b+c)/3;
    printf("%lf",average);
    
    return 0;
}