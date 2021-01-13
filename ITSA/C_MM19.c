#include <stdio.h>
/*[C_MM19-易] 電話費計算
問題描述：
試寫一個程式，有一家電信公司的計費方式：每個月打800分鐘以下(含第800分鐘)，每分鐘0.9元；撥打時間介於800分鐘～1500分鐘時，所有電話費以9折計算；若是打1500分鐘以上(含第1500分鐘)，
則通話費將以79折計算，並於顯示其通話費用。
輸入說明：
輸入通話分鐘數(int)。
輸出說明：
輸出通話費(double)，取到小數點以下第一位。*/
int main()
{
    int minute;
    double cost;
    scanf("%d",&minute);
    if(minute<=800)
        cost=minute*0.9;
    else if(minute>800 && minute<1500)
        cost=0.9*(minute*0.9);
    else if(minute>=1500)
        cost=0.79*(minute*0.9);
    printf("%.1f\n",cost);
    return 0;
}
