#pragma once
#include <iostream>

using namespace std;

class ACCOUNT
{
private:
	float balance;	// 当前账户余额
public:
	// 开设账户，初始金额为amount
	ACCOUNT(float amount) {
		balance = amount;
	};
	// 往账户中存款，金额为amount
	void deposit(float amount) {
		balance += amount;
	};
	// 从账户中取款，金额为amount
	int withdraw(float amount) {
		if (amount > balance) {
			return 0;
		}
		else {
			balance -= amount;
			return 1;
		}
	};
	// 查询账户余额
	float get_balance() {
		return balance;
	};
};

// 主函数
int main_1_4_1() {
	// 开设账户
	ACCOUNT acc1(500);
	ACCOUNT acc2(1500);
	// 存款与取款
	acc1.deposit(255.5);
	acc2.deposit(500);
	acc2.withdraw(700);
	acc1.withdraw(700);
	acc2.withdraw(350);
	// 查询余额
	cout << "acc1_balance: " << acc1.get_balance() << endl;
	cout << "acc2_balance: " << acc2.get_balance() << endl;
	return 0;
}
