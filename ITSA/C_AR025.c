#include <stdio.h>
/*[C_AR025-易] 計算ASCII字元
問題描述：
給定一行文字，請你幫忙列出 ASCII 字元的出現頻率。你可以假設 ASCII 前 32 個字元以及後 128 個字元不會出現。
每一行文字的後面以 ’\n’ 結束，但是不用把那個字元考慮進去。
輸入說明：
由使用者手動輸入 n 個字元，並按下 enter 鍵結束輸入。
輸出說明：
對於每一行輸入，根據出現的 ASCII 值大小印出 ASCII 字元， ASCII 值比較大的優先印出。*/
int strlen(char *s) {
    int i;
    for (i = 0; *s != 0; i++, s++) ;
    return i;
}

int main()
{
    int i=0;
    char arr[100];
    int count[97]={};
    gets(arr);
    for(i=0;i<strlen(arr);i++)
    {
        count[arr[i]-32]++;
    }
    for(i=96;i>=0;i--)
    {
        if(count[i]!=0)
            printf("%d %d\n",i+32,count[i]);
    }
    return 0;
}
