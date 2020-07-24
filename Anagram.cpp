#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	string s1,s2;
	cin>>s1>>s2;
	for(i=0;i<s1.length();i++)
	{
		for(j=0;j<s2.length();j++)
		{
			if(s1[i]==s2[j])
			{
				s2[j]='0';
			}
		}
	}
	string s3;
	for(i=0;i<s2.length();i++)
	s3[i]='0';
	for(i=0;i<s2.length();i++)
	{
		if(s2[i]!=s3[i])
		break;
	}
	if(i==s2.length())
	cout<<"\nAnagram";
	else
	cout<<"\nNot Anagram";
	return 0;
}

int arr[26]={0}
for(i=0;i<s1.length(),i++)
{
	arr[s1[i]-'a']++;
	arr[s2[i]-'a']--;
}
for(i=0;i<26;i++)
if(arr[i])
return 0;
return 1;
