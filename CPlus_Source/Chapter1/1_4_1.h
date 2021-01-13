#pragma once
#include <iostream>

using namespace std;

class ACCOUNT
{
private:
	float balance;	// ��ǰ�˻����
public:
	// �����˻�����ʼ���Ϊamount
	ACCOUNT(float amount) {
		balance = amount;
	};
	// ���˻��д����Ϊamount
	void deposit(float amount) {
		balance += amount;
	};
	// ���˻���ȡ����Ϊamount
	int withdraw(float amount) {
		if (amount > balance) {
			return 0;
		}
		else {
			balance -= amount;
			return 1;
		}
	};
	// ��ѯ�˻����
	float get_balance() {
		return balance;
	};
};

// ������
int main_1_4_1() {
	// �����˻�
	ACCOUNT acc1(500);
	ACCOUNT acc2(1500);
	// �����ȡ��
	acc1.deposit(255.5);
	acc2.deposit(500);
	acc2.withdraw(700);
	acc1.withdraw(700);
	acc2.withdraw(350);
	// ��ѯ���
	cout << "acc1_balance: " << acc1.get_balance() << endl;
	cout << "acc2_balance: " << acc2.get_balance() << endl;
	return 0;
}
