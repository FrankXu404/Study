//					小学生  加减乘除  练习 
//					单引号 字符里面千万别家  空格 

// switch case 语句      break 跳出 	char 的输入是 %c 			default：没有匹配项  的时候  进入default 
/* switch （一个值，不能是小数）｛		//括号里不能是小数 
	case '值为多少时' ：
	执行这个语句  ; break ;
	
	case '值为多少时' ：
	执行这个语句  ; 
	
	case '值为多少时' ：
	执行这个语句  ; 
｝ 
*/
#include <stdio.h>
main(){
	double a1, a2;		// 两个计算值 
	char z; 		// 计算 字符 
	printf("两个值：");
	scanf("%lf%c%lf", &a1, &z, &a2);
	
	switch ( z ){		//括号里不能是小数 
		case'+':				//单引号 字符里面千万别家  空格 
			printf("%.1f + %.1f = %.2f", a1, a2, a1 + a2);break; 
		case'-':
			printf("%f - %f = %.2f", a1, a2, a1 - a2);
		case'*':
			printf("%f * %f = %.2f", a1, a2, a1 * a2);
		case'/':
			printf("%f / %f = %.2f", a1, a2, a1 / a2);
		default:
		printf("不能识别");						
	}
	
	return 0;
}

