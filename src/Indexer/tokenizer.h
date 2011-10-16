
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Tokenizer
{	
	private:
	string text;
	string tokens;
	int i;
	vector<string> l;
	vector<string>::iterator itr;
	
	public:
	Tokenizer();
	vector<string>& Tokenize(string);
	void Debug();
	
};
	
	
	
	

