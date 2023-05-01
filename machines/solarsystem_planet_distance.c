#include <stdio.h>
#include <string.h>

#define AU_TO_KM 149597870.7 // 1���ĵ�λ���ڶ���ǧ��

int main() {
    char planet[20];
    double earth_distance, planet_distance, avg_distance;

    // Prompt user to input planet name
    printf("������һ��̫��ϵ�е����ǣ������ǵ��򣩣�");
    scanf("%s", planet);

    // Calculate average distance
    if (strcmp(planet, "ˮ��") == 0) {
        earth_distance = 0.39;
        planet_distance = 0.38;
    } else if (strcmp(planet, "����") == 0) {
        earth_distance = 0.72;
        planet_distance = 0.72;
    } else if (strcmp(planet, "����") == 0) {
        earth_distance = 1.52;
        planet_distance = 1.52;
    } else if (strcmp(planet, "ľ��") == 0) {
        earth_distance = 5.20;
        planet_distance = 5.20;
    } else if (strcmp(planet, "����") == 0) {
        earth_distance = 9.58;
        planet_distance = 9.58;
    } else if (strcmp(planet, "������") == 0) {
        earth_distance = 19.18;
        planet_distance = 19.18;
    } else if (strcmp(planet, "������") == 0) {
        earth_distance = 30.07;
        planet_distance = 30.07;
    } else {
        printf("������Ч��\n");
        return 1;
    }

    avg_distance = (earth_distance + planet_distance) / 2.0;
    printf("�����%s��ƽ������Ϊ%.2f�����ĵ�λ��ԼΪ%.2f��ǧ�ס�\n",
           planet, avg_distance, avg_distance * AU_TO_KM / 1e8);

    return 0;
}