#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    const string result_underliner (30, '-');
    string message {};
    string message_encrypted {};
    string message_decrypted {};

    cout<<"Welcome to the Crypto'O'Tron v1.0!\n"
        <<"Please enter your secret message.\n";

    getline(cin, message);

    cout<<"\nEncrypting message..."<<endl;

    for(auto character: message)
    {
        int new_char_pos = alphabet.find(character);
        char new_char {};

        if (new_char_pos != string::npos)
        {
            new_char = key.at(new_char_pos);
        }
        else
        {
            new_char = character;
        }
        
        message_encrypted += new_char;
    }

    cout<< "Done!\n"
        <<"Encrypted message:\n"
        <<result_underliner + '\n'
        <<message_encrypted + '\n'
        <<result_underliner + '\n';

    cout<<"\nDecrypting message..."<<endl;

    for (auto character: message_encrypted)
    {
        int new_char_pos = key.find(character);
        char new_char {};

        if (new_char_pos != string::npos)
        {
            new_char = alphabet.at(new_char_pos);
        }
        else
        {
            new_char += character;
        }

        message_decrypted += new_char;
    }

    cout<< "Done!\n"
        <<"Decrypted message:\n"
        <<result_underliner + '\n'
        <<message_decrypted + '\n'
        <<result_underliner + '\n';

    cout<<endl;
    return 0;
}