#include<iostream>
#include<string>
#include"AlgoKeeper.h"
	
int main()
{
	int _input = 0;
	string pattern,text;
	AlgoKeeper runner;
	std::cout<<"Plean Enter 1 for Naive 2 for Rabin Karp 3 for KMP";
	std::cin>>_input;
	std::cout<<"You entered "<<_input<<endl;
	std::cout<<"Please enter a text ";
	cin>>text;
	std::cout<<"Please enter a pattern";
	cin>>pattern;
	
	switch(_input)
	{
		case 1: //Naive
			cout<<runner.NaivePatternSearch(text,pattern);
			break;
		case 2:	//Rabin Karp
			cout<<runner.RabinKarpPatternSearch(text,pattern);
			break;
		case 3: //KMP
			cout<<runner.KMPPatternSearch(text,pattern);			
			break;
		default:
			break;
	}
	return 0;
}
