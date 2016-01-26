					/*   打印补考通知 
						 小数输出用  %f  ;  %.1f 表示输出一个小数  
						 
						  		scanf  printf
						  		
						float   %f	   %f	
						   
						double  %lf    %f 
						 
						*/

#include <stdio.h>
int main(){
	float x;
	printf("请输入学分：");
	scanf("%f", &x);
	
	if ( x< 60 ){
		printf("很抱歉，得补考\n") ;
	}else{
		if( x>= 90){
		printf("   good\n   学积分   %.1f\n", 3*1.8);
		}else{
		printf("继续努力") ; 
		}
	}
	
	return 0;
} 

