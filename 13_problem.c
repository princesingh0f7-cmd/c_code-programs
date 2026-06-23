#include <stdio.h>

int main(){
int number;
printf("ENTER YOUR NUMBER:");
scanf("%d",&number);
if (number%2==0){
    printf("YOUR ENTER NUMBER IS EVEN");
}
else{
    printf("YOUR NUMBER IS ODD");
}
    return 0;
}