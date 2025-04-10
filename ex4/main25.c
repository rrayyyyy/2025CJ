#include <stdio.h>

int factorial(int n) {
    if (n == 1)                
        return 1;
    return n * factorial(n - 1); 
}

// 遞迴方式計算字串長度
int my_strlen(char* s) {
    if (!*s) return 0;              
    return 1 + my_strlen(s + 1);     

int main() {
    // 階乘測試
    int n = 5;
    int m = factorial(n);
    printf("factorial %d = %d\n", n, m); 
    // 字串長度測試
    char s[] = "IU is a girl!";
    int len = my_strlen(s);
    printf("(%s) len = %d\n", s, len); 
    return 0;
}

