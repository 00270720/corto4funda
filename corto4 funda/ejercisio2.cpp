#include <iostream>

using namespace std;

float room (float estaturas[26], float prom, float suma=0, float menor=0, float mayor=0)
{
    for (int i = 0; i <=24; i++)
{
  cout <<("Digite la estatura del estudiante una por una: ") <<(i + 1) <<(": ");
  cin >>estaturas[i];
  suma += estaturas[i];
}

prom = suma/25;

cout <<"El valor de la media es: " <<(prom) <<endl;


float room (float estaturas[26], float prom, float suma=0, float menor=0, float mayor=0);
{
for (int i = 0; i <=24; i++)
{
if (estaturas[i] < prom )
{
  menor = menor+1;
}

if (estaturas[i] > prom )
{
  mayor = mayor+1;
}

}
cout <<("\nLas estaturas abajo de la media son: ") <<menor;
cout <<("\nLas estaturas arriba de la media son: ") <<mayor <<endl;

return 0;
}
}

int main()

{

float estaturas[26], prom, suma=0, menor=0, mayor=0;
int f;

f = room (estaturas, prom, suma=0, menor=0, mayor=0);


cout <<f;


return 0;
}