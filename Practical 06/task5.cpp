#include <iostream>
#include<string>

using namespace std;

int main()
{
    string a,b;
    cout<<"Enter the 1st string : ";
    getline(cin,a);
    cout<<"Enter the 2nd string : ";
    getline(cin,b);
    
    int s1,s2,f;
    s1=a.size() -1;
    s2=b.size() -1;
    
    if (s1!= s2)
        {
            cout<<"Strings are not equal";
            
        }
    else
        {
            for(int i=0;i<=s1;i++)
                {
                    if(a[i]!=b[i])
                        {
                            f=0;
                            break;
                        }
                }
            (f==0)?cout<<"Strings are not equal":cout<<"Strings are equal" ;
        }
    return 0;    
}
