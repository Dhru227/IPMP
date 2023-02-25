#include <bits/stdc++.h> 
using namespace std; 
void preProcess(char *p, int *table, int n) { 
    table[0] = 0;
    int i = 0, j = 1;
    while (j < n) {
        if (p[i] == p[j]) {
            table[j] = i + 1;
            i++; 
            j++;
        } else {
            if (i != 0) {
                i = table[i - 1];
            } else {
                table[j] = 0;
                j++;
            }
        }
    } 
} 
int main() {
    char s[] = "abcaabcab";
    char p[] = "abcab";
    int n = strlen(s);
    int m = strlen(p);
    
    int table[m];
    preProcess(p, table, m);
    int i = 0;      
    int j = 0;      
    bool found = false;
    while (i < n) {
        if (s[i] == p[j]) {
            i++; 
            j++;
        } else {
            if (j != 0)  {
                j = table[j - 1];
            } else {
                i++;
            }
        }
        
        if (j == m) {
            found = true;
            break;
        }
    }
    if (found)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    
    return 0; 
}