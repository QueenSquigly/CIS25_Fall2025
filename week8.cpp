#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main() { 
	string ready; 
	int choice;
	int total = 0;
	ofstream poo("trctions.txt", ios::app);

	cout << "this is a test to see if you have depresion\n"; 
	cout << "type start when ready\n"; 
	cin >> ready; 
 
	if (ready == "start") cout << "on a scale of 1-5 do you regularly make friends \n"; 

	else cout << "this is a test to see if you have depresion\n", cout << "type start when ready\n", cin >> choice;
	cin >> choice;
	poo << "on a scale of 1-5 do you regularly make friends\n" << choice << "\n";
	total = total + choice;
	;
	if (choice == 1) cout << "on a scale of 1-5 do Complex and novel ideas excite you more than simple and straightforward ones\n";
	
	else if (choice == 2) cout << "on a scale of 1-5 do Complex and novel ideas excite you more than simple and straightforward ones\n"; 
	
	else if (choice == 3) cout << "on a scale of 1-5 do Complex and novel ideas excite you more than simple and straightforward ones\n";
	
	else if (choice == 4) cout << "on a scale of 1-5 do Complex and novel ideas excite you more than simple and straightforward ones\n";
	
	else if (choice == 5) cout << "on a scale of 1-5 do Complex and novel ideas excite you more than simple and straightforward ones\n";
	cin >> choice;
	total = total + choice;
	poo << "on a scale of 1-5 do Complex and novel ideas excite you more than simple and straightforward ones.\n" << choice << "\n";

	if (choice == 1) cout << "on a scale of 1-5 do You usually feel more persuaded by what resonates emotionally with you than by factual arguments.\n";
	
	else if (choice == 2) cout << "on a scale of 1-5 do You usually feel more persuaded by what resonates emotionally with you than by factual arguments.\n"; 
	
	else if (choice == 3) cout << "on a scale of 1-5 do You usually feel more persuaded by what resonates emotionally with you than by factual arguments.\n";
	
	else if (choice == 4) cout << "on a scale of 1-5 do You usually feel more persuaded by what resonates emotionally with you than by factual arguments.\n";
	
	else if (choice == 5) cout << "on a scale of 1-5 do You usually feel more persuaded by what resonates emotionally with you than by factual arguments.\n";
	cin >> choice;
	total = total + choice;
	poo << "on a scale of 1-5 do You usually feel more persuaded by what resonates emotionally with you than by factual arguments.\n" << choice << "\n";

	if (choice == 1) cout << "on a scale of 1-5 is Your living and working spaces clean and organized\n";
	
	else if (choice == 2) cout << "on a scale of 1-5 is Your living and working spaces clean and organized\n"; 
	
	else if (choice == 3) cout << "on a scale of 1-5 is Your living and working spaces clean and organized\n";
	
	else if (choice == 4) cout << "on a scale of 1-5 is Your living and working spaces clean and organized\n";
	
	else if (choice == 5) cout << "on a scale of 1-5 is Your living and working spaces clean and organized\n";
	cin >> choice;
	total = total + choice;
	poo << "on a scale of 1-5 is Your living and working spaces clean and organized\n" << choice << "\n";

	if (choice == 1) cout << "on a scale of 1-5 do You usually stay calm, even under a lot of pressure.\n";
	
	else if (choice == 2) cout << "on a scale of 1-5 do You usually stay calm, even under a lot of pressure.\n"; 
	
	else if (choice == 3) cout << "on a scale of 1-5 do You usually stay calm, even under a lot of pressure.\n";
	
	else if (choice == 4) cout << "on a scale of 1-5 do You usually stay calm, even under a lot of pressure.\n";
	
	else if (choice == 5) cout << "on a scale of 1-5 do You usually stay calm, even under a lot of pressure.\n";
	cin >> choice;
	total = total + choice;
	poo << "on a scale of 1-5 do You usually stay calm, even under a lot of pressure.\n" << choice << "\n" << " total point\n" << total << "\n";

	if (total <= 12) cout << "you are depressed\n", poo << "you are depressed\n";
	else if (total >= 13) cout << "you are happy\n", poo << "you are happy";

return 0;
} 