					/*   ��ӡ����֪ͨ 
						 С�������  %f  ;  %.1f ��ʾ���һ��С��  
						 
						  		scanf  printf
						  		
						float   %f	   %f	
						   
						double  %lf    %f 
						 
						*/

#include <stdio.h>
int main(){
	float x;
	printf("������ѧ�֣�");
	scanf("%f", &x);
	
	if ( x< 60 ){
		printf("�ܱ�Ǹ���ò���\n") ;
	}else{
		if( x>= 90){
		printf("   good\n   ѧ����   %.1f\n", 3*1.8);
		}else{
		printf("����Ŭ��") ; 
		}
	}
	
	return 0;
} 

