#include <stdio.h>
/*[C_MM31-��] �p��1~N����Q2��3�㰣�A������Q12�㰣������`�M
���D�y�z�G
���g�@�ӵ{���A��J�@����� N �A ��X 1 �� N ����Ƹ̡A�i�H�Q 2 �P 3 �㰣�A
������Q 12 �㰣����ơA�ñN�o�ǼƦr���[�`�C
��J�����G
��J�@�ӥ���ơC
��X�����G
��X�`�M���ȡC*/
int main()
{
    int input,result=0;
    int i;
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        if(i%2==0 && i%3==0 && i%12!=0)
            result+=i;
    }
    printf("%d\n",result);
    return 0;
}
