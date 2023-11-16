#include "cv09.h"
#include "VectorMath.h"

int main()
{
	struct vector3d v1;
	struct vector3d v2;
	struct vector3d v3;

	enum typOperace op;

	while (1)
	{

		printf("zadejte souradnice prvniho vektoru ve formatu 'u,v,w': ");
		scanf(" %lf,%lf,%lf", &v1.x, &v1.y, &v1.z);

		printf("zadejte souradnice druheho vektoru ve formatu 'x,y,z': ");
		scanf(" %lf,%lf,%lf", &v2.x, &v2.y, &v2.z);

		printf("urcete pozadovanou operaci\n1 - soucet\n2 - rozdil\n3 - skalarni soucin\n4 - vektorovy soucin\n");
		scanf("%d", &op);

		v3 = operace(v1, v2, op);

		switch (op)
		{
		case 3:

			printf("vysledek skalarniho soucinu je: %lf\n", v3.x);

			break;

		default:

			tisk(v3);

			break;

		}

	}

	return 0;
}
