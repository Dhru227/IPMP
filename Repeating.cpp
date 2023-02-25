# include<iostream>
# include<climits>
 
using namespace std;


int first_non_rep(string s) {
    int fi[256]; 


    for(int i = 0; i<256; i++)
        fi[i] = -1;


    for(int i = 0; i<s.length(); i++) {
        if(fi[s[i]] == -1) {
            fi[s[i]] = i;
        }else {
            fi[s[i]] = -2;
        }
    }
 
    int res = INT_MAX;
 
    for(int i = 0; i<256; i++) {


        if(fi[i] >= 0)
            res = min(res, fi[i]);
    }


    if(res == INT_MAX) return -1;
    else return res;
}
 
int main(){
    string s;
      cout<<"ENTER string: ";
      cin>>s;
      cout<<s<<endl;
    int firstIndex = first_non_rep(s);
    if (firstIndex == -1)
        cout<<"Either all characters are repeating or string is empty";
    else
        cout<<"First non-repeating character is "<< s[firstIndex];
     
    return 0;
}