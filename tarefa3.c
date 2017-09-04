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


					
		imprime(t1,t2,t3,t4); 
