#include<iostream>

using namespace std;


class Admin
{
private:
	int pin;
	char* username ;

	static Admin* obj;
	Admin()
	{
		pin = 0;
		username = new char[15];

	}

public:

	static Admin* getinstance()
	{
		if (obj == nullptr)
		{
			obj = new Admin;

		}
		return obj;
	}

	void setname(char* a)
	{
		username = a;
	}


	void setpin(int a)
	{
		pin = a;
	}
		

	void display()
	{
		
		cout << "Pin = " << pin << endl;
		cout << "Username = " << username << endl;
	}
};

Admin* Admin::obj = NULL;

int main()
{
	Admin *obj=Admin::getinstance();
	
	int a;
	char* b = new char[15];
	cout << "Enter Id\n";
	
	cin >> a;

	obj->setpin(a);
	cin.ignore();

	cout << "Enter username\n";
	cin.getline(b, 15);
	obj->setname(b);
	obj->display();

	cout << "Enter Input\n";
	Admin* obj2 = Admin::getinstance();

	obj2->setpin(a);//same values
	obj2->display();

	system("pause");

	return 0;
}

