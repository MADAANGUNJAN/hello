#include <iostream>
using namespace std;

unsigned retBits(unsigned long long int Num){
	unsigned int lG = 0;

	while (Num)
	{
	  	if(Num&1)
	  		lG++;
	  	Num = Num >> 1;
	}
	return lG;
}

int main(){
	unsigned long int testCases;
	cin >> testCases;
	while(testCases--){
		unsigned long long int aNum;
		unsigned long long int bNum;
		cin >> aNum >> bNum;

		if(aNum == bNum){
			cout << "0\n";
		}
		else if((bNum == 0 && aNum > 0) || (bNum == 1 && aNum >1)){
			cout << "-1\n";
		}
		else if(retBits(aNum) > retBits(bNum - 1)){
			cout << "2\n";
		}
		else{
			cout << retBits(bNum - 1) - retBits(aNum) + 1 << "\n";
		}

		//cout << retBits(aNum) << " " << retBits(bNum) << endl;
	}
	return 0;
}
