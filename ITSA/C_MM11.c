#include <stdio.h>
/*[C_MM11-��] �ʲ��p��
���D�y�z�G
���]���������۰ʰⲼ���u�౵��10���B5���B�H��1�����w���A�м��g�@�ӵ{���A
��X���ȩ��ʶR����N�������ɡA�һݧ�J�U�ع��ȵw���̤֪��ƶq�H
��J�����G
��J�����C
��X�����G
��X�U���ȵw���̤֪��ƶq�C*/
int main()
{
    int money;
    scanf("%d",&money);
    int num10,num5,num1;
    num10=money/10;
    num5=(money-num10*10)/5;
    num1=money-num10*10-num5*5;
    printf("NT10=%d\n",num10);
    printf("NT5=%d\n",num5);
    printf("NT1=%d\n",num1);
    return 0;
}
