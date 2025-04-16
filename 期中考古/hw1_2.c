#include <stdio.h>

void decode(char *a , int i){
    if(a[i] == '\0'){
        printf("\n");
        return;
    }
    char word = a[i];
    int count = a[i+1] - '0';
    for(int j = 0 ; j < count ; j++){
        printf ("%c",word);
    }
    i = i+2;
    decode (a , i);
}

int main() {
    char a[] = "A4B1C3f3";  // 壓縮過的 RLE 字串
    decode(a, 0);        // 從索引0開始還原
    return 0;
}
