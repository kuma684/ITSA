#include <stdio.h>
/*[C_MM27-易] 計算兩整數間所有整數的總和
問題描述：
試寫一個程式，輸入兩個整數，並計算兩整數間所有整數的總和。
輸入說明：
輸入兩個整數。
輸出說明：
輸出兩整數之間所有整數的總和。*/
int main()
{
    int a,b;
    int i,result=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        result+=i;
    printf("%d\n",result);
    return 0;
}
