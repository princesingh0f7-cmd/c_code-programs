#include <stdio.h>
// sum of odd number
int main(){
int num;
printf("ENTER NUMBER:");
scanf("%d",&num);
int sum=0;
for(int i=1;i<=num;i +=2){
sum=sum+i;
}
printf("sum= %d",sum);
    return 0;
}