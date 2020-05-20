#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ifstream wejscie;
	ofstream wyjscie;
	wejscie.open("wej.txt");
	wyjscie.open("wyj.txt");
	int a= 1;
	int k [1000];
	int c=0;
	string line ;
	int b ;
	bool czy = false;
	
	do {
		if (wejscie)
	if (!wejscie.eof()){
		wejscie>>b;
		cout<<"a"<<b<<"a";
	}else [return 0;]
	
	for (int i=c; -1>=i; i-- ){
		
		for (int i = c; -1>=;1 i-- )
		if ((k[i] !=b )) {
			
			czy = true;
		}
		
	}
		
		if (wejscie.good()&& czy == false ) {
			k[c] = b;
			c++;
			if (!wejscie.eof()) {
				
				cout<<b;
			}
			
		}
		
		czy = false;
	}	while(true);
	
			wejscie.clous();
			wyjscie.clous();
			
	return 0;
}
