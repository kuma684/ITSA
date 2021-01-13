#include <stdio.h>
/*[C_MM11-易] 購票計算
問題描述：
假設火車站的自動售票機只能接受10元、5元、以及1元的硬幣，請撰寫一個程式，
算出乘客所購買票價N元車票時，所需投入各種幣值硬幣最少的數量？
輸入說明：
輸入票價。
輸出說明：
輸出各幣值硬幣最少的數量。*/
int main()
{
    int money;
    scanf("%d",&money);
    int num10,num5,num1;
    num10=money/10;
    num5=(money-num10*10)/5;
    num1=money-num10*10-num5*5;
    printf("NT10=%d\n",num10);
    printf("NT5=%d\n",num5);
    printf("NT1=%d\n",num1);
    return 0;
}
