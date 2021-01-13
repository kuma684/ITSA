#include <stdio.h>

/*[C_AR01-易] 一維陣列反轉 I
題目描述:
一維陣列反轉
輸入說明:
輸入一個一維陣列，元素最多不超過100個
輸出說明:
輸出反轉後的陣列
最後需有換行。*/

int main()
{
    int arr[100];
    int count=0;
    while(scanf("%d",&arr[count])!=EOF)
        count++;
    for (int i=count-1; i>0; i--)
        printf("%d ",arr[i]);
    printf("%d",arr[0]);
    printf("\n");
    return 0;
}
