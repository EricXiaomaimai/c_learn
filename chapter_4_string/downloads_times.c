#include <stdio.h>

int main(void)
{
    float speed, size;

    printf("What's the file size of your document(unit:megabytes)\?");
    scanf("%f", &size);
    printf("What's the download speed of this document(unit:megabits/s)\?");
    scanf("%f", &speed);
    
    float speed_mb = speed / 8.0;    // convert to megabytes per second
    float times = size/speed_mb;

    printf("At %.2f megabits per second, ", speed);
    printf("a file of %.2f megabytes\n", size);
    printf("downloads in %.2f seconds.", times);

    return 0;
}
