#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*[C_AR36-��] �P�y�d��
���D�y�z�G
�P�y�d�ߦ� " ���~ "," ���� "," �d�� "," ���� " ," ���l "," ���� "," ��l "," �B�k " ," �ѯ� "," ���� "," �g�� "," ���~ ";
�г]�p�{���A�ھڿ�J����Τ���A��X�������P�y��X�C
1997 �~ 1 �� 21 �� 1997 �~ 2 �� 18 �� ���~
1997 �~ 2 �� 19 �� 1997 �~ 3 �� 20 �� ����
1997 �~ 3 �� 21 �� 1997 �~ 4 �� 20 �� �d��
1997 �~ 4 �� 21 �� 1997 �~ 5 �� 21 �� ����
1997 �~ 5 �� 22 �� 1997 �~ 6 �� 21 �� ���l
1997 �~ 6 �� 22 �� 1997 �~ 7 �� 22 �� ����
1997 �~ 7 �� 23 �� 1997 �~ 8 �� 23 �� ��l
1997 �~ 8 �� 24 �� 1997 �~ 9 �� 23 �� �B�k
1997 �~ 9 �� 24 �� 1997 �~ 10 �� 23 �� �ѯ�
1997 �~ 10 �� 24 �� 1997 �~ 11 �� 22 �� ����
1997 �~ 11 �� 23 �� 1997 �~ 12 �� 21 �� �g��
1997 �~ 12 �� 22 �� 1998 �~ 1 �� 20 �� ���~
Aquarius ���~�y Leo ��l�y
Pisces �����y Virgo �B�k�y Aries �d�Ϯy Libra �ѯ��y Taurus �����y Scorpio
���Ȯy Gemini ���l�y Sagittarius �H���y Cancer ���Ȯy Capricorn �s�Ϯy
��J�����G
�п�J��Τ���C
��X�����G
�̷ӬP�y�зǡA�N��Τ���ন�P�y��X�C*/
int main()
{
    int i;
    char month_str[3];
    char day_str[3];
    scanf("%s %s",&month_str,&day_str);
    int month,day;
    month=atoi(month_str);
    day=atoi(day_str);
    switch(month)
    {
    case 1:
        if(day<21)
            printf("Capricorn\n");
        else
            printf("Aquarius\n");
        break;
    case 2:
        if(day<19)
            printf("Aquarius");
        else
            printf("Pisces\n");
        break;
    case 3:
        if(day<21)
            printf("Pisces\n");
        else
            printf("Aries\n");
        break;
    case 4:
        if(day<21)
            printf("Aries\n");
        else
            printf("Taurus\n");
        break;
    case 5:
        if(day<22)
            printf("Taurus\n");
        else
            printf("Gemini\n");
        break;
    case 6:
        if(day<22)
            printf("Gemini\n");
        else
            printf("Cancer\n");
        break;
    case 7:
        if(day<23)
            printf("Cancer\n");
        else
            printf("Leo\n");
        break;
    case 8:
        if(day<24)
            printf("Leo\n");
        else
            printf("Virgo\n");
        break;
    case 9:
        if(day<24)
            printf("Virgo\n");
        else
            printf("Libra\n");
        break;
    case 10:
        if(day<24)
            printf("Libra\n");
        else
            printf("Scorpio");
        break;
    case 11:
        if(day<23)
            printf("Scorpio\n");
        else
            printf("Sagittarius\n");
        break;
    case 12:
        if(day<22)
            printf("Sagittarius\n");
        else
            printf("Capricorn\n");
        break;
    default:
        break;
    }
    return 0;
}
