#include<stdio.h>
#include<math.h>

int main(){
    int n;
    
    scanf("%d",&n);
    
    for(int i=100; i<=n; i++){
        
        int a = i;
        int sum = 0;
        int c =0;
        
        for(int b=a; b!=0; b/=10){
            c++;
        }
        
        for(int b=a; b!=0; b/=10){
            int rem = b%10;
            sum = sum + pow(rem,c);
            
        }
        
        if(sum == i){
            printf("%d\n",sum);
        }
    }
    
    return 0;
}