#include <stdio.h>
/*[C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
問題描述：
試寫一個程式，輸入任意正整數N，並輸出 1*1、2*2、...、N*N之結果。
輸入說明：
輸入一正整數。
輸出說明：
輸出相乘的積。*/
int main()
{
    int input;
    int i;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
        printf("%d*%d=%d\n",i,i,i*i);
    return 0;
}
