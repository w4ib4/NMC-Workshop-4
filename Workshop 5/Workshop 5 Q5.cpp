#include <stdio.h>

void display(int limit);

int main() {
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    display((lower << 16) | (upper & 0xFFFF));

    return 0;
}

void display(int limit) {
    int lower = (limit >> 16) & 0xFFFF;
    int upper = limit & 0xFFFF;

    for (int i = lower + 1; i < upper; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
