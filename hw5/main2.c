#include <stdio.h>

int main() {
    double pi = 0.0;
    int sign = 1;
    int x;
    
    for (x = 1; ; x += 2){
        pi += sign * 4.0 / x;
        if (pi >= 3.141585 && pi <= 3.141595){
            break;
        }    
        sign = -sign;
    }
    printf("最小的x是: %d\n", x);
    printf("計算出的PI是: %.5f\n", pi);
    return 0;
}
