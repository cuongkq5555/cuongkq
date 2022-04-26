// Tinh tong các chu so cua so nguyên n

#include<stdio.h>


int tinhTongn(int n){
	int t;
	int S=0;
    for (;n>0;) {
	  t=n%10;
	  S=S+t;
	  n=n/10;
 	 
       }
	return S;
	
}


int main(){
	int n;
	printf ("Nhap vao so n:");
	scanf ("%d",&n);
	int S = tinhTongn(n);
	printf ("Tong cac chu so n la:%d",S);
	
}




#include<stdio.h>


int chuVitamgiac(int a, int b, int c){
   	 float cv = a+b+c;
	 return cv;
}

int dienTichtamgiac(int a, int b, int c){

	 float cv = a+b+c;
	 float p=cv/2;
	 float s= p*(p-a)*(p-b)*(p-c);
	 
	return s;
}


int main (){
	int a,b,c;
	printf("Nhap a=");
	scanf ("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
		
		if ((a+b)>c && (a+c)>b && (c+b)>a){
		printf("day la tam giac \n");
		float cv=chuVitamgiac(a,b,c);
	    printf("chu vi tam giac bang: %f \n",cv);
	    float s=dienTichtamgiac(a,b,c);
	    printf ("Dien tich tam giac bang: %f \n", s);
		}else{
		printf ("Day khong phai la tam giac");
     	}
}








#include <stdio.h>
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

int bCNN2so(int a, int b){
   if (a>b){
   	for (int i=a;i>0;i++){
   		if (i%a==0 && i%b==0){
   			return i;
		   }
 	 		
	   }
   	
   }else{
   	for (int i=b;i>0;i++){
   		if (i%a==0 && i%b==0){
   			return i;
		   }
   		 		
	   }
   	
   }
	
}

int main (){
    int a=3;
    int b=6;
	int UCLN = uCLN2so(a,b);
	printf ("\nUCLN cua 2 so la:%d",UCLN);
	int BCNN = bCNN2so(a,b);
	printf ("\nBCNN cua 2 so la:%d",BCNN);
	
}
