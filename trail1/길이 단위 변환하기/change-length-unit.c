#include <stdio.h>

int main() {
    float ft2cm = 30.48, mi2cm = 160934;
    float a = 9.2, b = 1.3;
    printf("%.1fft = %.1fcm\n%.1fmi = %.1fcm",
        a, a * ft2cm, b, b * mi2cm
    );
    return 0;
}