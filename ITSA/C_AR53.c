#include <stdio.h>
#define SWAP(x,y) {int t; t = x; x = y; y = t;}
/*[C_AR53-易] 學生成績排序
問題描述：
請撰寫一個程式，使用者會輸入學生人數，以及每位學生的成績 (0-99) ，
程式會將成績的排序輸出。
輸入說明：
使用者輸入學生人數 n ，以及每位學生的成績 (0~99) 。
輸出說明：
根據使用者輸入的成績，顯示排序的結果 ( 由低到高 ) 。*/
int main()
{
    int n,i,j;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
                SWAP(arr[i],arr[j]);
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
