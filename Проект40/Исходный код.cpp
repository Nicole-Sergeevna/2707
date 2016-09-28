#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main()
{
ifstream in;
ofstream out;

in.open("D:\\f1.bin", ios::in);
out.open("D:\\f2.bin", ios::out);

if( in.fail() || out.fail())
{
	cout << "файл не открывается"<< endl;
}
int n, k;

cout << "Enter n, k"<< endl;
cin >> n >> k;
string t;

while(getline(in,t))//цикл который работает пока есть значение
{
	if(n>k && !(in.eof()))//проверяет достигнут ли конец файла

 {
  out << t << endl; 
 }
 n++;
}

int a=0;
 
for (int i = 0; i < t.size(); i++)
{
 if(t[i] == 'a' || t[i]=='i' || t[i]=='o' || t[i]=='u' || t[i]=='e')
  a++;

}
 
cout<<("glasni:")<<a<<endl;
system("pause");
return 0;
}
