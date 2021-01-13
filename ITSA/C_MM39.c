#include <stdio.h>
/*[C_MM39-易] 判斷是何種三角形
問題描述：
當三個邊長能夠構成三角形時，再判斷該三角形為鈍角、銳角或是直角三角形，其判別方法如下：
1. 直角三角形：其中有兩個邊的平方和等於第三邊的平方。
2. 鈍角三角形：其中有兩個邊的平方和小於第三邊的平方。
3. 銳角三角形：任兩邊的平方和大於第三邊的平方。
輸入說明：
輸入三個整數。
輸出說明：
顯示直角三角形(Right Triangle)、鈍角三角形(Obtuse Triangle)、
銳角三角形(Acute Triangle)或無法構成三角形(Not Triangle)。*/
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<=c || a+c<=b || b+c<=a)
        printf("Not Triangle\n");
    else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        printf("Right Triangle\n");
    else if(a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a)
        printf("Obtuse Triangle\n");
    else if(a*a+b*b>c*c && a*a+c*c>b*b && b*b+c*c>a*a)
        printf("Acute Triangle\n");
    return 0;
}
