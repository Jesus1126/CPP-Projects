#include<iostream>
#include<iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 0;
    int choice;

    do {
        std::cout << "**********************************************\n";
        std::cout << "Input 1 to show balance:\n";
        std::cout << "Input 2 to deposit funds:\n";
        std::cout << "Input 3 to withdraw funds:\n";
        std::cout << "Input 4 to exit the menu:\n";
        std::cin >> choice;

            std::cin.clear();
            fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                std::cout << "Have a good day!!\n";
                break;
            default:
                std::cout << "That is not an option, please choose a number from 1-3.\n";
                break;
        }
        std::cout << "**********************************************\n\n";
    }while (choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your current balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){
    double deposit;

    std::cout << "How much would you like to deposit?: ";
    std::cin >> deposit;

    if (deposit >= 0){
        return deposit;
    }
    else {
        std::cout << "Your deposit amount must be greater than 0.\n";
        return 0;
    }
}

double withdraw(double balance){
    double amount;

    std::cout << "Please enter the amount that you'd like to withdraw: ";
    std::cin >> amount;

    if (amount > balance){
        std::cout << "There are insufficient funds to make this withdrawal.\n";
        return balance;
    }
    else if (amount < 0){
        std::cout << "The amount should be positive.\n";
        return balance ;

    }
    else {
        return balance - amount;
    }
}

