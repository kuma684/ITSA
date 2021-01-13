#include <stdio.h>
/*C_MM38-易] 判斷3整數是否能構成三角形之三邊長
問題描述：
試撰寫一程式，判斷這三個整數是否能構成三角形的三個邊長
（註 : 三角形兩邊長之和必須大於第三邊）。
輸入說明：
輸入為一行字串，包含了三個數值，每個數值以空白隔開。
三個數值分別為三角形的三個邊長。
輸出說明：
輸出符合 (fit) 或不符合 (unfit) 。*/
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("fit\n");
    else
        printf("unfit\n");
    return 0;
}
