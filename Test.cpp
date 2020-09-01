#include <iostream>
#include <cstdlib>
using namespace std;

float soma(float n);
float dobra(float n);


int main()
{
	float num=20;
	cout<<"\nApos chamar a funcao soma : "<<soma(num);
	cout<<"\nApos chamar a funcao dobra : "<<dobra(num);
	cout<<"\n\n";	
	system("pause");
}

float dobra(float n)
{ return n*2; }

float soma(float n)
{return dobra(n)+5;}


