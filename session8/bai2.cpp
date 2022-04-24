#include<stdio.h>
int timMax( int arr[], int n){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if (max < arr[i]){
			max=arr[i];
		}
	}
	return max;
}
bool sNto( int n){
	if(n<2){
		return false;
	}
	if (n <4){
		return true;
	}
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int sntMAX(int arr[], int n){
	int max = timMax(arr, n);
	int m = max+1;
	for(m; ; m++){
		if(sNto(m)){
			return m;
		}
	}
	
}


int main(){
	int arr[5]={-2,3,6,8,-1};
	int nguyento = sntMAX ( arr,5);
	printf("%d", nguyento);
}
