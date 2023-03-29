#include <iostream>
using namespace std;

string caesarCipher(string s, int k)
{
    string str = "";
    k = k%26;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s.at(i);
            if (isupper(ch))
            {
                char newChar =(ch + k);
                cout<<"The value of newChar is : "<<newChar<<endl;
                if (newChar > 90)
                {
                    newChar = (char)((newChar % 90) + 64);
                }
                str += (char) newChar;
            }
            else if (islower(ch))
            {
                char newChar = (ch + k);
                cout<<"The value of newChar is : "<<newChar<<endl;
                if (newChar > 122)
                {
                    newChar = (char)((newChar % 122) + 96);
                }
                str += (char) newChar;
            }
            else
            {
                str += ch;
            }
        }
    return str;
    }


int main()
{
    string str;
    cout << "Enter the string str" << endl;
    getline(cin, str);
    cout << "The string is : " << str << endl;
    cout << "Enter the value of k" << endl;
    int k;
    cin >> k;
    cout << "The value of k is : " << k << endl;
    string newstr = caesarCipher(str, k);
    cout << "The new string is : " << newstr << endl;
}