#include <stdio.h>

int main(){
int first,second,lcm ;
printf("ENTER FIRST NUMBER:");
scanf("%d",&first);
printf("ENTER SECOND NUMBER:");
scanf("%d",&second);
// for(int max=first>second?first:second; ;max++) {
//     if(max%first==0 && max%second==0){
//         printf("LCM OF %d and %d is %d",first,second,max);
//         break;
//     }
//    }
for(int i=1;lcm=first*second;i++){
    if(i%first==0 && i%second==0){
        printf("LCM OF %d and %d is %d",first,second,i);
        break;
    }
}
    return 0;
}