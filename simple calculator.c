#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2;
    int c;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    printf("List of choices:\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-power of one number to another\n");
    printf("Enter your choice:");
    scanf("%d\n",&c);
    switch(c)
    {
        case 1:
        {
            printf("%d",n1+n2);
        }
        case 2:
        {
            printf("%d",n1-n2);
        }
        case 3:
        {
            printf("%d",n1*n2);
        }
        case 4:
        {
            printf("%d",n1/n2);
        }
        case 5:
        {
            printf("%d",pow(n1,n2));
        }
        default:
        {
            printf("invalid choice");
        }
    }
    return 0;
}