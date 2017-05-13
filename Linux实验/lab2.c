#include<stdio.h>
void main(){
int a,b,c,d;          //定义参与运算的数据a和b，运算结果c，运算方式d
printf("please input the figure\n");     //提示输入运算数据
scanf("%d",&a);                            
scanf("%d",&b);                          //键盘输入a和b
printf("please choose the method\n");    //提示选择运算方式
printf("1.+   2.-  3.*  4. /\n");        //提示信息
scanf("%d",&d);                          //键盘输入d
switch(d){             //根据d的值选择计算方式
   case 1:{
         c=a+b;                     //加法运算
         break;
         }
   case 2:{
         c=a-b;
         break;                   //减法运算
         }
   case 3:{
         c=a*b;
         break;                  //乘法运算
         }
   case 4:{
         c=a/b;
         break;                 //除法运算
         }
}
printf("the result is:\n");
printf("%d\n",c);               //输出运算结果
}
