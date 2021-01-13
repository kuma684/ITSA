#include <stdio.h>

/*[C_AR20-易] 檢查數值是否有重複
問題描述 ：
給予一個由1到N的所有整數構成的數列，不依大小排列。
寫一函數檢查此數列是否每個數值只出現一次。
輸入說明 ：
輸入分為兩行，第一行是一個介於1與128間的正整數，代表第二行中數列中的數字個數。
第二行是由空白鍵分隔開的數字序列，不超過128個數。
每一個數值介於1到序列數字個數的整數。
輸出說明 ：
若是每個數字剛好只出現一次則輸出1，輸出0表示其中有重複的數字。*/

int main()
{
    int N,i=0,j=0;
    int result=0;
    int arr[128];
    scanf("%d",&N);
    for (i=0; i<N; i++)
        scanf("%d",&arr[i]);
    for (i=0; i<N; i++)
    {
        for (j=i+1; j<N; j++)
        {
            if(arr[i]==arr[j])
                result++;
        }
    }
    if(result==0)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
