#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"
#include <iostream>

int main()
{
  Account a(300);
  Account w(11);
  Account r(30);
  Account::displayAccountsInfos();
  a.displayStatus();
  w.displayStatus();
  r.displayStatus();
  a.makeDeposit(10);
  a.makeDeposit(17);
  a.makeWithdrawal(100);
  w.makeDeposit(20);
  r.makeDeposit(40);
  r.makeWithdrawal(1000);
  a.displayStatus();
  w.displayStatus();
  r.displayStatus();
  Account::displayAccountsInfos();
}
