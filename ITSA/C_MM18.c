#include <stdio.h>
/*[C_MM18-��] �Q�i����G�i��
���D�y�z�G
���g�@�ӵ{���A�ϥΪ̿�J�@�Ӿ�ơA�L�X8�줸���G�i���ܡC
��J�����G
��J�@�Ӿ�ơA����-128��127�����C
��X�����G
�H8�줸���G�i����ܡC*/
int main()
{
    int input,count=0,i=0,negative;
    int arr[100];
    scanf("%d",&input);
    //�Q�i����G�i���k�O���k��2�A����ӵ���0����
    //�˧Ǩ��l��
    //�t����G�i��ݭn���N�t�ƨ��ϱo�쥿���Q�i��ƭ�
    if(input<0)
    {
        negative=input*(-1);
        while(negative!=0)
        {
            arr[count]=negative%2;
            count++;
            negative=negative/2;
        }
    }
    else if(input>=0)
    {
        while(input!=0)
        {
            arr[count]=input%2;
            count++;
            input=input/2;
        }
    }
    //�줸����8���0
    if(count<8)
    {
        for(i=7;i>=count;i--)
            arr[i]=0;
    }
    //�t�ƱN�G�i�����
    if(input<0)
    {
        for(i=0;i<8;i++)
        {
            if(arr[i]==0)
                arr[i]=1;
            else
                arr[i]=0;
        }
        //���ϫ�[1
        for(i=0;i<8;i++)
        {
            arr[i]+=1;
            if(arr[i]%2==0)
                arr[i]=0;
            else
                break;
        }
        for(i=7;i>0;i--)
            printf("%d",arr[i]);
        printf("%d\n",arr[0]);
    }
    else
    {
        for(i=7;i>0;i--)
            printf("%d",arr[i]);
    printf("%d\n",arr[0]);
    }
    return 0;
}
