#include <stdio.h>
//int is a keyword
//main is the identifier
int main(){
    int miles = 26, yards = 385; //declaration and initialization
    double kilometers; //declaration
    kilometers = 1.609*(miles+yards/1760);//expression
    printf("\nA marathon is %lf kilometers\n",kilometers);
    return 0;
}