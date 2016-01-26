//  输出英文月份
#include <stdio.h>
int main(){
	int m;
	printf("月份:");
	scanf("%d", &m);
	
	switch ( m ){
		case 1:
		printf("%d月英文：January", m); break; 
		case 2:
		printf("%d月英文：February", m); break;
		case 3:
		printf("%d月英文：March", m); break;
		case 4:
		printf("%d月英文：April", m); break;
		case 5:
		printf("%d月英文：May", m); break;
		case 6:
		printf("%d月英文：June", m); break;
		case 7:
		printf("%d月英文：July", m); break;
		case 8:
		printf("%d月英文：August", m); break;
		case 9:
		printf("%d月英文：September", m); break;
		case 10:
		printf("%d月英文：October", m);break;
		case 11:
		printf("%d月英文：November", m); break;
		case 12:
		printf("%d月英文：December", m); break;
	}
	
	return 0;
} 
