#include <stdio.h>

int fanc(int a, int b){
    int c = 0;
    c = a + b;
    return c;
}

int main(void){
    int x = 0;
    x = fanc(1, 2);
    printf("%d", x); // 3
    return 0;
}
