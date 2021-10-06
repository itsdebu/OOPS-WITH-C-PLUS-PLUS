#include<iostream>
#include<string>
using namespace std;

int main()
{
		string str;
		cout<<"Enter the String: \n";
		getline(cin,str);
		
		int len = str.length();
		int flag =0;
		
		for(int i=0; i<=len/2; i++)
		
		{
			if(str[i] != str[len-1-i])
				{
					flag=1;
					break;
				}	
		}
		
		
		if(flag == 1)
		{
			cout<<"Not a Palindrome"<<endl;
		}
		else
		{
			cout<<"It is a Palindrome"<<endl;
		}
		
		return 0;
}
