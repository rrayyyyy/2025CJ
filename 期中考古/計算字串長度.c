#include <stdio.h>

// 遞迴版本的 strlen 實作
int my_strlen(char* s) {
    if (*s == '\0')  // 結束條件：字串結尾
        return 0;
    else
        return 1 + my_strlen(s + 1);  // 指標往後移一格，遞迴呼叫
}

int main() {
    char s[] = "IU is a girl!";
    printf("(%s) len = %d\n", s, my_strlen(s));
    return 0;
}

