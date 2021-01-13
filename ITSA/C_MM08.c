#include <stdio.h>
/*[C_MM08-易] 計算兩數和的平方值
問題描述：
請撰寫一個程式，可計算兩數和的平方值。
輸入說明：
輸入兩個數字。
輸出說明：
輸出和的平方值。*/
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",(a+b)*(a+b));
    return 0;
}
