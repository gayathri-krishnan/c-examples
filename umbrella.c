#include <stdio.h>
int main(){
    int outside, weather;
    printf("Where are you ? \nEnter 1- Outside 0-Inside");
    scanf("%d", &outside);
    printf("Is it raining ? \nEnter 1- yes 0-no");
    scanf("%d",&weather);
    if(outside && weather){ // Check short circuit evaluation
        printf("\nDon't forget your umbrella!!");
    }else{
         printf("\nEnjoy the pleasant weather %s!!",outside==1?"outside":"inside");
    }

    return 0;
}