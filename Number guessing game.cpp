#include <string>
#include <iostream>
#include <random>

using namespace std;

int main()
{
    while (true)
    {
        string code = "";

        for ( int i = 0; i <4; i++)
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<> rand_num(0,9);

            code += to_string(rand_num(gen));
        }

        cout << "New line Generated! \n";

        string guess;
        while (guess != code)
        {
            cout << "Enter your guess:";
            getline(cin, guess);

            cout << "You guessed " << guess << "\n";

            for (int i = 0; i < 4; i++)
            {
                if (guess[i] == code[i])
                {
                    cout << guess[i];
                    
                }
                else if (code.find(guess[i]) != string:: npos)
                {
                    cout << "(" << guess[i] << ")";
                }
                else
                {
                    cout << "x";
                }
            }
            cout  << "\n";
        }
        cout << "You got it correct!\n";
    }
}