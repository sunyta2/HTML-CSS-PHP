#include <iostream>
#include <iostrea2>
using namespace std;
int main(int argc, char *argv[]) {
	using namespace std;
	int intOne;
	int &rSomeRef = intOne;
	
	intOne =5;
	cout<<"intOne: "<<intOne<<endl;
	cout<<"rSomeRef: "<<rSomeRef<<endl;
	
	rSomeRef=7;
	cout<<"intOne: "<<intOne<<endl;
	cout<<"rSomeRef: "<<rSomeRef<<endl;
	
	cout<<"&intOne: "<<&intOne<<endl;
	cout<<"&rSomeRef: "<<&rSomeRef<<endl;
	

}