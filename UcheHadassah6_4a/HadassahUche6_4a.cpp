/*Name:Uche Hadassah
This program reads in a string and encrypts it. i.e a becomes b, b becomes c and so on
*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
int main()
{
	char word[MAX];
	int i;
	cout << "Enter the word you wish to encrypt:";
	cin.getline(word,MAX);
	for (i = 0; word[i] != '\0'; i++)//Loops through the sentence or word
	{
		if (word[i] == ' ')
		{
			word[i] = '*';
		}
		else
		{
			word[i]++;
			if (word[i] > 'z')
			{
				word[i] = 'a';//Goes back to a if its > z
			}
		}
	}
	cout << "The word encrypted is:";
	for (int j = 0; j < i; j++)
	{
		cout << word[j];//Outputs the encrypted word or sentence
	}
	cout << endl;
}
