#include <iostream>
#include <cstdlib>
using namespace std;

void reajustaSalario(float&);

int main()
{  
   float salario=2000;
   reajustaSalario(salario);
   cout<<"\nApos chamar a funcao: "<<salario;
   cout<<"\n\n";
   system("pause");
}

void reajustaSalario(float&s)
{  s *= 1.08; } 

