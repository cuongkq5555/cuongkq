#include <stdio.h>

void nhapMang(int arr[], int n){
	printf ("Nhap mang: \n");
	for (int i=0;i<n;i++){
	scanf ("%d",&arr[i]);
	}
	
}

void xuatMang(int arr[], int n){
	printf ("\nXuat mang: \n");
	for (int i=0;i<n;i++){
	printf ("%5d",arr[i])	;
	}
	
}


int uCLN2so(int a, int b){
   if (a>b){
   	for (int i=b;i>0;i--){
   		if (a%i==0 && b%i==0){
   			return i;
		   }
 	 		
	   }
   	
   }else{
   	for (int i=a;i>0;i--){
   		if (a%i==0 && b%i==0){
   			return i;
		   }
   		 		
	   }
   	
   }
	
}

int uCLN_mang(int arr[], int n){
	int u= arr[0];
	for (int i=1;i<n;i++){
	u= 	uCLN2so(u,arr[i]);
	}
	return u;
	
}

int main (){
	int arr[5];
	nhapMang(arr,5);
	xuatMang(arr,5);
//	int a=6;
//	int b=9;
//	int UC = uCLN2so(a,b);
//	printf ("\n UCLN la:%d",UC);
	int UCLN = uCLN_mang(arr,5);
	printf ("\n UCLN cua mang la:%d",UCLN);
	
}
