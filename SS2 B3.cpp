#include<stdio.h>

int main(){
	float a = 2, b = 3.14; //khai bao bien
	float tong;     //tong
	float hieu;		//hieu
	float tich;		//tich
	float thuong;   //thuong
	
	tong = a + b;  								 //tinh tong
	printf("cua ban het 1 jack:%.2f cu\n",tong);
	hieu = a - b;								//tinh hieu
	printf("cua ban het 1 jack:%.2f cu\n",hieu);
	tich = a * b;								//tinh tich
	printf("cua ban het 1 jack:%.2f cu\n",tich);
	thuong = a / b;								//tinh thuong
	printf("cua ban het 1 jack:%.2f cu\n",thuong);
	
	return 0;
	
}
