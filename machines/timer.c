#include <stdio.h>
#include <unistd.h>

#define ESC "\033"  // ���� ESC Ϊת���ַ�

int main() {
    int minutes;
    printf("��Ҫ��ʱ���ٷ��ӣ�");
    scanf("%d", &minutes);
    
    int seconds = 0;
    int total_seconds = minutes * 60;
    while (seconds < total_seconds) {
        if (seconds < 60) {
            printf(ESC "[2K");  // �����ǰ��
            printf("%ds", seconds);
        } else {
            int m = seconds / 60;
            int s = seconds % 60;
            printf(ESC "[2K");  // �����ǰ��
            printf("%dmin %ds", m, s);
        }
        fflush(stdout);  // ˢ�����������
        sleep(1);
        printf(ESC "[1G");  // ����ƶ�������
        seconds++;
    }
    
    printf("\n��ʱ����\n");
    for (int i = 0; i < 5; i++) {
        printf("\a");
        sleep(1);
    }
    return 0;
}