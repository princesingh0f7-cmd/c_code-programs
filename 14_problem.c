#include <stdio.h>

int main(){
int a,b,c;
printf("ENTER YOUR FIRST NUMBER:");
scanf("%d",&a);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%d",&b);
printf("ENTER YOUR THIRD NUMBER:");
scanf("%d",&c);
if(a>b&&a>c){
    printf("FIRST NUMBER IS GREATER");
}
else if(b>c&&b>a){
    printf("SECOND NUMBER IS GREATER");
}
else{
printf("THIRD NUMBER IS GREATER");
}
    return 0;
}