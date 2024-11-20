#include <stdio.h>

int main(){
	float PI = 3.14;//pi
	float r = 6.3;	//ban kinh
	float C;		//chu vi
	float S;		//dien tich
//tinh chu vi hinh tron 
	C = 2 * PI * r;
	printf("chu vi hinh tron la:%.3f\n",C);
//tinh dien tich hinh tron
	S = PI * r * r;
	printf("dien tich hinh tron la:%.3f",S);
	
	return 0;
}
