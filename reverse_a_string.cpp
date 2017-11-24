#include "stdafx.h"
#include<cstring>
#include<string>
#include<cctype>
#include<stdlib.h>

void change(char* ch);
using namespace std;
int main()
{
	int i = 0;
	string str;
	cin >> str;
	size_t len = strlen(str.c_str());
	char *ch = new char[len + 1];		
	strncpy(ch, str.c_str(), len + 1);/*get the string lenth and copy it to the char array*/
	change(ch);
	cout << ch << endl;
	//char ch1[] = "ploikujyhtgrfedwsqa";
	//change(ch1);
	//cout << ch1 << endl;
	while (1);
    return 0;
}

void change(char* ch)
{
	int k=0;
	while (1)
	{
		if (ch[k] == '\0')
			break;
		k++;/*find the max number*/
	}
	for ( int i = 0; i < (k/2); i++)/*find the middle one*/
	{
		char temp;
		temp = ch[i];
		ch[i] = ch[k-1 - i];
		ch[k-1 - i] = temp;

	}
	ch[k] = '\0';
}