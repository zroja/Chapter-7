// Zahin Roja
// November 30, 2017
// Lab number 9

#include <iostream>
using namespace std;

// Prototype
int findAndReplace(int&);

int main()
{
        int number =0;
        findAndReplace( number);
        return 0;
}
int findAndReplace(int& number)
{
        int array[6];
        int query, temp, flag;

        for (int i =0; i < 6; i ++)
        {
                cout << "Input number " << i+1 << "\t" ;
                cin>> array[i];
        }
        do
        {
                cout << "Enter a query number: " ;
                cin >> query;
                        for (int j =0; j <6 ; j++)
                        {
                                flag = 0;
                                if(array[j] == query)
                                {
                                        cout << query << " was at location " << j+1 << endl;
                                        temp = j;
                                        flag = 1;
                                        break;
                                }
                        }
                         if(flag == 0)
                {
                        cout << query << "  not in list!"<< endl;
                        cout << "Goodbye!" << endl;
                        exit(1);
                }
        cout << "Current list" << endl;
        for (int k=0; k < 6 ; k++)
        {
                 if(k==temp)
                {
                        array[k] = 0;
                }
                 cout << array[k] <<"\t " ;
        }
        } while(flag = 1);

