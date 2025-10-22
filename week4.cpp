#include <iostream> 
using namespace std; 
int main() { 
	int choice; 
	cout << "1. Add Item\n2. View Items\n3. Sell Item\n4. Exit\n"; 
	cout << "Choose an option: "; 
	cin >> choice; 
 
	if (choice == 1) cout << "Item added!\n"; 
	else if (choice == 2) cout << "Displaying items...\n"; 
	else if (choice == 3) cout << "Selling item...\n"; 
	else if (choice == 4) cout << "Leaving menu\n";
	else cout << "Invalid option.\n"; 
	return 0; 
} 