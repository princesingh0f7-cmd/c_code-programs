#include <stdio.h>

int main(){
int num;
printf("ENTER TABLE:");
scanf("%d",&num);
int i=1;
while (i<=10)
{
    printf("\n %d X %d = %d",num,i,num*i);
    i++;
}
    return 0;
}