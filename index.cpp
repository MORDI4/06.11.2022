#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cout<<"Wpisz wspolczynnik a = ";
    cin>>a;
    cout<<"Wpisz wspolczynnik b = ";
    cin>>b;
    cout<<"Twoja funkcja liniowa to "<<a<<"x "<<"+ "<<b<<"\n";
    cout<<"Miejsce zerowe to "<<-b/a;
}
