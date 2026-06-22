#include <stdio.h>

int main(){
int age;
printf("ENTER YOUR AGE:");
scanf("%d",&age);
if(age >=18){
    printf("You are adult\nEligible for voting");
}
else{
    printf("You are minor\nnot Eligible for voting");
}
    return 0;
}