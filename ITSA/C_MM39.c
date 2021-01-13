#include <stdio.h>
/*[C_MM39-��] �P�_�O��ؤT����
���D�y�z�G
��T���������c���T���ήɡA�A�P�_�ӤT���ά��w���B�U���άO�����T���ΡA��P�O��k�p�U�G
1. �����T���ΡG�䤤������䪺����M����ĤT�䪺����C
2. �w���T���ΡG�䤤������䪺����M�p��ĤT�䪺����C
3. �U���T���ΡG�����䪺����M�j��ĤT�䪺����C
��J�����G
��J�T�Ӿ�ơC
��X�����G
��ܪ����T����(Right Triangle)�B�w���T����(Obtuse Triangle)�B
�U���T����(Acute Triangle)�εL�k�c���T����(Not Triangle)�C*/
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
