#include <stdio.>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
    int num1, num2, num3;
    char operator;

    printf("Please enter a expression: ");
    printf("수식을 입력하세요 : ");
    scanf("%d %c $d", &a, &operator, &b);

    switch (operator)
    {
        case '+':
            c = add(a,b);
            break;

        case '-':
            c = sub(a,b);
            break;

        case '*':
            c = multi(a,b);
            break;
        
        case '/':
            c = div(a,b);
            break;      
    }
}
