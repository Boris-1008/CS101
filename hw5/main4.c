#include <stdio.h>

int main() {
    int n = 12345; 
    printf("原始數字是: %d\n", n);

    int thousands = (n / 1000) % 10; 
    int ones = n % 10;              

    int swapped = n - thousands * 1000 - ones + thousands + ones * 1000;

    printf("交換後的數字是: %d\n", swapped);
    return 0;
}
