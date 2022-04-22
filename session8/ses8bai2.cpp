#include<stdio.h>
void nhapMang(int arr[],int n){
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int arr[],int n){
	printf("\nXuat mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
int timMax(int arr[],int n){
	int m = arr[0];
	for(int i=0;i<n;i++){
		if(m<arr[i]){
			m = arr[i];
		}
	}
	return m;
}
bool ktSNT(int n){
	if(n<2) return false;
	if(n==2||n==3) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main (){
	int arr[5];
	nhapMang(arr,5);
	xuatMang(arr,5);
	int c = timMax(arr,5);
	

