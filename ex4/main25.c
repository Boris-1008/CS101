#include <stdio.h>

int multi(int i, int j) {
    if (j > 9) {
        multi(i+1,1);
        return 0;
    }
    if(i > 9) {
        return 0;
    }
    printf("%d*%d=%d\n", i, j, i*j);
    multi(i, j+1);
}

int main() {
    multi(1, 1);
    return 0;
}
