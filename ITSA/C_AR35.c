#include<stdio.h>
/*[C_AR35-��] �ͨv���D
���D�y�z�G
12 �ͨv�� ' �� ',' �� ',' �� ',' �� ',' �s ',' �D ', ' �� ',' �� ',' �U ',' �� ',' �� ',' �� ' �A
�C�~���@�ͨv�A 2010 �~����~�A�г]�p�{���A�ھڿ�J���褸�~�A�ন�ͨv��X�C
��J�����G
�п�J�褸�~�A�íp��X�ͨv�C
��X�����G
�̷ӥͨv�зǡA�N�褸�~�ন�ͨv��X�C
��(rat)�B��(ox)�B��(tiger)�B��(rabbit)�B�s(dragon)�B�D(snake)�B��(horse)�B
��(sheep)�B�U(monkey)�B��(rooster)�B��(dog)�B��(pig)*/
int main()
{
    int year,result,i;
    scanf("%d",&year);
    char *arr[]={"rat","ox","tiger","rabbit","dragon","snake","horse",
    "sheep","monkey","rooster","dog","pig"};
    //2010 mod 12 = 6
    //tiger is arr[2][]
    result=year%12-4;
    printf("%s\n",*(arr+result));
    return 0;
}
