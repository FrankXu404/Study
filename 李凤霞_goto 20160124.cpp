//  				�� ¼ �� �� ��  

//	getchar()   :     �Ӽ���  ��ȡ  һ����ֵ 

/*	goto  �Ǻ�;  
��������  �Ͱ�   ��һ���Ǻ�  ���� ����Ǻ�����  ��	 
	������  goto ���� 
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
