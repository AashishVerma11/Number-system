// Armstrong Number 153 = 1sq. + 5sq. + 3sq. = 153;

#include<stdio.h>
#include<math.h>

int main(){
    int num,m, c=0,r;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num==0){
        c++;
    } 
    

    for( m=num; m!=0; m/=10){
        
        c++;
    }

    for(m=num; m!=0; m/=10){
        r= m%10;
        sum = sum + pow(r,c);
    }
    

    if(num==sum){
        printf("Armstrong Number");
    }else{
        printf("Not Armstrong Number");
    }

    return 0;
}