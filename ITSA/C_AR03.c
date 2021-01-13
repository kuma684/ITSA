#include <stdio.h>

/*[C_AR03-易] 計算陣列中所有元素的立方和
問題描述：
試撰寫一個程式，宣告一個 1 維的整數陣列，
並計算元素中所有元素的立方和。
輸入說明：
任意輸入六個整數。
輸出說明：
輸出所有元素的立方和。*/

int main()
{
    int arr[6];
    int i,result=0;
    for (i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<6;i++)
    {
        result = result + (arr[i]*arr[i]*arr[i]);
    }
    printf("%d",result);
    printf("\n");
}
