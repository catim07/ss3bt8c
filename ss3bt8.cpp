#include<stdio.h>
int main(){
	long sodao,num,don,chuc,tram,ngan;
	printf("moi ban nhap so co 4 so la: ");
	scanf("%ld",&num);
	if(num<1000 || num>9999){
		printf("khong hop le moi ban nhap lai");
		return 1;
	}
    don= num%10;
    chuc=(num/10)%10;
    tram=(num/100)%10;
    ngan=num/1000;
    sodao=don*1000+chuc*100+tram*10+ngan;
	printf("so nghich dao cua ban nhap la: %ld",sodao);
	return 0;
}
