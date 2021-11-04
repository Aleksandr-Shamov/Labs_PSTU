#include <iostream>
using namespace std;
const int a=10;
      int b;
int main()
{
  b=a<<1;//умножение на два побитовым сдвигом влево на один бит
  cout<<a<<"\n"<<b<<"\n";//вывод 10 и 20
  cout<<--b<<"\n";//вывод декриментированной переменной, имевшей значение 20
  return(0);
}  