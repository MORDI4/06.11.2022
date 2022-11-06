#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Wpisz wspolczynnik a = ";
    cin>>a;
    cout<<"Wpisz wspolczynnik b = ";
    cin>>b;
    cout<<"Wpisz wspolczynnik c = ";
    cin>>c;
    
    cout<<"Twoja funkcja liniowa to "<<a<<"x "<<"+ "<<b<<"y "<<"+ "<<c<<" = 0"<<"\n";
    
    if(a==0){
    	cout<<"Miejsce zerowe to "<<b;
	} else {
		cout<<"Miejsce zerowe to "<<-c/a;
	}
	
	//git remote add origin https://MORDI4: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@github.com/MORDI4/06.11.2022.git
}
