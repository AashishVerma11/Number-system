//prime number

#include<stdio.h>

int main(){
    int num, i;

    printf("Enter a number: ");
    scanf("%d",&num);

  // Handling special cases: numbers less than or equal to 1 are not prime
    if (num <= 1) {
        printf("Not Prime Number");
        return 0;
    }

    for(i=2; i<=num/2; i++){
        if(num%i==0){
            printf("Not Prime Number");           
            return ;
        }       
    }

    printf("Prime Number");

    return 0;
}