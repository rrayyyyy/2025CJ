#include <stdio.h>
#include <ctype.h>  // 判斷是否為數字

int main() {
    char a[] = "A4B1C3f3";  // 壓縮過的 run-length 字串
    int i = 0;

    while (a[i] != '\0') {
        char ch = a[i];       // 字母
        int count = a[i+1] - '0';  // 把字元 '3' 轉成數字 3

        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }

        i += 2;  // 移到下一組
    }

    printf("\n");
    return 0;
}

