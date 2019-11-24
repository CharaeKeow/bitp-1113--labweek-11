/* Read from file and display the output nicely (using setw)
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void main() {
	char name[25];
	char id[5];
	float m1, m2, m3, m4, m5;

	ifstream inputFile("studentMarks.txt", ios::out);

	if (!inputFile) {
		cerr << "File could not be opened \n";
		exit(1);
	}

	cout << setw(10) << "Student ID" << setw(10) << "Name"
		<< setw(10) << "Subject 1" << setw(10) << "Subject 2"
		<< setw(10) << "Subject 3" << setw(10) << "Subject 4"
		<< setw(10) << "Subject 5" << endl << endl;

	while (inputFile >> id >> name >> m1 >> m2 >> m3 >> m4 >> m5) {
		cout << setw(10) << id << setw(10) << name
			<< setw(10) << m1 << setw(10) << m2
			<< setw(10) << m3 << setw(10) << m4
			<< setw(10) << m5 << endl;
	}
	cout << endl;
}
