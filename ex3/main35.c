#include <stdio.h>

int main() {
    int v = 65;  // 'A' 的 ASCII 值
    int* p = &v; // p 指向 int 型別的變數 v

    printf("Address of v: %p\n", (void*)&v);
    printf("Address stored in p: %p\n", (void*)p);
    printf("Address of p: %p\n", (void*)&p);
    printf("Value of *p: %d\n", *p);

    return 0;
}

