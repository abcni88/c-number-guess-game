//猜數字小遊戲 
#include <stdio.h>
int num_game(int num[],int boom){
	//32
	int input;
	int high=100,low=1;
	int count=0;
	printf("1~100-->");
	while(input!=boom){
		scanf("%d",&input);
		if(input<low||input>high){
			printf("請輸入提示上的數字");
			count+=1;
			printf("達到三次將強制退出，目前%d次",count);
			if(count==3){
				return count;
			}
		}else if(input>boom){
			high=input-1;
			printf("%d~%d\n",low,high);
		}else if(input<boom){
			low=input+1;
			printf("%d~%d\n",low,high);
		}
	}
	return 0;
}
int main(){
	int list[100];
	int i;
	int boom=32;
	int temp;
	for(i=0;i<100;i++){
		list[i]=i+1;
	}
	temp=num_game(list,boom);
	if(temp==0){
		printf("boom");
	}
	else{
		printf("您未按照遊戲規則%d次,強制退出",temp);
	}
	return 0;
} 
