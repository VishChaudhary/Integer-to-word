#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int number, reversed, a, remainder; //declaring variable
    reversed = 0;

//ask and scan for input
printf("\nEnter a number: ");
scanf("%d", &number);

while (number != 0) //reversing the input value because the next loop will reverse the numbers again
{
remainder = number % 10;
reversed = reversed * 10 + remainder;
number /= 10;
}

//variable reversed is the reverse of the input value


while (reversed != 0)
{
    a = reversed % 10; //using the remainder method to print numbers
    reversed = reversed / 10;
    switch (a)  //using a switch statement to change the numbers into letter numbers
{
    case 0:
        printf("zero ");
        break;
    case 1:
        printf("one ");
        break;
    case 2:
        printf("two ");
        break;
    case 3:
        printf("three ");
        break;
    case 4:
        printf("four ");
        break;
    case 5:
        printf("five ");
        break;
    case 6:
        printf("six ");
        break;
    case 7:
        printf("seven ");
        break;
    case 8:
        printf("eight ");
        break;
    case 9:
        printf("nine ");
        break;
}
}
return 0;
}