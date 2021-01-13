#include <stdio.h>
/*[C_MM05-易] 計算正方形面積
問題描述：
請撰寫一個程式，其可計算正方形面積。
輸入說明 ：
輸入一個大於零的數字(double)為正方形之邊長。
輸出說明 ：
輸出正方形面積(double)，四捨五入取到小數點以下第一位。*/
int main()
{
    double len;
    double result;
    scanf("%lf",&len);
    //四捨五入:(int)(a+0.5)
    result=(int)((len*len)*10+0.5)/10.0;
    printf("%.1f\n",result);
    return 0;
}
