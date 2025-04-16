#include <stdio.h>

int main() {
    FILE *fp;  // 宣告一個檔案指標
    fp = fopen("hello.txt", "w");  // 以寫入模式開啟檔案

    if (fp == NULL) {
        printf("無法建立檔案！\n");
        return 1;
    }

    // 請將下面這行學號改成你自己的
    fprintf(fp, "hello, B11290000\n");

    fclose(fp);  // 關閉檔案
    return 0;
}
