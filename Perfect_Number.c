#include<stdio.h>

int main(){
    int num, i, sum=0;

    printf("Enter a Number: ");
    scanf("%d",&num);
 
    for(i=1; i<=num/2; i++){
        if(num%i==0){
            sum = sum + i;
        }
    }

    if(num==sum) printf("Perfect Number");
    else printf("Not Perfect Number");

    return 0;
}