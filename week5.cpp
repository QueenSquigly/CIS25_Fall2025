#include "week5.h"
#include <iostream> 
using namespace std; 
int main() { 
	int choice; 
	cout << "1. Add Item\n2. View Items\n3. Sell Item\n4. Exit\n"; 
	cout << "Choose an option: "; 
	cin >> choice; 
 
	if (choice == 1) cout << "How many items?\n", cin >> A, cout << "Adding items!\n";
	else if (choice == 2) cout << "Displaying items...\n", cout << "You have no items, press anything to close the menu\n", cout << "1. Add Item\n2. View Items\n3. Sell Item\n4. Exit\n", cout << "Choose an option: ", cin >> choice;
	else if (choice == 3) cout << "No items to sell, closing menu\n"; 
	else if (choice == 4) cout << "Leaving menu\n";
	else cout << "Invalid option.\n"; 
	return 0; 
} 