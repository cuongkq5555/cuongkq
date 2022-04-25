#include<stdio.h>
#include <string.h>
void menu(){
	printf("==========MENU============\n");
	printf("1. Nhap so luong sinh vien cua lop.\n");
	printf("2. Nhap danh sach ten sinh vien.\n");
	printf("3. Xap xep ten sinh vien theo thu tu alphabe.\n");
	printf("4. In ra danh sach sinh vien.\n");
	printf("5. Thoat chuong trinh.\n");
	printf("===========================\n");
	printf("Vui long chon chuc nang:");
}
void nhapMang( char arr[], int n){
	printf("\n Danh sach ten sinh vien : \n");
	for(int i=0;i<n;i++){
		scanf("%c", &arr[i]);
		printf("%c", i);
	}
}
void xuatMang( char arr[], int n){
	printf("Danh sach sinh vien : \n");
	for(int i=0;i<n;i++){
		printf("%c", arr[i]);
	}
}
//int xapXep( char arr[], int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=0; j < n-i-1; j++){
//				if(strcmp(arrs[j],arrs[j+1]) > 0){
//				char tmp;
//				strcpy(tmp,arr[j]);
//				strcpy(arr[j],arr[j+1]);
//				strcpy(arr[j+1],tmp);
//			}
//		}
//	}
//	printf("Danh sach sinh vien sau khi sap xep:\n");
//	for(int i=0;i<n;i++){
//		printf("%s\n",arr[i]);
//}

int main(){
	int m,n;
	char arr[n];
	bool f = false;
	do{
		menu();
		scanf("%d", &m);
		switch(m){
		case 1:{
			printf("Nhap so luong sinh vien : ");
			scanf("%d", &n);
			f= true;
			break;
		}
		case 2:{
		
			nhapMang(arr,n);
			break;
		}
		case 4 :{
		
			xuatMang(arr,n);
			break;
		}
	}	
	}while(m!=5);

}
