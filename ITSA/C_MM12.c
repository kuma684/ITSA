#include <stdio.h>
/*[C_MM12-��] �۹J�ɶ��p��
���D�y�z�G
���]�A�B�檺�t�׬��C��1���ءA�ӧA�B�ͤp�ئb�A�e��A�B�檺�t�׫h���C��30�^�T�A
�M�ӧA�ݭn�X�����~��W�V�p�ةO?(1�^�T=2.54����)�C
��J�����G
��J��H�Z�����ؼ�(int)�C
��X�����G
��X�ĴX��W�V�A��ƨ����(int)�A�L����i�J�k�C*/
int main()
{
    int distance;
    float second;
    scanf("%d",&distance);
    //�p�بB�檺�t�׬��C��(30*2.54)/100=0.762����
    second=distance/(1-0.762);
    //�P�_���
    if(second-(int)second==0)
        printf("%d\n",(int)second);
    //�D��� �L����i��
    else
        printf("%d\n",(int)second+1);
    return 0;
}
