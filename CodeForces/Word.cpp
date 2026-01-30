#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int upper=0;
    int lower=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper>lower)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }
    cout<<s<<"\n";
}