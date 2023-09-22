#include<bits/stdc++.h>
using namespace std;
class decrypt
{
private:
    int key;
    string text;
public:
    void decipher();
   
};

void decrypt::decipher(){
    cout<<"\n\nenter numeric key: \n\n";
    cin>>key;
    cout<<"\n\nenter cipher text: \n\n";
    cin>>text;

    for(int i=0;i<text.length();i++){
        if (isupper(text[i])){
            text[i]=tolower(text[i]);
        }
        text[i]=char(int(text[i]+(26-key) -97)%26+97);
    }
    cout<<"\n\ndecrypted text: \n\n"<<text<<"\n\nyour message is decrypted enjoy! reading your private message\n\n";

}