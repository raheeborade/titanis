
#include "Tokenizer.h"
using namespace std;

Tokenizer::Tokenizer()
{
	i = 0;
}

vector<string>& Tokenizer::Tokenize(string text)
{
	while (i < text.size())
	{

		if(text[i] == '<')
			{
				while(text[i] != '>')
					{
						tokens += text [i];
					
						i++;
					}
			}
		else if(text[i] == '>')
			{
				tokens += text [i];
				l.push_back(tokens);
				tokens.erase(tokens.begin(),tokens.end());
				i++;
			}
		else
			{
				while(text[i] != '<')
					{
						tokens += text[i];
						i++;
					}
				l.push_back(tokens);
				tokens.erase(tokens.begin(),tokens.end());
			}
		}
	return l;
}

void Tokenizer::Debug()
{
	for(itr = l.begin();itr != l.end();itr++)
	{
		cout<<(*itr)<<endl;
	}
}


