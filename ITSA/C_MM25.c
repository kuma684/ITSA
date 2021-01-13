#include <stdio.h>
/*[C_MM25-易] 計算正整數被3整除之數值之總和
問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。
輸入說明：
輸入一正整數。
輸出說明：
輸出總和。*/
int main()
{
    int input,result=0;
    int i;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        if((i%3)==0)
            result+=i;
    }
    printf("%d\n",result);
    return 0;
}
