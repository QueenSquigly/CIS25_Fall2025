#include <iostream> 
using namespace std; 
int main() { 
	string itemName; 
	int quantity; 
	float cost; 
 
	cout << "Enter item name from list: "; 
	cin >> itemName; 
	cout << "Enter quantity: "; 
	cin >> quantity; 
	cout << "Enter cost: "; 
	cin >> cost; 
 
	cout << "Total cost for " << itemName << " is $" << (quantity * cost) << " dollars " << endl; 
	return 0; 
} 