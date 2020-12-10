#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    int sum,i=0,j=0;
    while(t--)
    {
        sum=0;
        cin >> s;
        for(i=0;i<s.length();i++)
        {
            if(isdigit(s.at(i)))
                sum += (int)s.at(i) -48;
        }
        cout << sum << "\n";
    }

}
