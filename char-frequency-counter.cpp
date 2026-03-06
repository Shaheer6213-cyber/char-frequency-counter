#include<iostream>
using namespace std;
int main()
{
	char sentence[35];
	
	cout<<"Enter a sentence";
	cin.getline(sentence,30);
	cout<<sentence;
	
	int countAlpha=0;
	int countUpper=0;
	int countLower=0;
	int countDigit=0;
	int countSpecial=0;
	
	for(int i=0; i<sentence[i]!='\0'; i++)//i<30 ya yahan pa  masla kry ga. is liay ya kam kia. 
	{
		if(isalpha(sentence[i]))
		{
			countAlpha++;
			
			if(isupper(sentence[i]))
			{
				countUpper++;
			}
			else
			{
				countLower++;
			}
		}
		
		else if(isdigit(sentence[i]))
		{
			countDigit++;
		}
		else
		{
			countSpecial++;
		}
		
	}
	cout<<"\n Alphabets are:"<<countAlpha<<endl;
	cout<<"\n lower Alphabets are:"<<countLower<<endl;
	cout<<"\n  upper Alphabets are:"<<countUpper<<endl;
	cout<<"\n Digits are:"<<countDigit<<endl;
	cout<<"\n Special characters are:"<<countSpecial<<endl;
	
}
