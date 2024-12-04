#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, s = 5, count = 0;
    cin>>n;
    while(n > 0){
        if(n >= s){
            n -= s;
            count++;
        }else{
            s--;
        }
    }
    cout<<count<<endl;
    return 0;
}
