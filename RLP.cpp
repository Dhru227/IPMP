#include<iostream>
#include<string>
using namespace std;

string encodes(string s)
{
    string encoding = "";
    int counting=0;
    for (int n = 0; s[n]; n++)
    {
        counting = 1;
        while (s[n] == s[n + 1]) {
            counting++, n++;
        }

        encoding += to_string(counting) + s[n];
    }
    return encoding;
}

int main()
{
    string s ;
    cout<<"Enter the String: "<<endl;
    cin>>s;
    cout<<encodes(s);
    return 0;
}
