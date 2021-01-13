#include <stdio.h>
/*[C_AR54-易] 小寫字元計算
問題描述：
請撰寫一個程式，可以根據使用者輸入的字元，統計 a-z 的出現次數。
輸入說明：
使用者輸入一個整數表示共有幾個字元，接著使用者會輸入該整數個小寫字元 (a-z)  。
輸出說明：
根據使用者輸入的字元，根據字元的排序 (a-z) 顯示各字元的出現次數 (0 次不顯示 ) 。*/
int main()
{
    int n=0,i=0;
    char arr[1000]={};
    int count[26]={};
    int num;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %c",&arr[i]);
        // a=97 ~ z=122 ASCII
        count[arr[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
            printf("%c %d\n",i+97,count[i]);
    }
    return 0;
}
