//  ���Ӣ���·�
#include <stdio.h>
int main(){
	int m;
	printf("�·�:");
	scanf("%d", &m);
	
	switch ( m ){
		case 1:
		printf("%d��Ӣ�ģ�January", m); break; 
		case 2:
		printf("%d��Ӣ�ģ�February", m); break;
		case 3:
		printf("%d��Ӣ�ģ�March", m); break;
		case 4:
		printf("%d��Ӣ�ģ�April", m); break;
		case 5:
		printf("%d��Ӣ�ģ�May", m); break;
		case 6:
		printf("%d��Ӣ�ģ�June", m); break;
		case 7:
		printf("%d��Ӣ�ģ�July", m); break;
		case 8:
		printf("%d��Ӣ�ģ�August", m); break;
		case 9:
		printf("%d��Ӣ�ģ�September", m); break;
		case 10:
		printf("%d��Ӣ�ģ�October", m);break;
		case 11:
		printf("%d��Ӣ�ģ�November", m); break;
		case 12:
		printf("%d��Ӣ�ģ�December", m); break;
	}
	
	return 0;
} 
