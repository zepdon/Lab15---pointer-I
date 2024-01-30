#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int *x = &a;
	int **z = &x;

	char b = 'A';
	char *y = &b;

	char &c = b;

	cout << a << " " << b << " " << c << " " << x << " " << (int*)y << " " << z << endl ;
	cout << &a << " " << (int*)&b << " " << (int*)&c << " " << &x << " " << &y << " " << &z << endl ;
	c = 'F';
	cout << a << " " << b << " " << c << " " << x << " " << (int*)y << " " << z << endl ;
	*y = 'W';
	cout << a << " " << b << " " << c << " " << x << " " << (int*)y << " " << z << endl ;
	*x = 6;
	cout << a << " " << b << " " << c << " " << x << " " << (int*)y << " " << z << endl ;
	**z = 7 ;
	cout << a << " " << b << " " << c << " " << x <<  " " << (int*)y << " " << z << endl ;

	return 0;
}
