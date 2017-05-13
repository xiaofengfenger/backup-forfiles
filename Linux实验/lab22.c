#include<stdio.h>
int main(){
	int n,i,j,k;    //定义数值变量n，循环控制变量i等
	printf("请输入一个数n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j=1;
		if(i%7){       //不能被7整除
			k=i;   
			while(k!=0){         //判断n中是否有7
				if(k%10!=7)      //最低位是否为7
				k=k/10;
				else{
				j=0;
				k=0;          //n中有7，j=0
				}
			}
		if(j)
		printf(" %d \t",i);      // j=1时 证明n中是没有7的  可以输出此数据
		}
	}
        printf("\n");
	return(0);
}
