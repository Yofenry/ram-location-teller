#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	string ramlocation;
	cout<<"Type In Anything And We Will Tell You The Memory Location Of It In Your R.A.M ";
	cin>>ramlocation;
	if(ramlocation == "MEME")
	{
		cout<<"Nah Mate, I Aint Telling Ya Because You Wrote Meme In All Caps";
		return 0;
	}
	else
	{
		cout<<&ramlocation;
	}
	return 0;
}
