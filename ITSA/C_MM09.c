#include <stdio.h>
/*[C_MM09-��] �p�� i ���誺��
���D�y�z�G
�м��g�@�ӵ{���A�p��2�� �񦸤誺�ȡC(���ܡG�Q�Φ첾�B�⤸)
��J�����G
��J�@�ӥ���ơAi���Ȥp��31�C
��X�����G
��X ���񦸤誺�ȡC
�Y i > 31 ��X "Value of more than 31"*/
int main()
{
    int i,value;
    long int result;
    result=1;
    scanf("%d",&value);
    if(value>31)
        printf("Value of more than 31\n");
    else
    {
        for(i=0;i<value;i++)
            result=result*2;
        printf("%ld\n",result);
    }
    return 0;
}
