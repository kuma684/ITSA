#include <stdio.h>
/*[C_AR43-易] 以遞迴函數計算冪次
1. 問題描述 ： 以遞迴函數計算冪次
寫一個程式以遞迴函數計算冪次。
輸入說明 ：
多筆測資，每筆一行兩個整數 m 和 n ( 皆大於或等於 0) ，直到EOF結束。
輸出說明 ：
每筆一行，以遞迴函數計算 mn 。*/
int main()
{
    int n,m,i;
    long int result;
    while(1)
    {
        int read;
        read=scanf("%d %d",&n,&m);
        if(read==EOF)
            break;
        result=n;
        if(m==0)
            result=1;
        else
        {
            for(i=0;i<m-1;i++)
                result*=n;
        }
        printf("%ld\n",result);
    }
    return 0;
}
