#include <stdio.h>

int main() {
    int a = 5, b = 6, c = 7, t;
    t = a;
    a = c;
    c = b;
    b = t;
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}