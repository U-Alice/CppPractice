#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
	string phrase = "Hello world";
	
    phrase.erase(remove_if(phrase.begin(), phrase.end(), ::isspace),
            phrase.end());
        
    cout << phrase;
	return 0;
}
