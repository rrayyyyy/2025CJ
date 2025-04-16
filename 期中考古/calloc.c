#include <stdio.h>
#include <stdlib.h>

// 複製陣列：使用 calloc 分配空間並複製內容
int* clone_array(int* np, int n) {
    int* new_array = (int*)calloc(n, sizeof(int));  // 分配 n 個 int 空間
    for (int i = 0; i < n; i++) {
        new_array[i] = np[i];  // 複製每一個元素
    }
    return new_array;
}

// 印出陣列內容
void print_array(int* p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", p[i]);
        if (i != n - 1) printf(", ");
    }
    printf(",\n");  // 題目要求最後有個逗號
}

int main() {
    int n = 5;
    int np[5] = {0, 1, 2, 3, 4};
    int* p = clone_array(np, n);
    print_array(p, n);
    free(p);  // 釋放記憶體
    return 0;
}

