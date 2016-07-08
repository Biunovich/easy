#include "1.h"
int main(void)
{
	Comlex first,second,result;
	char op;
	while(1)
	{
		printf("Enter first complex number: ");
		scanf("%lf%lf",&first.Re,&first.Im);
		printf("Enter second complex number: ");
		scanf("%lf%lf",&second.Re,&second.Im);
		printf("Enter operation\n+\t-\t*\t/\nor q to quit: ");
		scanf(" %c",&op); 
		switch (op)
		{
			case '+':
			result = plus(first,second);
			break;
			case '-':
			result = minus(first,second);
			break;
			case '/':
			result = devide(first,second);
			break;
			case '*':
			result = mult(first,second);
			break;
			case 'q':
			exit(1);
			default :
			printf("Invalid operation\n");
			break;
		}
		printf("Result %lf %lf\n",result.Re,result.Im);
	}
}