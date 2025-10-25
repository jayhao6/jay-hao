//202510422132
//15608018591@163.com
//蒋周皓
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("请输入摄氏温度: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("华氏温度: %.f\n", fahrenheit);
    return 0;
}
