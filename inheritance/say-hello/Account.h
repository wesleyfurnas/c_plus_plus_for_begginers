#ifndef _ACCOUNT_H
#define _ACCOUNT_H
class Account
{
private:
    double amount;
public:
    void deposit(double amount);
    void withdraw(double amount);
    Account(/* args */);

    ~Account();
};



#endif