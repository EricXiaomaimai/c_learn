#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

int main() {
    double h, p1, p2, delta_p;

    printf("������ɻ��ķ��и߶ȣ���λ���ף���");
    scanf("%lf", &h);

    p1 = 101.3 * pow((1 - 2.25577e-5 * h), 5.25588);
    p2 = 1.223 * pow((1 - 6.87545e-6 * h), 5.25588);
    delta_p = p1 - p2;

    // ��������浽�ļ���
    if (remove("pressure.txt") != 0 && errno != ENOENT) {
        perror("�޷�ɾ���ļ�");
        return 1;
    }
    FILE *fp = fopen("pressure.txt", "w");
    if (fp == NULL) {
        perror("�޷����ļ�");
        return 1;
    }
    fprintf(fp, "�ɻ��ڵ���ѹΪ��%.2f kPa\n", p1);
    fprintf(fp, "�ɻ������ѹΪ��%.2f kPa\n", p2);
    fprintf(fp, "�ɻ��������ѹ��Ϊ��%.2f kPa\n", delta_p);
    fclose(fp);

    // ��ӡ���
    printf("�ɻ��ڵ���ѹΪ��%.2f kPa\n", p1);
    printf("�ɻ������ѹΪ��%.2f kPa\n", p2);
    printf("�ɻ��������ѹ��Ϊ��%.2f kPa\n", delta_p);

    return 0;
}