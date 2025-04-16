#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char a[] = "10001111";  // 8個 bits
    int decimal = 0;

    // 把二進位字串轉成十進位整數
    for (int i = 0; i < 8; i++) {
        if (a[i] == '1') {
            decimal += (1 << (7 - i));  // 2^(7-i)
        }
    }

    // 輸出 16進位
    printf("0x%X\n", decimal);  // 輸出格式為十六進位

    return 0;
}

