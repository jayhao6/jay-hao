#include <stdio.h>

int main() {
    int score;
    
    // 获取用户输入的成绩
    printf("请输入学生成绩(0-100): ");
    scanf("%d", &score);
    
    // 检查输入是否在有效范围内
    if (score < 0 || score > 100) {
        printf("输入错误！成绩应在0-100之间。\n");
        return 1;
    }
    
    // 成绩等级判断
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("E\n");
    }
    
    return 0;
}
