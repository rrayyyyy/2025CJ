#include <stdio.h>

// 遞迴函式：將二進位字串轉成十進位
int binaryToDecimal(char *a, int i) {
    if (a[i] == '\0') {
        return 0;  // 遞迴終止條件：字串結束
    }

    int bitValue = 0;
    if (a[i] == '1') {
        bitValue = 1 << (7 - i);  // 相當於 2^(7 - i)
    }

    return bitValue + binaryToDecimal(a, i + 1);  // 累加並遞迴處理下一位
}

int main() {
    char a[] = "10001111";  // 8個 bits
    int decimal = binaryToDecimal(a, 0);  // 從第0位開始轉換

    printf("0x%X\n", decimal);  // 輸出為十六進位
    return 0;
}
