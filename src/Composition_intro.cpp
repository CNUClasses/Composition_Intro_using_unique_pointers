#include <iostream>
#include "Human.h"
using namespace std;

int main() {
	std::unique_ptr<Watch> w1;
	Human h1(w1);	//this human has no watch
	
	//what if I asked this human the time?
	//a human is not a watch, but they can own one
	cout<<"when asked the time h1 says: "<<h1.getTime()<<endl;

	//how about we create a watch and give it to the human
//	Watch *w = new Watch;
//	Human h2(w);
	std::unique_ptr<Watch> w(new Watch());
	Human h2(w);

	//cannot do following 2 because cannot copy construct or assign a unique pointer
//	Human h3(h2);
//	Human h3=h2;

	
	//gave the human the watch, 
	//they are responsible for managing it
	//so set the original pointer to 0
	//this is much more bulletproof if you use unique_ptr's
//	w=0;
	
	cout<<"when asked the time h2 says: "<<h2.getTime()<<endl;

	return 0;
}
