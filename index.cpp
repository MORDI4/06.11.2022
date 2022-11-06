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
    
    cout<<"Miejsce zerowe to "<<-c/a;
    /* if(a==0){
    	cout<<"Miejsce zerowe to "<<b;
	} else {
		cout<<"Miejsce zerowe to "<<-b/a;
	}
	*/

}
