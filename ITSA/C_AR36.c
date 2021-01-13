#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*[C_AR36-易] 星座查詢
問題描述：
星座查詢有 " 水瓶 "," 雙魚 "," 牡羊 "," 金牛 " ," 雙子 "," 巨蟹 "," 獅子 "," 處女 " ," 天秤 "," 天蠍 "," 射手 "," 摩羯 ";
請設計程式，根據輸入之月及日期，輸出對應之星座輸出。
1997 年 1 月 21 日 1997 年 2 月 18 日 水瓶
1997 年 2 月 19 日 1997 年 3 月 20 日 雙魚
1997 年 3 月 21 日 1997 年 4 月 20 日 牡羊
1997 年 4 月 21 日 1997 年 5 月 21 日 金牛
1997 年 5 月 22 日 1997 年 6 月 21 日 雙子
1997 年 6 月 22 日 1997 年 7 月 22 日 巨蟹
1997 年 7 月 23 日 1997 年 8 月 23 日 獅子
1997 年 8 月 24 日 1997 年 9 月 23 日 處女
1997 年 9 月 24 日 1997 年 10 月 23 日 天秤
1997 年 10 月 24 日 1997 年 11 月 22 日 天蠍
1997 年 11 月 23 日 1997 年 12 月 21 日 射手
1997 年 12 月 22 日 1998 年 1 月 20 日 摩羯
Aquarius 水瓶座 Leo 獅子座
Pisces 雙魚座 Virgo 處女座 Aries 牡羊座 Libra 天秤座 Taurus 金牛座 Scorpio
天蠍座 Gemini 雙子座 Sagittarius 人馬座 Cancer 巨蠍座 Capricorn 山羊座
輸入說明：
請輸入月及日期。
輸出說明：
依照星座標準，將月及日期轉成星座輸出。*/
int main()
{
    int i;
    char month_str[3];
    char day_str[3];
    scanf("%s %s",&month_str,&day_str);
    int month,day;
    month=atoi(month_str);
    day=atoi(day_str);
    switch(month)
    {
    case 1:
        if(day<21)
            printf("Capricorn\n");
        else
            printf("Aquarius\n");
        break;
    case 2:
        if(day<19)
            printf("Aquarius");
        else
            printf("Pisces\n");
        break;
    case 3:
        if(day<21)
            printf("Pisces\n");
        else
            printf("Aries\n");
        break;
    case 4:
        if(day<21)
            printf("Aries\n");
        else
            printf("Taurus\n");
        break;
    case 5:
        if(day<22)
            printf("Taurus\n");
        else
            printf("Gemini\n");
        break;
    case 6:
        if(day<22)
            printf("Gemini\n");
        else
            printf("Cancer\n");
        break;
    case 7:
        if(day<23)
            printf("Cancer\n");
        else
            printf("Leo\n");
        break;
    case 8:
        if(day<24)
            printf("Leo\n");
        else
            printf("Virgo\n");
        break;
    case 9:
        if(day<24)
            printf("Virgo\n");
        else
            printf("Libra\n");
        break;
    case 10:
        if(day<24)
            printf("Libra\n");
        else
            printf("Scorpio");
        break;
    case 11:
        if(day<23)
            printf("Scorpio\n");
        else
            printf("Sagittarius\n");
        break;
    case 12:
        if(day<22)
            printf("Sagittarius\n");
        else
            printf("Capricorn\n");
        break;
    default:
        break;
    }
    return 0;
}
