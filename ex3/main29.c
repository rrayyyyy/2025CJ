#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ip = (int*)malloc(sizeof(int)); // 分配記憶體給指標 ip
    if (ip == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ip = 2; // 將值 2 存入動態記憶體
    printf("%x\n", *ip);

    free(ip); // 釋放記憶體，避免 memory leak
    return 0;
}
