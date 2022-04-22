# include <stdio.h>

float luyThua(float x, int y){
	float S=1;
	for (int i=1;i<=y;i++){
		S=S*x;
	}
	return S;
	
}

int main(){
	float x;
	int y;
	printf ("Nhap vao so x:");
	scanf ("%f",&x);
	printf ("Nhap vao so y:");
	scanf ("%d", &y);
	
	float S = luyThua(x,y);
	printf ("Ket qua la: %f",S);
	
}
