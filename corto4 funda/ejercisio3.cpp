#include "iostream"

using namespace std;

float room1();
float room2();


    float numeros[100][100], prom, suma;
    int filas, columnas=5, n, i, da;

  float room1()
  {
    cout<<("Digite el numero de alumnos osea (filas): ");
        cin>>filas;

    for(int  i= 0; i < filas; i++)
    {     
        for(int j = 0; j < columnas; j++)
        {
            cout<<"Digite una nota ["<<i<<"]["<<j<<"]: ";
                cin>>numeros[i][j]; 
                }
    }
    cout<<("\nNotas: ")<< endl;
    cout<<endl;
    for(int i = 0; i < filas; i++)
    {   
        for(int j = 0; j < columnas; j++)
        {
            cout<<(" | ")<<numeros[i][j]; 
            }

        cout<<endl; 
        }
 
return 0;
}
  
  float room2()
  {

  cout<<("\nCual alumno (fila) deseas promediar: ");
  cin>>n;

      if((n >= 0) && (n <= filas))
      {
          suma=0;
          for(int j = 0; j < columnas; j++)
          {
              suma=suma+numeros[n][j]; 
              }
              
      prom=suma/5;

     cout<<("\nEl promedio del alumno (fila) '")<<n<<("' es: ")<<prom<<endl;
        }
        else
    {
        cout<<("\nERROR valor introducido no existente!!")<<endl; 
    }
    

    if(prom>6)
    {
        cout<<("\nEl alumno aprobo satisfactoriamente!")<<endl;
        cout<<endl; 
    }
     else
    {
        cout<<("\nEl alumno no aprobo")<<endl;
        cout<<endl; 
    }
     }

int main()
{
  
  cout<<("\nMatriz para saber si un alumno aprobo o no!")<<endl;
  cout<<endl;
  room1();
  room2();

return 0;
}

