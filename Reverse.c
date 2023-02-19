#include <bits/stdc++.h>
using namespace std;
void reverse(string str, int k = 0)
{
    if (k == str.length()) {
        return;
    }
    reverse(str, k + 1);
    cout << str[k];
}

int main()
{
    string str = "Paint the city red";

    cout << "Reverse of the given string is ";
    reverse(str);

    return 0;
}
