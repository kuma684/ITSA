#include <stdio.h>
/*[C_MM14-易] 計算時間的組合
問題描述：
寫一程式要求使用者輸入代表秒數的整數值，
並且經計算以天數、小時數、分鐘數、與秒數的組合來顯示對等的時間值。
請使用符號常數表示一天內的小時數；一小時內的分鐘數，以及一分鐘內的秒數。
輸入說明：
輸入秒數。
輸出說明：
輸出天數，時數，分數，秒數。*/
int main()
{
    int input;
    int day,hour,min,sec;
    scanf("%d",&input);
    //day=60*60*24=86400
    day=input/86400;
    //hour=60*60=3600
    hour=(input-day*86400)/3600;
    //min=60
    min=(input-day*86400-hour*3600)/60;
    sec=input-day*86400-hour*3600-min*60;
    printf("%d days\n",day);
    printf("%d hours\n",hour);
    printf("%d minutes\n",min);
    printf("%d seconds\n",sec);
    return 0;
}
