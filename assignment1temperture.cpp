#include<stdio.h>
int main() {
    float temp[3][7];
    float total, avg;

    printf("Enter temp for three cities\n");

    for (int c = 0; c < 3; c++) {
        printf("City: %d\n", c + 1);
        for (int m = 0; m < 7; m++) {
            printf("Month: %d\n", m + 1);
            scanf("%f", &temp [c][m]);
        }
    }

    // Output in your desired format
    printf("temp Tracking");
    printf("\n sr_no\t\tcity name\t\tm1\t\tm2\t\t\tm3\t\t\tm4\t\t\tavgRainfall");

    for (int c = 0; c < 3; c++) {
        total = 0;
        printf("\n %d\t\t city %d", c + 1, c + 1);
        for (int m = 0; m < 7; m++) {
            printf("\t\t%f", temp[c][m]);
            total += temp[c][m];
        }
        avg = total / 7;
        printf("\t %f", avg);
    }

    return 0;
}
