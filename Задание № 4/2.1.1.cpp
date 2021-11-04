#include <iostream>
using namespace std;
int i=1;
int a;
int main()
{
        setlocale(LC_ALL,"RUSSIAN");
        a=++i*i++;
	cout<<"Значение выражения ++i*i++ = "<<a<<"\n";
	return(0);
}