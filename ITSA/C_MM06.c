#include <stdio.h>
/*[C_MM06-��] �^���ऽ��
���D�y�z�G
�ռ��g�@�{���A�i����L��J�^���A�{������X�������A���ഫ�����p�U�G
1 �^��= 1.6 ����
��J�����G
��J���ഫ���^����(int)�C
��X�����G
��X����(double)�A�|�ˤ��J����p���I�H�U�Ĥ@��C*/
int main()
{
    int mile;
    double km;
    scanf("%d",&mile);
    km=(int)((mile*1.6*10)+0.5)/10.0;
    printf("%.1f\n",km);
    return 0;
}
