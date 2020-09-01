#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int soma2 (int n1, int n2);
void tr(string tra[4]);

int main(){
	
	int res;
	string transp[4] = {"carro","moto", "barco", "aviao"};
	
	soma(15,5);
	res=soma2(175, 25);
	
	cout<<"Resultado da soma 2: "<<res<<"\n";
	
	tr(transp);
	
	return 0;
}

void texto(){
	cout << "hello world!\n";
}

void soma (int n1, int n2){
	cout <<"soma dos valores: "<<n1 + n2 << "\n";
	
}

int soma2 (int n1, int n2){
	
	
	
	return n1+n2;
}

void tr(string tra[4]){
	
	for(int i=0; i<4; i++){
		cout<< tra[i] << "\n";
	}
}
