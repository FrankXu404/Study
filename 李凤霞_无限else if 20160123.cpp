//							���д�� (�򵥰�)      ��©�� 
//						������ʵ�� �� ����ʾһ�� else if 

//     ���޸� else if 
//  	if (����)  ���壩;
// else if (����)  ���壩;
// else if (����)  ���壩;

#include <stdio.h>
int main(){
	double money,time,M;	// ����  ʱ��  �����ϼ� 
	printf("���뱾������ʱ�������-1��ʾ��\n");
	scanf("%lf %lf", &money, &time);
	
	
	if (time == -1)		printf("�����ϼ�Ϊ%.1fԪ\n", money); 			// ©��������� 
	else if ( time == 3 )	M = 0.03 * money+ money;
	else if ( time == 6 )	M = 0.06 * money+ money;
	else if ( time == 8 )	M = 0.08 * money+ money;
	else if ( time == 12)	M = 0.12 * money+ money;
	
	
	printf("�����ϼ�%.3fԪ", M);		// .3 ��ʾ С������������λ  ����ȫ����� 
	return 0;
} 
