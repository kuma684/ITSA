#include <stdio.h>
/*[C_MM26-��] ��X 1*1�B2*2�B...�BN*N�����G
���D�y�z�G
�ռg�@�ӵ{���A��J���N�����N�A�ÿ�X 1*1�B2*2�B...�BN*N�����G�C
��J�����G
��J�@����ơC
��X�����G
��X�ۭ����n�C*/
int main()
{
    int input;
    int i;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
        printf("%d*%d=%d\n",i,i,i*i);
    return 0;
}
