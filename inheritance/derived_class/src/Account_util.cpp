#include "Account_util.h"
#include <iostream>
void display (const std::vector<Account> &accounts){
    std::cout<<"\n================= Accounts ==========================================" <<std::endl;
    for (const auto &acc : accounts){
        std::cout<< acc<<std::endl;
    }
}
//  Deposits supllied amount to each Account object in the vector

void deposit (std::vector<Account> &accounts, double amount ){
    std::cout<<"\n================= Depositing to Accounts =============================" <<std::endl;
    for (auto &acc: accounts){
        if(acc.deposit(amount)){
            std::cout << "Deposited " << amount << "to "<< acc <<std::endl;
        }else{
            std::cout << "Failed Deposit "<< amount << "to" << acc << std::endl;
        }
    }
}

// withdraw amount from each Account object in the vector 

void withdraw (std::vector<Account> &accounts, double amount ){
    std::cout<<"\n================= Depositing to Accounts =============================" <<std::endl;
    for (auto &acc: accounts){
        if(acc.withdraw(amount)){
            std::cout << "Withdrew " << amount << "to "<< acc <<std::endl;
        }else{
            std::cout << "Failed withdrawl of "<< amount << "from" << acc << std::endl;
        }
    }
}