#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    const string result_underliner (10, '-');
    string message {};
    string message_encrypted {};
    string message_decrypted {};

    cout<<"Welcome to the Crypto'O'Tron v1.0!"<<endl;
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
    cout<< result_underliner<<endl;
    cout<< message_encrypted<<endl;
    cout<< result_underliner<<endl;

    cout<<"Decrypting message..."<<endl;

    for (auto character: message_encrypted)
    {
        int new_char_pos = key.find(character);

        if (new_char_pos != string::npos)
        {
            message_decrypted += alphabet.at(new_char_pos);
        }
        else
        {
            message_decrypted += character;
        }
    }

    cout<< "Done!"<<endl;
    cout<< "Decrypted message:"<<endl;
    cout<< result_underliner<<endl;
    cout<< message_decrypted<<endl;
    cout<< result_underliner<<endl;

    cout<<endl;
    return 0;
}