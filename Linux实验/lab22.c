#include<stdio.h>
int main(){
	int n,i,j,k;    //������ֵ����n��ѭ�����Ʊ���i��
	printf("������һ����n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j=1;
		if(i%7){       //���ܱ�7����
			k=i;   
			while(k!=0){         //�ж�n���Ƿ���7
				if(k%10!=7)      //���λ�Ƿ�Ϊ7
				k=k/10;
				else{
				j=0;
				k=0;          //n����7��j=0
				}
			}
		if(j)
		printf(" %d \t",i);      // j=1ʱ ֤��n����û��7��  �������������
		}
	}
        printf("\n");
	return(0);
}
