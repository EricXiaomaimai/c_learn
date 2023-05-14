#include <stdio.h>

int main(void)
{
    float speed, size;

    printf("What's the file size of your document(unit:MB)\?");
    scanf("%f", &size);
    printf("What's the download speed of this document(unit:MB/s)\?");
    scanf("%f", &speed);

    float times = size/speed;

    printf("At %.2f megabits per second, ", speed);
    printf("a file of %.2f megabytes\n", size);
    printf("downloads in %.2f seconds.", times);

    return 0;
}