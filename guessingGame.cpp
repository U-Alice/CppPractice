#include <iostream>
#include <cstdlib>
#include <string.h>
#include <time.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	start:
	int index,chances;
	string word = "";
	string hiddenWord="";
	string letter;
	char next;
	string names[] = {"aela", "evan", "aidan", "keanna", "kaylan", "ava", "mireille"};
	string countries[] = {"Rwanda", "burundi", "kenya", "tanzania", "congo", "Sudan", "America"};
	string colors[] = {"Red", "White", "Blue", "Yellow", "Black", "purple", "Violet"};
	string animals[] = {"pig", "cow", "cat", "sheep", "goat", "rat", "gorilla"};
	string categories[] = {"names", "countries", "colors", "animals"};
	
	
	cout << "--------------WELCOME TO THE GUESSING GAME------------------ \n \n \n";
	
	
	//display and choose category
	for(int i = 0; i <(sizeof(categories) / sizeof(*categories)); i++){
		cout << "\t"<< i + 1 << "." << categories[i] << endl;
	}
	cout << "Please select the category(eg : 1 for names):  ";
	cin >> index;
	
	// choose a random word;
	srand(time(0));
	int chosen = rand() % 6;

	switch(index){
	
    	case 1:
			word = names[chosen];
			break;
		case 2:
			word = countries[chosen];
			break;
		case 3:
			word = colors[chosen];	
			break;
		case 4:
			word = animals[chosen];		
	}
	chances = word.length() - 1;
	
	for(int i = 0; i<word.length(); i++){
		hiddenWord.replace(i,1, "-");
	}
	//choose a letter of the alphabet

	int k = 5;
	
	while(k > 0){
	    transform(word.begin(), word.end(), word.begin(), ::tolower);
		if(hiddenWord.compare(word) == 0){
			break;
		}
		cout << "\n \n -Choose any letter of the alphabet: " <<  endl;
		cin >> letter;
		if(letter.compare("exit") == 0){
			exit(0);
		}
		for(int i = 0; i < word.length(); i++) {
			if(tolower(word[i])== letter[0]){
	    		hiddenWord[i] = letter[0];
	    	}
		}
		for(int i = 0; i < hiddenWord.length(); i++){
			if(hiddenWord[i]){
				cout << hiddenWord[i];
			}else{
				cout << "-";
			}
		}
		cout << endl << "===" << k << " trials remaining"<<"==="; 
		k--;
	}

	
	for(int i=0; i < hiddenWord.length() ;i++){
		if(hiddenWord[i] == '-'){
			cout << "\n ===========YOU LOSE=========";
			goto terminate;
		}
	}
	cout << "\n \n------- OUUU!! YOU WIN!!---------";	

	terminate: 
	cout << "\n Do you want to restart? (y/n): ";
	cin >> next;
    if(next == 'y'){
   		goto start;
    }else{
    	exit(0);
	}
	return 0;
}
