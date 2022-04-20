#include<stdio.h>
#include <string.h>
#include<math.h>

int main(){
	char s[100];
//	char t;
	printf("Chuoi can nhap la : ");
	scanf("%s",s);
//	printf("nhap ky tu t :");
//	scanf("%c",&t);
	int dem=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==97||s[i]==101||s[i]==111||s[i]==117||s[i]==105	){
			dem++;
		}
//		else{
//			printf("Khong co nguyen am nao trong chuoi tren");
		}
//	}
	printf("\nSo lan xuat hien nguyen am trong chuoi la: %d",dem);
}
