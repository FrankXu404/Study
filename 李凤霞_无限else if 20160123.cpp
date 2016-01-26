//							银行存款 (简单版)      有漏洞 
//						不符合实际 ， 仅演示一下 else if 

//     无限个 else if 
//  	if (条件)  （体）;
// else if (条件)  （体）;
// else if (条件)  （体）;

#include <stdio.h>
int main(){
	double money,time,M;	// 本金  时间  本利合计 
	printf("输入本金与存款时间活期用-1表示：\n");
	scanf("%lf %lf", &money, &time);
	
	
	if (time == -1)		printf("本利合计为%.1f元\n", money); 			// 漏洞，多出口 
	else if ( time == 3 )	M = 0.03 * money+ money;
	else if ( time == 6 )	M = 0.06 * money+ money;
	else if ( time == 8 )	M = 0.08 * money+ money;
	else if ( time == 12)	M = 0.12 * money+ money;
	
	
	printf("本利合计%.3f元", M);		// .3 表示 小数点后面输出三位  而不全部输出 
	return 0;
} 
