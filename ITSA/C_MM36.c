#include <stdio.h>
/*[C_MM36-��] �u�`�P�w
���D�y�z�G
�ռ��g�@�{���A�i��J����A�M��P�_����ݪ��u�`
�] 3~5 �묰�K�u�A6~8 �묰�L�u�A 9~11 �묰��u�A 12~2 �묰�V�u�^�C
��J�����G
��J����C
��X�����G
��X�Ӥ�����u�`�A 3~5 �묰�K�u(Spring)�A 6~8 �묰�L�u(Summer)�A
9~11 �묰��u(Autumn)�A 12~2 �묰�V�u(Winter)�C*/
int main()
{
    int month;
    scanf("%d",&month);
    if(month>=3 && month<=5)
        printf("Spring\n");
    else if(month>=6 && month<=8)
        printf("Summer\n");
    else if(month>=9 && month<=11)
        printf("Autumn\n");
    else
        printf("Winter\n");
    return 0;
}
