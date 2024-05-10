#include <bits/stdc++.h>
using namespace std;

string Ceasar(string text, int k)
{
    string result = "";
    int n = text.length();
    for(int i = 0; i < n; i++)
    {
        if(isupper(text[i])) // uppercase
            result += char(int(text[i] + k - 65) % 26 +65);
        else // lowercase
            result += char(int(text[i] + k - 97) % 26 +97);
    }
    return result;
}
int main()
{
    string s;
    cout<<"Nhap text:";
    getline(cin, s);
    int k = 5;
    cout << "Text : " << s;
    string e = Ceasar(s, k);
    cout << "\nEncrypt: " << e;
    cout << "\nDecrypt: " << Ceasar(e, -k);
}
