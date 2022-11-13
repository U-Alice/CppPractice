#include <cstdlib>
#include <iostream>
#include <time.h>
#include<string>
#include <cstring>
#include<stdlib.h>
using namespace std;
void guess(int rand,string arr[],int guess){
	string randomW=arr[rand];
	string initial=randomW;
	string dashed=randomW;
	string letter;
	for(int l=0;l<randomW.length();l++){
		dashed[l]='_';
	}
	int i=1;
	while( i<=guess)
    {

        cout<<"Please enter a letter: "<<endl;
        cin>>letter;
        if(letter.compare("Exit")==0||letter.compare("exit")==0||letter.compare("EXIT")==0){
        	exit(0);
        	
		}


        for (int j=0; j<randomW.length(); j++)
        {
            if (letter[0] == randomW[j] || toupper(letter[0])==randomW[j]){

            	 dashed[j] = letter[0];
            	 guess++;
            	 
            	
			}
               
        }

        char l=(char)toupper(dashed[0]);
        dashed[0]=l;
        
        if(randomW.compare(dashed)==0){
        	cout<<"\t You Won The Word is "<<randomW<<endl;
        	break;

		}

        cout<<"Result: " <<dashed<<endl;
        		     	cout<<"\t You got " <<guess-i<<"chances"<<endl;
		 i++;


    }
           if(!randomW.compare(dashed)==0){
  cout<<"\t GAME OVER"<<endl;
  cout<<"\t The word was "<<randomW<<endl;

		} 

	
}

int main(){
	string districts[30]={"Kicukiro","Nyarugenge","Gasabo","Kamonyi","Gisangara","Huye","Muhanga","Ruhango","Nyabihu","Karongi"};
	string animals[30]={"Hen","Goat","Dog","Pig","Cat","Dove","Gorilla","Mouse","Frog","Lion"};
	string names[30]={"Mireilla","Alice","Honore","Lois","Eden","Kate","Oxane","Kevin","Cedric","Vainqeur"};
	string colors[30]={"Green","Orange","Blue","Yellow","Black","White","Grey","Brown","Violet","Purple"};
	string countries[30]={"Rwanda","Burundi","Luxembourg","France","Canada","Philippines","Uganda","Kenya","Germany","China","Switzerland","Netherlands"};
	int choice;
	int guessNum=3;
    char cho;
	srand(time(0));
	int random= rand()%(5+1-0)-0;
 START:	cout<<"=============================GUESSING GAME BY R.H=================================="<<endl;
 
 cout<<"You got "<<guessNum<< " chances "<<endl;
	cout<<endl<<endl;
	cout<<"Choose Category :"<<endl;
	cout<<"\t1. Districts"<<endl;
	cout<<"\t2. Animals"<<endl;
	cout<<"\t3. Names"<<endl;
	cout<<"\t4. Colors"<<endl;
	cout<<"\t5. Countries"<<endl;
	cin>>choice;			

	switch(choice){
		case 1:
			guess(random,districts,guessNum);
			break;
		case 2:guess(random,animals,guessNum);
		    break;
		case 3:
		    guess(random,names,guessNum);
		    break;
		case 4:
		    guess(random,colors,guessNum);
		    break;
		case 5:
		    guess(random,countries,guessNum);
		    break;
		default:
			cout<<"Please choose Category"<<endl;
								    
			
			
	}
	cout<<"CONTINUE N/Y ";
	cin>>cho;
	if(cho=='Y'){
		goto START;
	}
	
	
	
	
}




