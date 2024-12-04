#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l = 0, u = 0;
    for(int i = 0; i < s.length(); i++){
        if(int(s[i])>= 97)
            l++;
        else 
            u++;
    }
    if(l > u || l == u){
        for(int i = 0; i < s.length(); i++){
            if(int(s[i])<= 90){
                s[i] = char(int(s[i]) + 32);
            }
        }
    }else{
        for(int i = 0; i < s.length(); i++){
            if(int(s[i])>= 97){
                s[i] = char(int(s[i]) - 32);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}