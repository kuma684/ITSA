#include <stdio.h>
/*[C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
問題描述：
撰寫一個程式，輸入一正整數 N ， 找出 1 ～ N 的整數裡，可以被 2 與 3 整除，
但不能被 12 整除的整數，並將這些數字做加總。
輸入說明：
輸入一個正整數。
輸出說明：
輸出總和之值。*/
int main()
{
    int input,result=0;
    int i;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        if(i%2==0 && i%3==0 && i%12!=0)
            result+=i;
    }
    printf("%d\n",result);
    return 0;
}
