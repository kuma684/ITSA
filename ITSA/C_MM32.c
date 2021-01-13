#include <stdio.h>
/*[C_MM32-] Armstrong计
拜肈磞瓃
┮孔 " Armstrong计 " 琌计俱计ㄤ计ぇミよ㎝单赣计セō
ㄒ 153 琌  Armstrong计 153 =1 3 + 53 + 33 
刚级糶祘Α耞琌  Armstrong计
块弧
块计タ俱计
块弧
琌 ﹊吹Ё计块 Yes ぃ琌 ﹊吹Ё计块 No 癟*/
int main()
{
    int input;
    int hundred,ten,digit;
    scanf("%d",&input);
    hundred=input/100;
    ten=(input-hundred*100)/10;
    digit=input%10;
    if(input==(hundred*hundred*hundred+ten*ten*ten+digit*digit*digit))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
