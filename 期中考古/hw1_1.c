#include <stdio.h>
#include <string.h>

void encode(char *a ,int i){
    if (a[i]=='\0'){
        printf("\n");
        return;
    }
    char current = a[i];
    int count = 1;
    while (current == a[i+count] && count < 9){
        count++;
    }
    printf("%c%d",current,count);
    encode(a,i+count);
}

int main() {
    char a[] = "AABBBCCCCddd";  // 固定字串
    encode(a, 0);            // 從第0個字元開始處理
    return 0;
}
