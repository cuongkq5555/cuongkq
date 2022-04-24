#include <stdio.h>

void menu(){
	printf("TINH TOAN\n");
	printf("================\n");
	printf("1. Nhap so\n");
	printf("2. Tinh Tong\n");
	printf("3. Tinh Hieu\n");
	printf("4. Tinh tich\n");
	printf("5. Tinh Thuong\n");
	printf("6. Thoat\n");
	printf("================\n");
	printf("Vui long chon chuc nang:");
}
int tinhTong(int a,int b){
	return a+b;
}
int tinhHieu(int a,int b){
	return a-b;
}
int tinhTich(int a,int b){
	return a*b;
}
double tinhThuong(int a,int b){
	return b!=0?(double)a/b:NULL;
}

int main(){
	int m,a,b;
	bool f = false;
	do{
		menu();
		scanf("%d", &m);
		switch(m){
			case 1: {
				printf("Nhap so thu nhat : ");
				scanf("%d", &a);
				printf("Nhap so thu hai : ");
				scanf("%d", &b);				
				break;
			}
			case 2: {
				if(!f){
				printf("Vui long nhap gia tri 2 so truoc\n");
				break;
				}
				int tong=tinhTong(a,b);
				printf("Tong hai so = %d \n", tong);
				break;
			}
			case 3:{
				if(!f){
				printf("Vui long nhap gia tri 2 so truoc\n");
				break;
				}
				int hieu=tinhHieu(a,b);
				printf("Hieu hai so = %d \n", hieu)	;			
				break;
			}
			case 4 : {
				if(!f){
				printf("Vui long nhap gia tri 2 so truoc\n");
				break;
				}				
				int tich=tinhTich(a,b);
				printf("Tich hai so = %d \n", tich);
				break;
			}
			case 5 : {
				if(!f){
				printf("Vui long nhap gia tri 2 so truoc\n");
				break;
				}
				double thuong=tinhThuong(a,b);
				if	(thuong==NULL){
					printf("Khong the chia cho 0\n");
				}else{
				printf("Thuong hai so = %d \n", thuong)	;	
				}		
				break;
			}
		}
		
	}while(m!=6);
}
