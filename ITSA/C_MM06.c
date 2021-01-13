#include <stdio.h>
/*[C_MM06-易] 英哩轉公里
問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里
輸入說明：
輸入欲轉換之英哩數(int)。
輸出說明：
輸出公里(double)，四捨五入取到小數點以下第一位。*/
int main()
{
    int mile;
    double km;
    scanf("%d",&mile);
    km=(int)((mile*1.6*10)+0.5)/10.0;
    printf("%.1f\n",km);
    return 0;
}
