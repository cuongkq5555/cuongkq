#include <stdio.h>

int main() {
		int n;
	printf ( "nhap so n:");
	scanf("%d",&n);
	   if (n == 1 || n == 2){
	printf("so tiem can %d trong day Fibonaci la 1",n);
	}else{

    int a=0;
	int i=1;
	int a1 = 1;
	int a2 = 1;
 
	        

    while (a<n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    printf("so tiem can %d trong day Fibonaci la: %d",n,a1);
}
}
