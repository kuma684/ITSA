#include <stdio.h>
/*[C_MM24-易] 計算薪水
問題描述：
試寫一個程式，讓使用者可輸入整月的工時數及每月的固定時薪，
並將其所應獲得的工資顯示在螢幕上。工資計算方法如下：
(1) 60 小時 ( 含 ) 以下的薪水部份，以固定時薪計算。
(2) 61 ～ 120 小時之間的薪水部份，以固定時薪的 1.33 倍計算。
(3) 第 121 小時以上的薪水部份，以固定時薪的 1.66 倍計算。
輸入說明：
每一次執行輸入兩個整數，依序分別為工時、時薪。
輸出說明：
輸出薪水(double)，取至小數點以下第一位。*/
int main()
{
    int hour,money;
    double result;
    scanf("%d %d",&hour,&money);
    if(hour<=60)
        result=hour*money;
    else if(hour>60 && hour<=120)
        result=60*money+(hour-60)*money*1.33;
    else
        result=60*money+60*money*1.33+(hour-120)*money*1.66;
    printf("%.1f\n",result);
    return 0;
}
