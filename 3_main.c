#include <stdio.h>

int main() {
    int a, b;
    char operator;
    
    printf("请输入两个整数和一个运算符（格式：a b 运算符）: ");
    scanf("%d %d %c", &a, &b, &operator);
    
    switch (operator) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("错误\n");
            }
            break;
        default:
            printf("错误\n");
            break;
    }
    
    return 0;
}
