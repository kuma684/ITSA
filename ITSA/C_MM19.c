#include <stdio.h>
/*[C_MM19-��] �q�ܶO�p��
���D�y�z�G
�ռg�@�ӵ{���A���@�a�q�H���q���p�O�覡�G�C�Ӥ르800�����H�U(�t��800����)�A�C����0.9���F�����ɶ�����800������1500�����ɡA�Ҧ��q�ܶO�H9��p��F�Y�O��1500�����H�W(�t��1500����)�A
�h�q�ܶO�N�H79��p��A�é���ܨ�q�ܶO�ΡC
��J�����G
��J�q�ܤ�����(int)�C
��X�����G
��X�q�ܶO(double)�A����p���I�H�U�Ĥ@��C*/
int main()
{
    int minute;
    double cost;
    scanf("%d",&minute);
    if(minute<=800)
        cost=minute*0.9;
    else if(minute>800 && minute<1500)
        cost=0.9*(minute*0.9);
    else if(minute>=1500)
        cost=0.79*(minute*0.9);
    printf("%.1f\n",cost);
    return 0;
}
