/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

 void find (int n1, int n2, int n3)
{ 
    if (n1>n2 && n1>n3)
    {
        cout<<n1<<"is the max \n";
    }
    else if (n2>n1 && n2>n3 )
    {
        cout<<n2<<"is the max \n"; 
    }
    else 
    {
        cout<<n3<<"is the max \n ";
    }
}

int main()
{
    
int x,y,z ;
cout <<"enter to 3 intgear \n";
cin >>x;
cin>>y;
cin>>z;

find (x,y,z);

}