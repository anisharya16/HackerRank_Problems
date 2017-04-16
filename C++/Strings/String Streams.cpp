#include <sstream>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

                                                                

int main()
{
    char s[1000000];
    cin >> s;
    int i,j,l;
    l=strlen(s);
    for(i=0;i<l;i++)
        {
        if(s[i]!=',')
            {
            cout<<s[i];
        }
        if(s[i]==',')
            {
            cout<<endl;
        }
    }
    return 0;
}