# jumble-words
#include<bits/stdc++.h>
using namespace std;
string sortString(string word)
{
transform(word.begin(),word.end(),word.begin(),::toupper);
sort(word.begin(),word.end());
return word;
}
void jumbledString(string jumble)
{
	string checkPerWord="";
	string userEnteredAfterSorting;
	userEnteredAfterSorting;
	userEnteredAfterSorting=sortString(jumble); 
  
	ifstream words("words.txt");
	
	if(words)
	{
		while(getline(words,checkPerWord))
		{ 
		string ch=sortString(checkPerWord);
		if(ch==userEnteredAfterSorting){
		cout<<checkPerWord<<endl;
	}
}
words.close();
}
}
int main()
{
	string string="tac";
	jumbledString(string);
	return 0;
}
