#include <stdio.h>

int main() {
    int a = 3, b = 5;
    a ^= b ^= a ^= b;
    printf("%d\n%d", a, b);
    return 0;
}