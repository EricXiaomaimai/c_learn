#include <stdio.h>
#include <string.h>

#define AU_TO_KM 149597870.7 // 1天文单位等于多少千米

int main() {
    char planet[20];
    double earth_distance, planet_distance, avg_distance;

    // Prompt user to input planet name
    printf("请输入一个太阳系中的行星（不能是地球）：");
    scanf("%s", planet);

    // Calculate average distance
    if (strcmp(planet, "水星") == 0) {
        earth_distance = 0.39;
        planet_distance = 0.38;
    } else if (strcmp(planet, "金星") == 0) {
        earth_distance = 0.72;
        planet_distance = 0.72;
    } else if (strcmp(planet, "火星") == 0) {
        earth_distance = 1.52;
        planet_distance = 1.52;
    } else if (strcmp(planet, "木星") == 0) {
        earth_distance = 5.20;
        planet_distance = 5.20;
    } else if (strcmp(planet, "土星") == 0) {
        earth_distance = 9.58;
        planet_distance = 9.58;
    } else if (strcmp(planet, "天王星") == 0) {
        earth_distance = 19.18;
        planet_distance = 19.18;
    } else if (strcmp(planet, "海王星") == 0) {
        earth_distance = 30.07;
        planet_distance = 30.07;
    } else {
        printf("输入无效。\n");
        return 1;
    }

    avg_distance = (earth_distance + planet_distance) / 2.0;
    printf("地球和%s的平均距离为%.2f个天文单位，约为%.2f亿千米。\n",
           planet, avg_distance, avg_distance * AU_TO_KM / 1e8);

    return 0;
}