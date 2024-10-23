#include<stdio.h>

int main() {
    int num, i, n1 = 0, n2 = 1, sum;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a number greater than 0.");
        return 0;
    }

    printf("Fibonacci Series: ");

    // Print the first term
    if (num >= 1) {
        printf("%d ", n1);
    }

    // Print the second term (if num is 2 or more)
    if (num >= 2) {
        printf("%d ", n2);
    }

    for (i = 3; i <= num; i++) {
        sum = n1 + n2;     
        printf("%d ", sum);  
        n1 = n2;             
        n2 = sum;            
    }

    return 0;
}
