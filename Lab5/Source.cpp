#include <iostream>
#include <string>

using namespace std;

int main() {

	string strText = "Hello [World] Home[4865sd-4532]!";

	cout << "We have string with parentheses []" << endl << "Our text: " << endl << strText << endl << endl;
	cout << "We will remove the brackets and all the text in them" << endl << "Result: " << endl;

	for (int i = 0; i <= (int)strText.length(); i++) { 

		if (strText[i] == '[') {
			
			while (strText[i] != ']') {

				strText.erase(strText.begin() + i);
				
			}

			strText.erase(strText.begin() + i);

		}
	}
	 
	cout << strText << endl << endl;
	system("PAUSE");

	return 0;
}