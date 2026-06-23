#include <stdio.h>

int main(){
int perc;
printf("ENTER YOUR PERCANTAGE:");
scanf("%d",&perc);
if (perc>90){
    printf("GRADE - A");
}
else if(perc>75 && perc<90){
    printf("GRADE - B");
}
else if(perc>60 && perc<75){
    printf("GRADE - C");
}
else if(perc>30 && perc<75){
    printf("GRADE - C");
}
else{
    printf("GRADE - F");
}
    return 0;
}