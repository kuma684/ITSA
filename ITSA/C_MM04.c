#include <stdio.h>
/*[C_MM04-易] 計算總和、乘積、差、商和餘數
問題描述：
撰寫一個程式，要求使用者輸入兩個數字，再從使用者取得這兩個數
字，然後印出這兩個數字的總和、乘積、差、商、和餘數。
輸入說明 ：
輸入兩個整數。
輸出說明 ：
輸出總和、乘積、差、商、和餘數。
※餘數≧0。*/
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(a%b<0)
    {
        //商-1 餘數+除數補正
        printf("%d/%d=%d...%d\n",a,b,a/b-1,a%b+b);
    }
    else
        printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
    return 0;
}
