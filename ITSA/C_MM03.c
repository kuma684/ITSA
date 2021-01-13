#include <stdio.h>
/*[C_MM03-易] 兩數總和
問題描述：
請寫一個程式，讀入兩個數字，並求出它們的和。
輸入說明 ：
輸入有多組測資，每一列為一組測資，每組輸入有兩個整數(int)。
輸出說明 ：
輸出該兩整數的和(int)，每一列為一組輸出結果。*/
int main()
{
    int a,b;
    int result;
    while(1)
    {
        if(scanf("%d %d",&a,&b)==EOF)
            break;
        result=a+b;
        printf("%d\n",result);
    }
    return 0;
}
