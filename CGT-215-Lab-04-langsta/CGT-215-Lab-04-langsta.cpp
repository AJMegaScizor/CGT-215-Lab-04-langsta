#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	int f;
	f = 1;
	//Defines the variable for the number (n) inputted for the factorial
	// and f which is the number that is multiplied by each (n - 1)
	cout << "Factorial:" << endl;
	cout << "Enter a number please:";
	// States the equation type and asks for a number
	cin >> n;
	while (n < 0) {
		cout << "Enter a positive number please!" << endl;
		cin >> n;
	}
	// Keep asking the user to enter a positive number everytime they enter a negative number until they enter a positive one
	cout << " Your Selection:" << n << endl;
	cout << n << "!" << " = ";
	while (n >= 2) {
		f = f * n;
		cout << n << " * ";
		n = n - 1;
		// multiplies f by n then prints out (n *) for the equation and subtracts 1 from n while n is greater than or equal to 2

	}
	
	cout << "1";
	// prints 1 to finish the equation as the final number will always be 1
	cout << " = " << f << endl;
	//prints the solution

}
void arithmetic() {
	int n;
	int a;
	int e;
	int f;
	f = 0;
	// Defines variable for "Number to start at", "Number to add each time" and "Number of elements in the series" and for "f" which will eventually represent the solution

	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at:";
	cin >> n;
	cout << "Enter a number to add each time:";
	cin >> a;
	cout << "Enter the number of elements in the series:";
	cin >> e;
	// Asks user to define each variable
	while (e < 0) {
		cout << "Enter a positive number please!" << endl;
		cin >> e;
	}
	// Keep asking the user to enter a positive number everytime they enter a negative number until they enter a positive one
	while (e > 0) {
		cout << n;
		if (e > 1) {
			cout << " + ";
		}
		//Prints current "n" and adds " + " until it reaches the final number where it is dropped this is because unlike factorials it won't end in 1 so it needs to be told when to stop
		// adding + within the while loop
		f = f + n;
		// "f" which starts as 0 adds "n" each time the loop is ran
		n = n + a;
		// Adds the number to be added each time
		e = e - 1;
		// Subtract from "e" which represents the number of elements in a series meaning the loop performs until it reaches 0
		

	}
	cout << " = " << f << endl;
	//prints the final solution.
}
void geometric() {
	int n;
	int a;
	int e;
	int f;
	f = 0;
	// Defines variable for "Number to start at", "Number to multiply each time" and "Number of elements in the series" and for "f" which will eventually represent the solution

	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at:";
	cin >> n;
	cout << "Enter a number to multiply by each time:";
	cin >> a;
	cout << "Enter the number of elements in the series:";
	cin >> e;
	// Asks user to defined each variable
	while (e < 0) {
		cout << "Enter a positive number please!" << endl;
		cin >> e;
	}
	// Keep asking the user to enter a positive number everytime they enter a negative number until they enter a positive one
	while (e > 0) {
		cout << n;
		if (e > 1) {
			cout << " + ";
		}
		f = f + n;
		n = n *	a;
		e = e - 1;
		// This is the same as normal arithmetic but instead n is multiplied by a

	}
	cout << " = " << f << endl;
	//prints final solution
}
int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

