#include<stdio.h>
void inPut(int arr[],int n){
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void outPut(int arr[],int n){
	printf("\nXuat mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
int reverseArray (int arr[], int n){
	for(int i=0;i<n/2;i++){
      	int temp=arr[i];
      	arr[i]=arr[n-i-1];
      	arr[n-i-1]=temp;
	}
}


int main () {
	int arr[5];
	inPut (arr,5);
	reverseArray(arr,5);
	outPut(arr,5);
  
}
