// Zahin Roja
// 12.4.17
// Homework 9: letter frequency and sort

#include <iostream>
using namespace std;
void swap (char&, char&);
int alpha[26] = {0};

int main()
{
        char letter;
        string myarray;

        cout << "Enter a line of text and end it with a period." << endl;
        getline(cin, myarray);

        for (int i = 0; i < myarray.size(); i++)
        {
                int a  = myarray.at(i);
                if(a >= 'a' && a <= 'z') alpha[a-'a']++;
                else if(a >= 'A' && a<= 'Z') alpha[a-'A']++;
        }

        cout << "Letter \t  Frequency" << endl;
        cout << "------    ---------" << endl;

        for(int i =0; i <26; i++)
        {
                if(alpha[i])
                {
                        letter = 'a' +i;
                        cout << letter << " \t   "  << alpha[i] << endl;
                }
        }
        return 0;
}
