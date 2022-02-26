
#include<iostream>
#include "Triangle.h"

using namespace std;


int main()
{

	Triangle obj;
	int a;
	cout << "Enter height\n";
	cin >> a;
	obj.setheight(a);

	cout << "Enter base\n";
	cin >> a;
	obj.setbase(a);

	cout << "Enter length\n";
	cin >> a;
	obj.setlength(a);


	Triangle obj2=obj;

	cout << "OBJ 1 display\n";
	
	cout << obj.getheight() << endl;
	cout << obj.getbase() << endl;
	cout << obj.getlen() << endl;

	cout << "OBJ 2 display\n";
	cout<<obj2.getheight()<<endl;
	cout<<obj2.getbase()<<endl;
	cout<<obj2.getlen() << endl;


	system("pause");
	return 0;

}