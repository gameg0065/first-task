#include <iostream>

using namespace std;

#define MinLengthOfName 3
#define MaxNumberOfLines 20
#define SingleSymbolLength 1
const string GreetingTexts[2] = {"Sveikas,", "Sveika,"};

string GetName();
int GetNumberOfLines(string name, string greetings);
void PrintResult(string name, string greetings, int numberOfLines);
bool IsGenderMale(string name);

int main()
{
    string name = GetName();
    string greetingText = GreetingTexts[(IsGenderMale(name) ? 0 : 1)];
    PrintResult(name, greetingText, GetNumberOfLines(name, greetingText));
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

int GetNumberOfLines(string name, string greetings)
{
    int minNumber = name.length() + SingleSymbolLength * 6 + greetings.length();
    int maxNumber = minNumber + MaxNumberOfLines;
    int userNumber = 0;
    do
    {
        cout << "Enter number of lines between " << minNumber << " and " << maxNumber << endl;
        cin >> userNumber;
    } while (minNumber > userNumber || userNumber > maxNumber);

    name[0] = toupper(name[0]);

    return userNumber - minNumber;
}

bool IsGenderMale(string name) {
    char lastChar = name[name.length() - 1];

    if (lastChar == 'a' || lastChar == 'e')
    {
        return false;
    }

    return true;
}

void PrintResult(string name, string greetings, int numberOfLines) {
    char symbol = '*';

    string defaultLine(name.length() + SingleSymbolLength * 6 + numberOfLines + greetings.length(), symbol);
    string secondLine = symbol + string(name.length() + SingleSymbolLength * 4 + numberOfLines + greetings.length(), ' ') + symbol;
    string mainLine = symbol + string(SingleSymbolLength + numberOfLines / 2, ' ') + greetings + string(SingleSymbolLength, ' ') + name + "!" + string(SingleSymbolLength + numberOfLines / 2 + numberOfLines % 2, ' ') + symbol;

    string result[] = {defaultLine, secondLine, mainLine, secondLine, defaultLine};

    for (int i = 0; i < 5; i++) {
        cout << result[i] << endl;
    }
}