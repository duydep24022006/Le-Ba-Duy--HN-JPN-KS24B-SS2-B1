#include <stdio.h>

int main(){
	float a = 3.5;	//chieu rong
	float b = 6.3;  //chieu dai
	float C;		//chu vi
	float S;		//dien tich
	//tinh chu vi
	C = (a + b) * 2;
	printf("chu vi cua hinh chu nhat la:%.3f\n",C);//in chu vi ra ngoai man hinh
	//tinh dien tich
	S = a * b;
	printf("dien tich cua hinh chu nhat là:%.3f",S);//in dien tich ra ngoai man hinh
	
	return 0;
}
