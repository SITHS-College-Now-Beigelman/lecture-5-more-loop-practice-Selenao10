/* Start your program by asking the user:
How much money their bank account had at the start of the day AND how many bank transactions were done that day.
Then in a loop, for each transaction do the following:
Ask for the type of transaction – debit or credit. Also ask for the amount of the transaction.
If debit, subtract the amount from the account. If credit, add the amount.
Print out the total in the account after this transaction.
When all transactions are complete:
Print the total in the account at the end of the day.	
Required Extra Credit: Print total debit and total credit amounts for the day.
*/

//Selena Ouyang
//Reviewing Loops
//10-7-2024

#include <iostream>

using namespace std;

int main ()
{
    int startMoney;
    int numTransactions;
    char typeTransaction;
    int moneyLeft; 
    int amount;
    char Debit = 'D';
    char Credit = 'C';
    int totalDebit;

    cout << "How much money was in your bank account at the start of the day?" << endl; //user direction to input starting amount
    cin >> startMoney;
    cout << "How many bank transactions were done?" << endl; //user direction to input number of bank transactions
    cin >> numTransactions; 

    while (numTransactions > 0) //while the number of transactions is greater than 0, the loops runs
    {
        cout << "Type of Transaction. Enter D for Debit and C for Credit." << endl;
        cin >> typeTransaction;
        cout << "Enter amount of Transaction:" << endl;
        cin >> amount;
            if (typeTransaction == Debit)
            {    cout << startMoney - amount << endl;
                startMoney = startMoney - amount;
                totalDebit = amount; 
                totalDebit = totalDebit + amount; 
            }
            if (typeTransaction == Credit)
            {    cout << startMoney + amount << endl;
                startMoney = startMoney + amount;
            }
    cout << "Number of Transactions left: " << numTransactions - 1 << endl; //Displays number of transactions left
    numTransactions = numTransactions - 1;
    }
    
    cout << "Total: " << startMoney; 
    return 0; 
}