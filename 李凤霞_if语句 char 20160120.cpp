/* 					if 语句
					char 字符，要用单引号，并且 输入的时候。是  %c  	*/
#include <stdio.h>
int main(){
	char a,b,c,d,e,f,g,h; 
	scanf("%c %c %c %c %c %c %c %c", &a,&b,&c,&d,&e,&f,&g,&h);
	
	if( a=='A'&& b=='A' && c=='A'&& d=='A'&& e=='A'&& f=='A'&& g=='A'&& h=='A');
		printf("OK,密码正确"); 
	
	return 0;
}
