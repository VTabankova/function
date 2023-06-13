#include <iostream>
#include <string>

using namespace std;

int counter(string);
void length(string);
int main()
{
	string text;
	cout << "wtite a text\n";

	getline(cin, text);
	length(text);
}


int counter(string text ) 
{
	int counter = 0;

	while (text.length())
	{
		if (text.rfind(" ") != -1)
		{
			text.erase(text.find(" "), 1);
			counter++;
		}
		else
		{
			counter++;
			break;
		}
	}
	return counter;
}

void length(string text) 
{
	int length = 0;
	string helpword;
	int word = counter(text);


	for (int i = 0; i <word; i++)
	{
		
		helpword= text.substr(0, text.find(" "));
		//cout <<"$  "<<helpword<<endl;
		if (length <= helpword.length())
		{
			length = helpword.length();
			text.erase(0, text.find(" ") + 1);
		}
		else 
		{
			text.erase(0, text.find(" ") + 1);
		}
		
	}
		
		
	cout << "\nthe longest word consists of : "<< length<<" characters\n";
}
