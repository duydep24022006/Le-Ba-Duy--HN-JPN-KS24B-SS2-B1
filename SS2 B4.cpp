#include <stdio.h>

int main(){
	float canh = 3.14;//chieu dai canh
	float C;		  //chu vi
	float S;		  //dien tich
	//tính chu vi 
	C = canh * 4;
	printf("chu vi cua hinh vuong la:%.3f\n",C);
	//tinh dien tich
	S = canh * canh;
	printf("dien tich hinh vuong la:%.3f",S);
	
	return 0;
}

