#include <stdio.h>
/*[C_MM15-��] �P�_�y�ЬO�_�b����Ϊ��d��
���D�y�z�G
���@����ΡA���B�e����100�A�B�_�l�y�Ь�(0,0)�C
�мg�@��{���i�H��J�u�I�v���y�СA�çP�_�u�I�v�O�_�b����Ϊ��d�򤺡C
�p�G�u�I�v����m��n�b��ɪ��ܤ]��O�b����νd��(�ҡGx=100�Ay=10)�C
��J�����G
�C�@�տ�J���⥿��Ʀr�A���O�N��X�PY�y�СC
��X�����G
��X���I�y�Цb����νd�򤺩Υ~�C*/
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<=100&&y<=100)
        printf("inside\n");
    else
        printf("outside\n");
    return 0;
}
