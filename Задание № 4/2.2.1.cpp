#include <iostream>
#include <iomanip>//подключение библиотеки, необходимой для задания точности
using namespace std;
float C;
float F;
int main()
{
	setlocale(LC_ALL,"RUSSIAN");
	cout<<"Введите температуру в градусах по Фаренгейту, F = ";//запрос данных
	cin>>F;
	C=5/9.0*(F-32);//вычисление искомой величины
	cout<<fixed<<setprecision(1)<<"Эта температура в градусах Цельсия, C = "<<C<<"\n";//вывод искомой величины
	return(0);
}