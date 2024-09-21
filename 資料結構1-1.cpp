/*�E �нs�g�@��C�{���A�ӵ{���]�A�@�ӦW�� calculateNum ���Ƶ{���A
�ӰƵ{�������@�Ӿ�ư}�C�@���ѼơA�ê�^�}�C������������
�P�}�C���̤j�ƻP�̤p�ơC
�E �}�C�����Ʀr�]�t�ܤ�6�ӼƦr�C
�E �p��X�����ȡA�Цܤ֨�p���I����C
�E Please write a C program that includes a function named
calculateNum. This function should take an integer array as a
parameter and return the average, maximum, and minimum values of
the array elements.
�E The array contains at least six numbers
�E Please calculate the average, and round it to at least two decimal places.*/
#include<stdio.h>
void calculateNum(int arr[],int size,int *max,int *min,float *ave){
	//�O�o�w�q��ȥH�K���ͥ��w�q�����~ 
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
	//�j���ഫ���Afloat 
	*ave=(float)sum/size;
}
int main(){
	int arr[]={25,38,19,86,72,55};
	//�p��size
	int size=sizeof(arr)/sizeof(arr[0]);
	int max;
	int min;
	float ave;
	//�P�_�O�_�ŦX�D�ر��� �ܤ֭n�����Ӥ��� 
	if(size<6){
		printf("error");
	}else{
	//�I�scalculateNum �`�N:***�}�C�Y����*** 
		calculateNum(arr,size,&max,&min,&ave);
		printf("�̤j��:%d\n�̤p��:%d\n������:%.2f",max,min,ave); 
}
	return 0;
}
