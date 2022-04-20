#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	char arrs[n][50];
	
	printf("Nhap mang chuoi:\n");
	for(int i=0;i<n;i++){
		scanf("%s",arrs[i]);
	}
	char s[20];
	printf("Nhap chuoi s : ");
	scanf("%s",s);
	int a=s[20];
	for(int i=0;i<n-1;i++){
		if(strcmp(arrs[i],s) == 0){
			printf("Chuoi vua nhap bi trung \n");
			break;
		}else{
			printf("Chuoi vua nhap khong bi trung \n");
			break;
		}
	}
}
	
