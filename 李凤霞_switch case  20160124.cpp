//					Сѧ��  �Ӽ��˳�  ��ϰ 
//					������ �ַ�����ǧ����  �ո� 

// switch case ���      break ���� 	char �������� %c 			default��û��ƥ����  ��ʱ��  ����default 
/* switch ��һ��ֵ��������С������		//�����ﲻ����С�� 
	case 'ֵΪ����ʱ' ��
	ִ��������  ; break ;
	
	case 'ֵΪ����ʱ' ��
	ִ��������  ; 
	
	case 'ֵΪ����ʱ' ��
	ִ��������  ; 
�� 
*/
#include <stdio.h>
main(){
	double a1, a2;		// ��������ֵ 
	char z; 		// ���� �ַ� 
	printf("����ֵ��");
	scanf("%lf%c%lf", &a1, &z, &a2);
	
	switch ( z ){		//�����ﲻ����С�� 
		case'+':				//������ �ַ�����ǧ����  �ո� 
			printf("%.1f + %.1f = %.2f", a1, a2, a1 + a2);break; 
		case'-':
			printf("%f - %f = %.2f", a1, a2, a1 - a2);
		case'*':
			printf("%f * %f = %.2f", a1, a2, a1 * a2);
		case'/':
			printf("%f / %f = %.2f", a1, a2, a1 / a2);
		default:
		printf("����ʶ��");						
	}
	
	return 0;
}

