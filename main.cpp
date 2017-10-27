/*
Branden Lee
CIS 22B
Fall 2017
Assignment A
Problem A2

Used Microsoft Visual Studio 2017

contains string exercises
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	//exercise 1
	string string1;
	getline (cin, string1);
	cout << endl << "Exercise 1" << endl << string1 << endl << endl;
	//exercise 2
	string string2 = string1;
	string2 += " sleepy heads";
	cout << "Exercise 2" << endl << string2 << endl << endl;
	//exercise 3
	string string3 = "bellow cello fellow hello mellow Novello Othello pillow Rollo solo yellow";
	std::size_t found = string3.find ("h");
	cout << "Exercise 3" << endl << found << endl << endl;
	//exercise 4
	string string4 = string3;
	string4.replace (found, 1, "J");
	cout << "Exercise 4" << endl << string4 << endl << endl;
	//exercise 5
	string string5 = string3;
	std::size_t foundString5 = string5.find_last_of ("l");
	cout << "Exercise 5" << endl << foundString5 << endl << endl;
	//exercise 6
	string string6 = string3;
	string6.replace (foundString5 + 1, string6.length () - foundString5 - 1, "");
	cout << "Exercise 6" << endl << string6 << endl << endl;

	//system("pause");
	return 0;
}

/* Execution results
Good morning

Exercise 1
Good morning

Exercise 2
Good morning sleepy heads

Exercise 3
20

Exercise 4
bellow cello fellow Jello mellow Novello Othello pillow Rollo solo yellow

Exercise 5
70

Exercise 6
bellow cello fellow hello mellow Novello Othello pillow Rollo solo yell
*/