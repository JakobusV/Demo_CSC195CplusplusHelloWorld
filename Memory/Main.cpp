#include <iostream>
using namespace std;

void set(int& i)
{
	i = 100;
}

void swap(int i1, int i2)
{

}

int main()
{
	int i1 = 2345;
	int i2 = 20;

	int& r = i1;
	int* p = nullptr;
	p = &i1;
	p = &i2;



	//char* pc = (char*)&i1;
	//cout << (int)*pc << endl;

	//r = 30;
	//set(i1);
	//cout << &i1 << endl;
	//cout << r << endl;

	//cout << p << endl;
	//cout << *p << endl;

	int* p1 = new int;
	//*p1 = 5;
	cout << p1 << endl;
	cout << *p1 << endl;
	cout << &p1 << endl;

	delete p1;

	int* a = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cout << &a[i] << endl;
	}
	delete[] a;

	int ar[4] = { 1,2,3,4 };
	cout << ar << endl;
}