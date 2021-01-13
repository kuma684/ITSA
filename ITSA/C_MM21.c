#include <stdio.h>
/*[C_MM21-易] 算階乘
題目描述:
算階乘
輸入說明:
輸入一個整數 n，0 < n < 20
輸出說明:
輸出答案*/
int main()
{
    int input,i;
    long int result=1;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
        result*=i;
    printf("%ld\n",result);
    return 0;
}
