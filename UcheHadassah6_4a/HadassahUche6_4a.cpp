/*
Encryption: a) Write an encryption program which reads a string 
(containing only alphabetic characters and spaces) and encrypts it using the following coding technique: 
replace an ‘a’ with a ‘b’, ‘b’ with ‘c’ and so on, up to ‘z’ which is replaced 
by an ‘a’. The space ‘ ‘ is replaced by a star ‘*’.*/#include<iostream>#include<cstring>using namespace std;const int MAX = 100;int main(){	char word[MAX];	int i;	cout << "Enter the word you wish to encrypt:";	cin.getline(word,MAX);	for (i = 0; word[i] != '\0'; i++)//changes the alphabet	{		if (word[i] == ' ')		{			word[i] = '*';		}		else		{			word[i]++;			if (word[i] > 'z')			{				word[i] = 'a';			}		}	}	cout << "The word encrypted is:";	for (int j = 0; j < i; j++)	{		cout << word[j];	}	cout << endl;}