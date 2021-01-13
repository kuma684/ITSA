#include <stdio.h>
/*[C_MM28-易] 計算1到N之間屬於5和7的倍數
問題描述：
試寫一個程式，讓使用者輸入任意正整數 N ，
可計算出 1 到 N 之間屬於 5 和 7 的倍數的數值。
輸入說明：
輸入一個正整數。
輸出說明：
輸出 5 和 7 的倍數的數字。*/
int main()
{
    int input,i=0,j=0;
    int result[500]={};
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        if(i%35==0)
        {
            result[j]=i;
            j++;
        }
    }
    for(i=0;i<j-1;i++)
        printf("%d ",result[i]);
    printf("%d\n",result[j-1]);
    return 0;
}
