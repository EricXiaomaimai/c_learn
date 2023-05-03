#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

int main() {
    double h, p1, p2, delta_p;

    printf("请输入飞机的飞行高度（单位：米）：");
    scanf("%lf", &h);

    p1 = 101.3 * pow((1 - 2.25577e-5 * h), 5.25588);
    p2 = 1.223 * pow((1 - 6.87545e-6 * h), 5.25588);
    delta_p = p1 - p2;

    // 将结果保存到文件中
    if (remove("pressure.txt") != 0 && errno != ENOENT) {
        perror("无法删除文件");
        return 1;
    }
    FILE *fp = fopen("pressure.txt", "w");
    if (fp == NULL) {
        perror("无法打开文件");
        return 1;
    }
    fprintf(fp, "飞机内的气压为：%.2f kPa\n", p1);
    fprintf(fp, "飞机外的气压为：%.2f kPa\n", p2);
    fprintf(fp, "飞机内外的气压差为：%.2f kPa\n", delta_p);
    fclose(fp);

    // 打印结果
    printf("飞机内的气压为：%.2f kPa\n", p1);
    printf("飞机外的气压为：%.2f kPa\n", p2);
    printf("飞机内外的气压差为：%.2f kPa\n", delta_p);

    return 0;
}