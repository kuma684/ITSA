#include <stdio.h>
/*[C_MM05-��] �p�⥿��έ��n
���D�y�z�G
�м��g�@�ӵ{���A��i�p�⥿��έ��n�C
��J���� �G
��J�@�Ӥj��s���Ʀr(double)������Τ�����C
��X���� �G
��X����έ��n(double)�A�|�ˤ��J����p���I�H�U�Ĥ@��C*/
int main()
{
    double len;
    double result;
    scanf("%lf",&len);
    //�|�ˤ��J:(int)(a+0.5)
    result=(int)((len*len)*10+0.5)/10.0;
    printf("%.1f\n",result);
    return 0;
}
