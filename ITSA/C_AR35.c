#include<stdio.h>
/*[C_AR35-易] 生肖問題
問題描述：
12 生肖有 ' 鼠 ',' 牛 ',' 虎 ',' 兔 ',' 龍 ',' 蛇 ', ' 馬 ',' 羊 ',' 猴 ',' 雞 ',' 狗 ',' 豬 ' ，
每年輪一生肖， 2010 年為虎年，請設計程式，根據輸入之西元年，轉成生肖輸出。
輸入說明：
請輸入西元年，並計算出生肖。
輸出說明：
依照生肖標準，將西元年轉成生肖輸出。
鼠(rat)、牛(ox)、虎(tiger)、兔(rabbit)、龍(dragon)、蛇(snake)、馬(horse)、
羊(sheep)、猴(monkey)、雞(rooster)、狗(dog)、豬(pig)*/
int main()
{
    int year,result,i;
    scanf("%d",&year);
    char *arr[]={"rat","ox","tiger","rabbit","dragon","snake","horse",
    "sheep","monkey","rooster","dog","pig"};
    //2010 mod 12 = 6
    //tiger is arr[2][]
    result=year%12-4;
    printf("%s\n",*(arr+result));
    return 0;
}
