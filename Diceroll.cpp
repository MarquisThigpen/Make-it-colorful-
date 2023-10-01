#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std; 

int main()
        {
            unsigned seed;
            seed = time(0);
            srand(seed);

            string player1;
            string player2;

            cout << "Enter player 1 name "; cin >> player1;
            cout << "Enter player 2 name "; cin >> player2;

            int player1num = rand() % 20 +1; 
            int player2num = rand() % 20 +1; 

            if(player1num == 1)
            {
                cout << "\033[31mCritical Failure\033[0m\n" << player1 << " rolled a " << player1num << "\n";
            }
                else if(player1num == 20)
                {
                    cout << "\033[32mCritical Success\033[0m\n" << player1 << " rolled a " << player1num << "\n";
                }
                 else
                {
                    cout << player1 << " rolled a " << player1num << "\n";
                }
                
                
                
                if(player2num == 1)
            {
                cout << "\033[31mCritical Failure\033[0m\n" << player2 << " rolled a " << player2num << "\n";
            }
                else if(player2num == 20)
                {
                    cout << "\033[32mCritical Success\033[0m\n" << player2 << " rolled a " << player2num << "\n";
                }
                 else
                {
                    cout << player2 << " rolled a " << player2num << "\n";
                }
            if (player1num > player2num)
            {
                cout << player1 << " Wins!!!";
            }
            else if(player2num > player1num)
            {
                 cout << player2 << " Wins!!!";
            }
            else
             {
                cout << "Both players are Evenly Matched";
             }





            
            }













        