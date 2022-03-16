#include <iostream>
#include <string>
using namespace std;

int main(){
    int num,i,p1,p2,j;
    string s,t;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        p1=0;
        p2=0;
        cin>>s>>t;
        while(p2!=t.size()){
            if(s[p1]==t[p2]){
                p1++;
                p2++;

            }
            else{
                p2++;
            }
        }
        if(p1==s.size()){
            cout<<"Yes\n"<<endl;
        }
        else{
            cout<<"No\n"<<endl;
        }
    }
    return 0;
}
