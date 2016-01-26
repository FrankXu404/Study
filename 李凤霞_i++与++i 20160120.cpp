						/* 变量自身加(减)1 */
#include <stdio.h>
int main(){
	// i++ 先用i 里面的值，再加 1
	// ++i 先加 1， 在使用变量 i 的值 
	
	int a = 3;
	int i = 3;
	printf(" a= %d\n", a++);
	printf(" i= %d\n", ++i); 
	printf(" a= %d\n", a);
	printf(" i= %d\n", i); 
	
	return 0;
} 
