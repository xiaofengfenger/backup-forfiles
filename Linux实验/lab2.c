#include<stdio.h>
void main(){
int a,b,c,d;          //����������������a��b��������c�����㷽ʽd
printf("please input the figure\n");     //��ʾ������������
scanf("%d",&a);                            
scanf("%d",&b);                          //��������a��b
printf("please choose the method\n");    //��ʾѡ�����㷽ʽ
printf("1.+   2.-  3.*  4. /\n");        //��ʾ��Ϣ
scanf("%d",&d);                          //��������d
switch(d){             //����d��ֵѡ����㷽ʽ
   case 1:{
         c=a+b;                     //�ӷ�����
         break;
         }
   case 2:{
         c=a-b;
         break;                   //��������
         }
   case 3:{
         c=a*b;
         break;                  //�˷�����
         }
   case 4:{
         c=a/b;
         break;                 //��������
         }
}
printf("the result is:\n");
printf("%d\n",c);               //���������
}
