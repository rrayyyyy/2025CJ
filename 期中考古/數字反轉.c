#include <stdio.h>

int reverse(int num) {
    int rev = 0;

    while (num > 0) {
        rev = rev * 10 + num % 10;  // 把最後一位加到結果後面
        num = num / 10;             // 去掉最後一位
    }

    return rev;
}

int main() {
    int num = 54321;
    printf("Reverse of %d = %d\n", num, reverse(num));
    return 0;
}

