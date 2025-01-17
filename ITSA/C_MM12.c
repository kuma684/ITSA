#include <stdio.h>
/*[C_MM12-易] 相遇時間計算
問題描述：
假設你步行的速度為每秒1公尺，而你朋友小華在你前方，步行的速度則為每秒30英吋，
然而你需要幾秒鐘才能超越小華呢?(1英吋=2.54公分)。
輸入說明：
輸入兩人距離公尺數(int)。
輸出說明：
輸出第幾秒超越，秒數取整數(int)，無條件進入法。*/
int main()
{
    int distance;
    float second;
    scanf("%d",&distance);
    //小華步行的速度為每秒(30*2.54)/100=0.762公尺
    second=distance/(1-0.762);
    //判斷整數
    if(second-(int)second==0)
        printf("%d\n",(int)second);
    //非整數 無條件進位
    else
        printf("%d\n",(int)second+1);
    return 0;
}
