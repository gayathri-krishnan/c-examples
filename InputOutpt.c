#include <stdio.h>
#define PI 3.14159
int main(){
    double radius = 0.0 , area = 0.0;
    printf("Enter Radius");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("radius of %lf meters, area of %lf meters", radius, area);
    return 0;
}