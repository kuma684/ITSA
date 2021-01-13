#include <stdio.h>
/*[C_MM09-易] 計算 i 次方的值
問題描述：
請撰寫一個程式，計算2的 ｉ次方的值。(提示：利用位移運算元)
輸入說明：
輸入一個正整數，i的值小於31。
輸出說明：
輸出 的ｉ次方的值。
若 i > 31 輸出 "Value of more than 31"*/
int main()
{
    int i,value;
    long int result;
    result=1;
    scanf("%d",&value);
    if(value>31)
        printf("Value of more than 31\n");
    else
    {
        for(i=0;i<value;i++)
            result=result*2;
        printf("%ld\n",result);
    }
    return 0;
}
