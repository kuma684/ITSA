#include <stdio.h>
/*[C_MM24-��] �p���~��
���D�y�z�G
�ռg�@�ӵ{���A���ϥΪ̥i��J��몺�u�ɼƤΨC�몺�T�w���~�A
�ñN�������o���u����ܦb�ù��W�C�u��p���k�p�U�G
(1) 60 �p�� ( �t ) �H�U���~�������A�H�T�w���~�p��C
(2) 61 �� 120 �p�ɤ������~�������A�H�T�w���~�� 1.33 ���p��C
(3) �� 121 �p�ɥH�W���~�������A�H�T�w���~�� 1.66 ���p��C
��J�����G
�C�@�������J��Ӿ�ơA�̧Ǥ��O���u�ɡB���~�C
��X�����G
��X�~��(double)�A���ܤp���I�H�U�Ĥ@��C*/
int main()
{
    int hour,money;
    double result;
    scanf("%d %d",&hour,&money);
    if(hour<=60)
        result=hour*money;
    else if(hour>60 && hour<=120)
        result=60*money+(hour-60)*money*1.33;
    else
        result=60*money+60*money*1.33+(hour-120)*money*1.66;
    printf("%.1f\n",result);
    return 0;
}
