// Identificar Números Primos
// Autor: F. Moisés Amador García
// 
#include <iostream>

using namespace std;

int main(){
	int N=0;
	int primo=0;
	cout<<"Dame un número"<<endl;
	cin>>N;

	for (int i=2; i<=(N/2); i++)  //i++ es equivalente a i=i+1 
	{
		if ((N%i)==0) {
			primo=1;
			break;
		}
	}

	if(primo==0)
	cout<<"Tu número es primo"<<endl;
	else
	cout<<"Tu número no es primo"<<endl;
	
	return 0;
}
