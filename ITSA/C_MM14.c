#include <stdio.h>
/*[C_MM14-��] �p��ɶ����զX
���D�y�z�G
�g�@�{���n�D�ϥΪ̿�J�N���ƪ���ƭȡA
�åB�g�p��H�ѼơB�p�ɼơB�����ơB�P��ƪ��զX����ܹﵥ���ɶ��ȡC
�ШϥβŸ��`�ƪ�ܤ@�Ѥ����p�ɼơF�@�p�ɤ��������ơA�H�Τ@����������ơC
��J�����G
��J��ơC
��X�����G
��X�ѼơA�ɼơA���ơA��ơC*/
int main()
{
    int input;
    int day,hour,min,sec;
    scanf("%d",&input);
    //day=60*60*24=86400
    day=input/86400;
    //hour=60*60=3600
    hour=(input-day*86400)/3600;
    //min=60
    min=(input-day*86400-hour*3600)/60;
    sec=input-day*86400-hour*3600-min*60;
    printf("%d days\n",day);
    printf("%d hours\n",hour);
    printf("%d minutes\n",min);
    printf("%d seconds\n",sec);
    return 0;
}
