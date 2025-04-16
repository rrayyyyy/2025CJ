#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];
    int line_num = 0;

    fp = fopen("main.c", "r");  // 開啟本身程式碼
    if (fp == NULL) {
        printf("檔案開啟失敗！\n");
        return 1;
    }

    // 一行一行讀取
    while (fgets(line, sizeof(line), fp)) {
        line_num++;

        // 搜尋是否包含 "main("
        if (strstr(line, "main(") != NULL) {
            printf("%02d %s", line_num, line);  // 行號補0，印出該行
        }
    }

    fclose(fp);
    return 0;
}

