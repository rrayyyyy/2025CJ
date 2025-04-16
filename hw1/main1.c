#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "AABBBCCCCddd";  // 固定字串，不允許輸入
    int i = 0;

    while (a[i] != '\0') {
        char current = a[i];
        int count = 1;

        // 統計連續出現的字元數量
        while (a[i + 1] == current && count < 9) {
            count++;
            i++;
        }

        // 輸出：字母 + 次數
        printf("%c%d", current, count);
        i++;
    }

    printf("\n");
    return 0;
}

