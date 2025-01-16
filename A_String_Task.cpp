/* 
    Problem:         
    Author: JUEL RANA
    github: Glitch-CoD3
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
        string s;
        cin>>s;
        for(int i=0 ; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        vector<char>v;
        for(int i=0 ; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='y' ){
                continue;
            }
            else{
                v.push_back('.');
                v.push_back(s[i]);
            }

            
            }
            for(auto u:v){
                cout<<u;
        }

}