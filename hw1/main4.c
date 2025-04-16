#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "Hello";         // 原始字串
    int len = strlen(a);        // 計算字串長度

    // 前後交換（反轉字串）
    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }

    // 印出反轉後的結果
    printf("%s\n", a);

    return 0;
}

