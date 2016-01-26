//  				记 录 字 符 数  

//	getchar()   :     从键盘  获取  一个键值 

/*	goto  记号;  
想跳到哪  就把   另一个记号  放哪 ，标记后面是  ：	 
	可以再  goto 上面 
	goto out;
	out: 
 
*/


#include <stdio.h>
int main(){
	int a = 0;
	loop:if( getchar() != '\n' ){
		a++;
		goto loop;
	}
	printf("%d", a);
	
	
	return 0;
} 
