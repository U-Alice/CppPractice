#include <iostream>

using namespace std;

int power(int x, int num){
	if(num == 0){
		return 1;
	}
	
	int smallOutput = power(x, num-1);
	cout << smallOutput << "\n";
	return x * smallOutput;
	
}

int main(){
//	cout<<power(3,2);
 int x=10, y=20, z=5, t=2, s=7,k,f,p,h,q;
k=x/y%s*t+y/x*t;
f=x*y/z%s*t-s*x/t;
p=y/x*t;
h=x*y/z%s*t-s*x/t+y/x*t;
q=x*(y/z%s)*t-s*x/t+y/(x*t);

cout<<"k"<<k<<endl;
cout<<"f"<<f<<endl;
cout<<"p"<<p<<endl;
cout<<"h"<<h<<endl;
cout<<"q"<<q<<endl;
return 0;

	return 0;
}
