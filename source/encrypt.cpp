#include<bits/stdc++.h>
using namespace std;
class encrypt
{
private:
    int key;
    string text;
public:
    void cipher();
   
};

void encrypt::cipher(){
    cout<<"\n\nenter numeric key between 0-26: \n\n";
    cin>>key;
    cout<<"\n\nenter text you want to encrypt:\n \n";
    cin.ignore();
    getline(cin,text);

    for(int i=0;i<text.length();i++){
        if(text[i] == ' '){
            continue;
        }
        if (isupper(text[i])){
            text[i]=tolower(text[i]);
        }
        text[i]=char(int(text[i]+key -97)%26+97);
    }
    cout<<"\n\nencrypted text: \n"<<text<<"\n\n your message is safe now!!!\n\n";

}