//Write a simple calculator program in C that can perform addition, subtraction, multiplication, and division based on user input.
#include <stdio.h>
int main()
{
    printf("choose the operator: \n");
    printf("1. Addition \n");
    printf("2. Subraction  \n");
    printf("3. Multiplication \n");
    printf("4. Division  \n");
    
    int a, b, c;
    printf("Choose: ");
    scanf("%d", &c);
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter Second number: ");
    scanf("%d", &b);
    
    int result;
    if(c ==1){
        result = a+b;
    
        printf("%d is answer", result);
    }
    else if(c ==2 ){
        result = a-b;
        printf("%d is answer", result);
    }
    else if(c == 3){
        result = a*b;
        printf("%d is answer", result);
    }
    else if(c == 4){
        result = a/b;
        printf("%d is answer", result);
    }
    else{
        printf("invalid Operator");
    }
    return 0;
}
