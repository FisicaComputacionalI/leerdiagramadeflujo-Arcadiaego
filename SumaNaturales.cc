// Identificar Números Primos
// Autor: F. Moisés Amador García
// 
#include <iostream>

using namespace std;

int main(){
	int sum=0;
	int N=0;
	
	cout<<"Introduce un número entero"<<endl;
	cin>>N;
	for(int i=0; i<=N; i++){
		sum = sum + i;
	}
	cout<<"La Suma de los N números naturales es:"<<sum<<endl; 
	
	return 0;
}
