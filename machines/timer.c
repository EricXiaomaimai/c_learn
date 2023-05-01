#include <stdio.h>
#include <unistd.h>

#define ESC "\033"  // 定义 ESC 为转义字符

int main() {
    int minutes;
    printf("你要计时多少分钟？");
    scanf("%d", &minutes);
    
    int seconds = 0;
    int total_seconds = minutes * 60;
    while (seconds < total_seconds) {
        if (seconds < 60) {
            printf(ESC "[2K");  // 清除当前行
            printf("%ds", seconds);
        } else {
            int m = seconds / 60;
            int s = seconds % 60;
            printf(ESC "[2K");  // 清除当前行
            printf("%dmin %ds", m, s);
        }
        fflush(stdout);  // 刷新输出缓冲区
        sleep(1);
        printf(ESC "[1G");  // 光标移动到行首
        seconds++;
    }
    
    printf("\n计时结束\n");
    for (int i = 0; i < 5; i++) {
        printf("\a");
        sleep(1);
    }
    return 0;
}