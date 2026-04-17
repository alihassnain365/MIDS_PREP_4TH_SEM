#include <iostream>
#include "LinkedList.h"
using namespace std;



int checkIfWon(LinkedList* ll)
{
    // ticket numbers form a palindrome
    if(ll->checkIfPalindrome())
    {
        if(4==ll->nodeCount() and 20 > ll->nodeSume())
        {
            return 3000;
        }
        return 2000;
    }
        
    else if(4==ll->nodeCount() and ll->nodeSume() > 20)
        return 1000;
    return 0;
}

int main()
{    LinkedList lotteryNumbers;
    int number;
    cout << "Enter 4 lottery numbers: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> number;
        lotteryNumbers.insert(number);
    }
    int prize = checkIfWon(&lotteryNumbers);
    if(prize > 0)
        cout << "Congratulations! You won $" << prize << "!" << endl;
    else
        cout << "Sorry, better luck next time!" << endl;
    return 0;
}