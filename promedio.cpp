#include<iostream>
using namespace std;
int main (){
	int n;
	int edad;
	int i;
	double SEEC,CEEC,CHIN;
	char sexo,carrera,jornada;
	SEEC=0;
	CEEC=0;
	CHIN=0;
	
	i=1;
	cin>>n;
	while(i<=n){
		cin>>edad;
		cin>>sexo;
		cin>>carrera;
		cin>>jornada;
		if(carrera="contaduria"){
			SEEC=SEEC+edad;
			CEEC++;
			
			
		}
		if(sexo="masculino"&&carrera="ingenieria"&&jornada="noche"){
			CHIN++;
			
		}
		i=i+1;
			
	}
	PEEC=SEEC/CEEC;
	PHIN=(CHIN/N)*100;
	cout<<"El promedio de estudiantes de contaduria "<<PEEC<<endl;
	
	
	
	
	
	
	
	
	
	
	
}
