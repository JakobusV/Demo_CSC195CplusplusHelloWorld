#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void square(int& sqri)
{
	sqri = sqri * sqri;
}

void Double(int* dobi)
{
	*dobi = *dobi * 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int i = 5;
	// declare a int reference and set it to the int variable above
	int& r = i;
	// output the int variable
	cout << i << endl;

	// set the int reference to some number
	r = 2;
	// output the int variable
	cout << i << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
		/*The variable i changed from 5 to 2*/

	// output the address of the int variable
	cout << &i << endl;
	// output the address of the int reference
	cout << &r << endl;
	// are the addresses the same or different? (insert answer)
		/*They are the same*/

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	square(r);
	// output the int variable to the console
	cout << i << endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* p = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	p = &i;

	// output the value of the pointer
	cout << p << endl;
	// what is this address that the pointer is pointing to? (insert answer)
		/*The same as the 'i' variable's address*/
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << *p << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(p);

	// output the dereference pointer
	cout << *p << endl;
	// output the int variable created in the REFERENCE section
	cout << i << endl;
	// did the int variable's value change when using the pointer?
		/*Yes they did*/

	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	int* pheap = new int;
	// output the pointer value, this should be the address of the int allocated on the heap
	cout << pheap << endl;
	// output the dereference pointer
	cout << *pheap << endl;
	// deallocate the int pointer to free up the memory
	delete(pheap);

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	int* parray = new int[5];
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	for (int i = 0; i < 5; i++)
	{
		parray[i] = rand() % 10;
	}
	// use a for loop and output each of the ints in the array
	for (int i = 0; i < 5; i++)
	{
		cout << parray[i] << endl;
	}
	// use a for loop and output the address of each of the ints in the array
	for (int i = 0; i < 5; i++)
	{
		cout << &parray[i] << endl;
	}
	// deallocate the int pointer to free up the memory block (remember it's an array)
	delete[] parray;

	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	Person* person = new Person[2];
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter Name: ";
		cin >> person[i].name;
		cout << "Enter ID: ";
		cin >> person[i].id;
	}
	// use a for loop and output the name and id of each person in the array 
	for (int i = 0; i < 2; i++)
	{
		cout << "Person " << i + 1 << ": ";
		cout << person[i].name << " - ";
		cout << person[i].id << endl;
	}
	// deallocate the person pointer to free up the memory block (remember it's an array)
	delete[] person;
}