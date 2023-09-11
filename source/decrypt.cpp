#include<iostream>
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
    cout<<"\n\nenter key single digit: \n\n";
    cin>>key;
    cout<<"\n\nenter cipher text lower case only: \n\n";
    cin>>text;

    for(int i=0;i<text.length();i++){
        text[i]=text[i]-key;
    }
    cout<<"\n\ndecrypted text: \n\n"<<text<<"\n\nyour message is decrypted enjoy! reading your private message\n\n";

}