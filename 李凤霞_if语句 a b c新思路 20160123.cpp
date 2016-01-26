//   a b c  交换
#include <stdio.h>
int main(){
	int a,b,c,t;  // t用来暂存值
	printf("输入三个值：");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a< b){
		t = a; a = b; b = t;
	} 
	
	if(b< c){
		t = b; b = c; c = t;
		if(a< b){
			t = a; a = b; b = t;
		}
	}
	printf("%d > %d > %d", a, b, c);
	return 0;
} 
