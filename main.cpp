#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int change=0;
    char lastword=' ';
    for (int i = 0; i < a; i++)
    {
        char s;
        cin>>s;
        if (s==lastword)
        {
            change++;
        }
        else{
            lastword=s;
        }
    }
    cout<<change<<endl;
}