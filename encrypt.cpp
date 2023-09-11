#include<iostream>
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
    cout<<"\n\nenter key single digit: \n\n";
    cin>>key;
    cout<<"\n\nenter text you want to encrypt:\n \n";
    cin>>text;

    for(int i=0;i<text.length();i++){
        if (isupper(text[i])){
            text[i]=tolower(text[i]);
        }
        text[i]=text[i]+key;
    }
    cout<<"\n\nencrypted text: \n"<<text<<"\n\n your message is safe now!!!\n\n";

}