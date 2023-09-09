#include <iostream>
#include "encrypt.cpp"
#include "decrypt.cpp"

using namespace std;

int main()
{
    int choice;
    encrypt e;
    decrypt d;
    cout << "WELCOME USER!!!\n what you want to do enter the number accordingly\n1. encrypt\n2. decrypt\n\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        e.cipher();
        break;
    case 2:
        d.decipher();
        break;
    default:
        cout << "invalid choice\n";
    }

    return 0;
}