#include<bits/stdc++.h>
using namespace std;



class des
{
private:
    string message;
    int *decimalMessage,*binaryMessage,*tempDecimal;
public:
    des();
    void stringToDecimal();
    void decimalToBinary();
    ~des();
};

des::des(){
    cout<<"enter message\n";
    getline(cin,message);
    stringToDecimal();
    decimalToBinary();
    
}

void des::stringToDecimal(){
    decimalMessage = new int();
    for (int i = 0; i < message.length(); i++)
    {
        int val=0;
        val= int(message[i]);
        decimalMessage[i]=val;
    }
    for (int i = 0; i < message.length(); i++)
    {
        cout<<decimalMessage[i]<<" ";
    }
    cout<<endl;
    
}

void des::decimalToBinary(){
    binaryMessage = new int(message.length());
    int value=0;
    string dval = ""; 
    for (int i = 0; i < message.length(); i++)
    {
        value=decimalMessage[i];
        int dCounter =0;
        if(value < 16 ){
            tempDecimal = new int(4);
        }else if(value > 15  && value < 257 ){
            tempDecimal = new int(8);
        }else{
            tempDecimal = new int(12);
        }
        while (value>0)
        {
            tempDecimal[dCounter]=value%2;
            value=value/2;
            ++dCounter;
        }
        
        for (int i = dCounter - 1; i >= 0; i--)
        {
            dval += to_string(tempDecimal[i]);
        }
        binaryMessage[i] = stoi(dval,0,10);
        dval = "";

    }
    for (int i = 0; i < message.length(); i++)
    {
        cout<<binaryMessage[i]<<" ";
    }
    cout<<endl;
    
    
}

des::~des()
{
    delete decimalMessage,binaryMessage,tempDecimal;
    cout<<"\n hi\n";
}

int main(){
    des o;
    return 0;
}