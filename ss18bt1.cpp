#include<stdio.h>
int main(){
	int a=10;
	int *ptr;
	ptr=&a;
	printf("gia tri cua a: %d\n",a);
	printf(": %p\n",&a);
	printf("dia chi cua a: %p\n",ptr);
	printf(": %d\n",&ptr);
	return 0;
}
