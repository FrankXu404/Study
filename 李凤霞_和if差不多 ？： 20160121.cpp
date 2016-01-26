
// 		要被赋值的变量  =  （ 条件 ）？ 成立 赋 这个值 ： 不成立 赋 这个值 

/*					自 动 购 票 						*/

#include <stdio.h>
int main(){
	int money = 0;
	int age;
	printf("输入您的年龄：");
	scanf("%d", &age);
	
	money = ( age> 12) ? 80: 20;
	printf("您的票价为：%d", money); 
	
	return 0;
}

