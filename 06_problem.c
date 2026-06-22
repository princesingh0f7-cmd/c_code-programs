#include <stdio.h>
// Area of Square
int main(){
int side;
const float pie=3.14;
printf("ENTER SIDE OF SQUARE:");
scanf("%d",&side);
printf("AREA OF SQUARE:%d \n",side*side);
// Area of Circle
int radius;
printf("ENTER RADIUS OF CIRCLE:");
scanf("%d",&radius);
printf("AREA OF CIRCLE: %f",pie*radius*radius);
    return 0;
}