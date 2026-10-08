#include<stdio.h>
int main()
{
    
int original, temp, reversed = 0, digit;
 
    printf("Enter reference number: ");
    scanf("%d", &original);
 
    temp = original;
    while (temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
 
    printf("Reversed: %d\n", reversed);
    if (reversed == original)
        printf("Palindrome Confirmed\n");
    else
        printf("Not a Palindrome\n");
}
 
