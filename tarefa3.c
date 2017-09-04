#include <stdio.h>

void imprime(float t1[], float t2[], float t3[], float t4[])
{
	int i;

		printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", t1[i]);
			}

				printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", t2[i]);
			}

				printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", t3[i]);
			}

				printf("\n");

		for(i=0; i<5; i++)
			{
			printf("%.1f \t", t4[i]);
			}

				printf("\n");
}


main() {

int i;
float K;
float x1, x2, x3, x4;

	float t1[5], t2[5], t3[5], t4[5], ma[5];

		
		for(i=0; i<5; i++)
			{
				printf("Valor linha 1 posição[%d]: ", i);
				scanf("%f", &t1[i]);
			}

			printf("\n");

		for(i=0; i<5; i++)
			{
				printf("Valor linha 2 posição[%d]: ", i);
				scanf("%f", &t2[i]);
			}
			
			printf("\n");

		for(i=0; i<5; i++)
			{
				printf("Valor linha 3 posição[%d]: ", i);
				scanf("%f", &t3[i]);
			}

			printf("\n");

		for(i=0; i<5; i++)
			{
				printf("Valor linha 4 posição[%d]: ", i);
				scanf("%f", &t4[i]);
			}
	
			printf("\n");


		//imprimindo					
		imprime(t1,t2,t3,t4); 
		
		//Zerando os elementos abaixo da primeiro.c
		if(t1[0]!=0)
		{
			K=(t2[0]/t1[0]);

			for(i=0; i<5; i++)
			{
				t2[i]=t2[i]-K*t1[i];
			}
		}
		else
		{
			for(i=0; i<5; i++)
			{
				ma[i]=t1[i];
			}
		}

		for(i=0; i<5; i++)
		{
				t1[i]=t2[i];
				t2[i]=ma[i];
		}

		if(t3[0]!=0)
		{
			K=(t3[0]/t1[0]);

			for(i=0; i<5; i++)
			{
				t3[i]=t3[i]-K*t1[i];
			}
		}
		else
		{
		}		

		if(t4[0]!=0)
		{
			K=(t4[0]/t1[0]);

			for(i=0; i<5; i++)
			{
				t4[i]=t4[i]-K*t1[i];
			}
		}
		else
		{
		}	

	if(t2[1]!=0)
	{
		K=(t3[1]/t2[1]);

		for(i=0; i<5; i++)
			{
				t3[i]=t3[i]-K*t2[i];
			}
	}
	else
	{
		for(i=0; i<5; i++)
		{
				ma[i]=t2[i];
		}

		for(i=0; i<5; i++)
		{
				t2[i]=t3[i];
				t3[i]=ma[i];
		}
	}


	if(t4[1]!=0)
	{
		K=(t4[1]/t2[1]);

		for(i=0; i<5; i++)
			{
				t4[i]=t4[i]-K*t2[i];
			}
	}
	else
	{
	}



	if(t3[2]!=0)
	{
		K=(t4[2]/t3[2]);

		for(i=0; i<5; i++)
			{
				t4[i]=t4[i]-K*t3[i];
			}
	}
	else
	{
		for(i=0; i<5; i++)
		{
				ma[i]=t3[i];
		}

		for(i=0; i<5; i++)
		{
				t3[i]=t4[i];
				t4[i]=ma[i];
		}
	}


		
	x4=(t4[4]/t4[3]);
	x3=(((t3[4])-(t3[3]*x4))/(t3[2]));
	x2=(((t2[4])-(t2[3]*x4)-(t2[2]*x3))/(t2[1]));
	x1=(((t1[4])-(t1[3]*x4)-(t1[2]*x3)-(t1[1]*x2))/(t1[0]));


	printf(" x1 = %.1f \n ", x1);
	printf("x2 = %.1f \n ", x2);
	printf("x3 = %.1f \n ", x3);
	printf("x4 = %.1f \n ", x4);

}	
