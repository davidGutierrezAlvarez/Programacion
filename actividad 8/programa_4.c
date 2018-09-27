#include<stdio.h>

int main()
{
	int saltos, num=0, inicial, final, cambio;
	printf("DAME UN VALOR INICIAL: \n");
	scanf("%d",&inicial);
	printf("AHORA UNO FINAL:\n");
	scanf("%d",&final);
	printf("POR ULTIMO DAME EL CAMBIO:\n");
	scanf("%d",&cambio);

	while(inicial>final)
	{
		num+=inicial;
		printf("%d, ",final);
		final-=cambio;
		//inicial--;
	}
	while(inicial<final)
	{
		num+=inicial;
		printf("%d, ",inicial);
		inicial+=cambio;
		//final--;
	}

	return 0;
}
