/* 叫絪糶C祘Α赣祘Α珹 calculateNum 捌祘Α
赣捌祘Α钡俱计皚把计皚じキА
籔皚程计籔程计
 皚い计ぶ6计
 璸衡キА叫ぶ计翴ㄢ
 Please write a C program that includes a function named
calculateNum. This function should take an integer array as a
parameter and return the average, maximum, and minimum values of
the array elements.
 The array contains at least six numbers
 Please calculate the average, and round it to at least two decimal places.*/
#include<stdio.h>
void calculateNum(int arr[],int size,int *max,int *min,float *ave){
	//癘眔﹚竡玻ネゼ﹚竡ぇ岿粇 
	int sum=0;
	*max=arr[0];
	*min=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>*max){
			*max=arr[i];
		}
		if(arr[i]<*min){
			*min=arr[i];
		}
		//sum=sum+arr[i]
		sum+=arr[i];
	}
	//眏锣传篈float 
	*ave=(float)sum/size;
}
int main(){
	int arr[]={25,38,19,86,72,55};
	//璸衡size
	int size=sizeof(arr)/sizeof(arr[0]);
	int max;
	int min;
	float ave;
	//耞琌才肈ヘ兵ン ぶ璶Τせじ 
	if(size<6){
		printf("error");
	}else{
	//㊣calculateNum 猔種:***皚夹*** 
		calculateNum(arr,size,&max,&min,&ave);
		printf("程计:%d\n程计:%d\nキА:%.2f",max,min,ave); 
}
	return 0;
}
