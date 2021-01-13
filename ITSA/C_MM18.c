#include <stdio.h>
/*[C_MM18-易] 十進制轉二進制
問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。
輸入說明：
輸入一個整數，介於-128～127之間。
輸出說明：
以8位元的二進制顯示。*/
int main()
{
    int input,count=0,i=0,negative;
    int arr[100];
    scanf("%d",&input);
    //十進制轉二進制的方法是遞歸除2，直到商等於0停止
    //倒序取餘數
    //負數轉二進制需要先將負數取反得到正的十進制數值
    if(input<0)
    {
        negative=input*(-1);
        while(negative!=0)
        {
            arr[count]=negative%2;
            count++;
            negative=negative/2;
        }
    }
    else if(input>=0)
    {
        while(input!=0)
        {
            arr[count]=input%2;
            count++;
            input=input/2;
        }
    }
    //位元不足8位補0
    if(count<8)
    {
        for(i=7;i>=count;i--)
            arr[i]=0;
    }
    //負數將二進制取反
    if(input<0)
    {
        for(i=0;i<8;i++)
        {
            if(arr[i]==0)
                arr[i]=1;
            else
                arr[i]=0;
        }
        //取反後加1
        for(i=0;i<8;i++)
        {
            arr[i]+=1;
            if(arr[i]%2==0)
                arr[i]=0;
            else
                break;
        }
        for(i=7;i>0;i--)
            printf("%d",arr[i]);
        printf("%d\n",arr[0]);
    }
    else
    {
        for(i=7;i>0;i--)
            printf("%d",arr[i]);
    printf("%d\n",arr[0]);
    }
    return 0;
}
