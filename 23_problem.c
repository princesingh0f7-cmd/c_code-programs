#include <stdio.h>
// SUM OF DIGIT OF NUMBER
int main(){
int num;
printf("ENTER NUMBER:");
scanf("%d",&num);
int orignal=num;
int sum =0;
for(int i=1;num>0;i++){
sum=sum+(num%10);
num=num/10; //123/10=12.3 dicard decimal
}
printf("sum of digit %d is %d",orignal,sum);
    return 0;
}