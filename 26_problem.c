#include <stdio.h>

int main(){
int n;
printf("ENTER A NUMBER:");
scanf("%d",&n);
for (int i=2;i<n;i++){
    if(n%i==0){
        printf("%d is not prime number",n);
        return 0;
    }
}
printf("\n %d is prime number",n);
    return 0;
}