// palindrome number 121

#include <stdio.h>

int main()
{
    int n, m, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    // using for loop
    /* for(; n!=0; n/=10){
         rem = n%10;
         rev = rev*10+rem;
     }*/

    // using while loop
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (m == rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf(" Not Palindrome Number");
    }

    return 0;
}