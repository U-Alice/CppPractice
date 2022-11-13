#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
	string phrase;
	cout << "Enter your phrase : ";
	getline(cin,phrase);
	
	cout << "i. The Number of characters with spaces: " << phrase.length() << endl;
	phrase.erase(remove_if(phrase.begin(), phrase.end(), ::isspace),phrase.end());
	cout << "i. The Number of characters without spaces: " << phrase.length() << endl;
	return 0;
}
