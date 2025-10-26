/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class karakter {

public:
	string adi;
	int rakipcan;
	int can;
	int hasar;
	void kosma() {
		cout<< adi <<"kosuyor" <<endl;
	}
	void vurma() {
		cout<< adi <<"vuruyor" <<endl;
		rakipcan = rakipcan - hasar ;
	}


};







int main()
{
	karakter karakter1;
	karakter1.adi = " pekka ";
	karakter1.can = 7700;
	karakter1.hasar = 1458;
	karakter1.rakipcan = 10000;
	cout<<"karakter1: "<<karakter1.adi<<endl;
	cout<<karakter1.rakipcan;
	karakter1.kosma();
	karakter1.vurma();
	cout<<karakter1.rakipcan;
























	return 0;
}