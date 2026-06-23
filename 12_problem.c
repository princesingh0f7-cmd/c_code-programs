#include <stdio.h>

int main(){
int number;
printf("ENTER YOUR NUMBER:");
scanf("%d",&number);
if (number>0){
    printf("YOUR NUMBER IS POSITIVE");
}
else if (number<0){
    printf("YOUR NUMBER IS NEGATIVE NUMBER");
}
else{
    printf("YOUR NUMBER IS ZERO");
}
    return 0;
}