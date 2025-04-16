#include <stdio.h>
#include <string.h>

// 遞迴函式：負責交換首尾
void swap(char *a, int i, int len) {
    if (i >= len/2){
        return;
    }
    char temp = a[i];
    a[i] = a[len-1-i];
    a[len-1-i] = temp;
    swap(a,i+1,len);
}

int main() {
    char a[] = "Helo";         // 原始字串
    int len = strlen(a);        // 計算字串長度

    swap(a, 0, len);   // 從第 0 位開始遞迴交換
    printf("%s\n", a);          // 印出結果

    return 0;
}

