#include <iostream>

using namespace std;

string lowerCase (string firstAnswer){
    for (int i = 0; i < firstAnswer.size(); i++)
    {
        firstAnswer[i] = tolower(firstAnswer[i]);

        return firstAnswer;
    }
}

void isMenuCalled(float accountBalance, float lastWithdraw, float cashAmount){

    cout << "========= ACCOUNT STATUS ========= \n";
    cout << "Account currently balance: " << accountBalance << endl;
    cout << "Last withdraw's amount: " << lastWithdraw << endl;
    cout << "Amount in cash" << cashAmount << endl;
    cout << "Do you wish to: Go back, Deposit, Withdraw?";
    
}

int main() 
{
    
    // Objective of the app : Check balance, deposit, withdraw, show menu

    string firstAnswer;
    float userAccountBalance = 10000;
    float userLastWithdraw = 0;
    float userCashAmount = 1500;

    cout << "$ Pedro's Bank $ \n";
    cout << "Welcome to Pedro's Bank, the most trustable bank in the whole world \n";
    start:
    cout << "What do you wish to do today?\n(Check Account Status, Deposit or Withdraw)? \n";
    getline(cin, firstAnswer);

    lowerCase(firstAnswer);

    while (firstAnswer != "check account status" && firstAnswer != "deposit" && firstAnswer != "withdraw"){   //In case of firstAnswer is different from the selected ones
        firstAnswer.clear(); //This is to avoid infinity loop, and reset it
        cout << "Invalid command, please select one of the following: \n";
        cout << ("Check Account Status, Deposit or Withdraw)? \n");
        getline(cin, firstAnswer);
    }

    if(firstAnswer == "check account status"){
        isMenuCalled(userAccountBalance, userLastWithdraw, userCashAmount);

    }
    else if(firstAnswer == "deposit"){

        float depositAmount;
        char confirmationDeposit;

        howmanydeposit:

        cout << "How many you wish to deposit?\n";
        cin >> depositAmount;
        cout << "\nDo you wish to confirm the deposit of " << depositAmount << " ? (y/n)";
        cin >> confirmationDeposit;

        confirmationDeposit = tolower(confirmationDeposit);


        if(confirmationDeposit == 'y'){
           cout << "Awesome, the amount of " << depositAmount << " have been added to your balance";
           userAccountBalance += depositAmount;
           goto start;
        }
        else if(confirmationDeposit == 'n'){
            goto start;
        }
        else{
            goto howmanydeposit;
        }
            

    }
    else {
        float withdrawAmount;
        char confirmationWithdraw;

        howmanywithdraw:

        cout << "How many do you wish to Withdraw?: ";
        cin >> withdrawAmount;
        cout << "Do you wish to confirm a Withdraw of " << withdrawAmount << " ? (y/n)";
        cin >> confirmationWithdraw;
        
        confirmationWithdraw = tolower(confirmationWithdraw);
        
        switch (confirmationWithdraw)
        {
        case 'y':
            if (withdrawAmount > userAccountBalance)
            {
                cout << "You do not have amount enough for this transaction\n";
                withdrawAmount=0;
                goto start;
            }
            else{
                cout << "Awesome, the amount of " << withdrawAmount << " was withdrawl from your account\n";
                userLastWithdraw = withdrawAmount;
                userAccountBalance -= withdrawAmount;
                userCashAmount += withdrawAmount;
                goto start;
            }
            break;
        case 'n':
            goto howmanywithdraw;
            
        
        default: 
            cout << "Invalid Input, returning to Home...\n";
            goto start;

        }

    }
            
        return 0;
}

    
    
