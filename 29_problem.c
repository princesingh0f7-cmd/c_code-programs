#include <stdio.h>

int main(){
int n;
printf("ENTER A NUMBER:");
scanf("%d",&n);
int sum=0;
int orignal=n;
for(;n>0;){
sum = sum + (n%10)*(n%10)*(n%10);
n=n/10;
}
if(sum==orignal){
    printf("\n %d number is armstrong number",orignal);
}
else{
    printf("\n %d number is not armstrong number",orignal);
}
    return 0;
}