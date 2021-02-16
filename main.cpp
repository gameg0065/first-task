#include <iostream>

using namespace std;

#define MinLengthOfName 3
#define SingleSymbolLength 1
#define GreetingText "Sveikas,"

void PrintResult(string name, string greetings);
string GetName();

int main()
{

    PrintResult(GetName(), GreetingText);
}

string GetName()
{
    string name;
    do
    {
        cout << ((name.length() < MinLengthOfName && !name.empty()) ? "Enter valid name:" : "Enter your name:") << endl;
        cin >> name;
    } while (name.length() < 3);

    name[0] = toupper(name[0]);

    return name;
}

void PrintResult(string name, string greetings) {
    char symbol = '*';

    string defaultLine(name.length() + SingleSymbolLength * 6 + greetings.length(), symbol);
    string secondLine = symbol + string(name.length() + SingleSymbolLength * 4 + greetings.length(), ' ') + symbol;
    string mainLine = symbol + string(SingleSymbolLength, ' ') + greetings + string(SingleSymbolLength, ' ') + name + "!" + string(SingleSymbolLength, ' ') + symbol;
    string defaultLineCopy(defaultLine);
    string secondLineCopy(secondLine);

    string result[] = {defaultLine, secondLine, mainLine, secondLineCopy, defaultLineCopy};

    for (int i = 0; i < 5; i++) {
        cout << result[i] << endl;
    }
}