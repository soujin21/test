#include<stdio.h>
int main(){
	 int code;
	 char name[20];
	 int qty;
	 double price;
	 int discount;
	 double total;
	 double payment;
	printf("code: ");
	scanf("%d",&code);
	printf("name: ");
	scanf("%s",&name);
	printf("qty: ");
	scanf("%d",&qty);
	printf("price: ");
	scanf("%lf",&price);
	printf("discount: ");
	scanf("%d",&discount);
	total= price*qty;
	payment= total-(total*discount)/100;
	printf("%lf\n",total);
	printf("%lf",payment);
    printf("hello world");
	
	
}