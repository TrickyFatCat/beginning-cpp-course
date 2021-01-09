#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message {};
    string message_encrypted {};

    cout<<"Welcome to the Cipher'O'Tron v1.0!"<<endl;
    cout<<"Please enter your secret message:"<<endl;
    getline(cin, message);

    cout<<"Encrypting message..."<<endl;

    for(auto character: message)
    {
        int new_char_pos = alphabet.find(character);

        if (new_char_pos != string::npos)
        {
            message_encrypted += key.at(new_char_pos);
        }
        else
        {
            message_encrypted += character;
        }
        
    }

    cout<< "Done!"<<endl;
    cout<< "Encrypted message:"<<endl;
    cout<< "-------------------------------\n";
    cout<< message_encrypted<<endl;
    cout<< "-------------------------------\n;

    cout<<endl;
    return 0;
}