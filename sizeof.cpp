#include<iostream>
using namespace  std;
int main()
{
     int c, s, i, l , f, d;
c = sizeof(char);
s = sizeof(short);
i = sizeof(int);
l = sizeof(long);
f = sizeof(float);
d= sizeof(double);

    cout<<"Size of  char:" << c<<" byte  \n";
    cout<<"Size of  short:" << s<<" byte   \n";
    cout<<"Size of  integer:" << i<<" byte \n";
    cout<<"Size of  long:" << l<<" byte  \n";
     cout<<"Size of  float:" << f<<" byte   \n";
     cout<<"Size of  double:" << d<<" byte   \n";
    return 0;
}
