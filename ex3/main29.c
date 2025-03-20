#include <stdio.h>

int main() {
    int value = 2;
    int* ip = &value;
    printf("%x\n", (unsigned int)ip);
    printf("%x\n", *ip);
    return 0;
}

