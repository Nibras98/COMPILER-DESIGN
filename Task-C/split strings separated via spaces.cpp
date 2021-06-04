
#include <bits/stdc++.h>
using namespace std;

// A quick way to split strings separated via spaces.
void simple_tokenizer(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }
}

int main(int argc, char const* argv[])
{
    string a = "Hello World";
    // Takes only space separated C++ strings.
    simple_tokenizer(a);
    cout << endl;
    return 0;
}
