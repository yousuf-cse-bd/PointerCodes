/**
 * @file SmartPointer2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Shared smart pointer
 * @version 0.1
 * @date 2023-03-05
 * @since SunDay; 11:00 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <memory>
#include <vector>
#pragma pack(1)
using namespace std;

class Interface{
private:
	friend ostream &operator<< (ostream &output, const Interface &interface){
		interface.print(output);
		return output;
	}
protected:
	virtual void print(ostream &output) const = 0;
public:
	Interface(void){
//		cout<<"Interface constructor called"<<endl;
	}
	virtual ~Interface(void){
//		cout<<"~Interface destructor called"<<endl;
	}
};

class Account : public Interface{
private:
	static constexpr const char *const defName{"Unnamed Account"};
	static constexpr const double defBalance {0.0};
protected:
	string name{};
	double balance{};

public:
	Account(const string_view &name = defName, const double &balance = defBalance):name{name}, balance{balance}{
		/*Default paramiterized constructor*/
	}
	
	virtual bool deposite(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	virtual ~Account() = default;
	
private:
	virtual void print(ostream &output)const override{
		output<<"Account["<<name<<": "<<balance<<"]";
	}
};

class CheckingAccount final : public Account{
private:
	static constexpr const char *const defName{"Unnamed CheckingAccount"};
	static constexpr const double defBalance {0.0};
public:
	CheckingAccount(const string_view &name, const double &balance):Account{name, balance}{
		
	}
	virtual bool deposite(double amount){
		if(amount > 0){
			balance += amount;
			return true;
		}
		else{
			return false;
		}
	}
	virtual bool withdraw(double amount){
		if(balance - amount >= 0){
			balance -= amount;
			return true;
		}
		else{
			return false;
		}
	}
private:
	virtual void print(ostream &output)const override{
		output<<"CheckingAccount:["<<name<<": "<<balance<<"]";
	}
};

class SavingsAccount: public Account{
private:
	static constexpr const char *const defName{"Unnamed SavingAccount"};
	static constexpr const double defBalance {0.0};
	static constexpr const double defIntRate{0.0};
protected:
	double intRate{};
public:
	SavingsAccount(const string_view &name, const double &balance, const double &intRate)
	 :Account{name, balance}, intRate{intRate}{
		
	}

	virtual bool deposite(double amount) override {
		return true;
	}
	virtual bool withdraw(double amount) override {
		return true;
	}
	
	virtual ~SavingsAccount(void) = default;
private:
	virtual void print(ostream &output) const override{
		output<<"SavingsAccount:["<<name<<": "<<balance<<": "<<intRate<<" %]";
	}
};

class TrustAccount final: public SavingsAccount{
private:
	static constexpr const char *const defName{"Unnamed TrustAccount"};
	static constexpr const double defBalance {0.0};
	static constexpr const double defIntRate {0.0};
	static constexpr double bonusAmount {50.00};
	static constexpr double bonusThreshold {5000.00};
	static constexpr int maxWithdrawals {3};
	static constexpr double maxWithdrawalsPercent {0.2};
	int withdrawalCount{0};
public:
	TrustAccount(const string_view &name = defName, const double &balance = defBalance,
		const double &intRate = defIntRate)
		:SavingsAccount{name, balance, intRate}, withdrawalCount{0}{
			
	}
	virtual bool deposite(double amount) override{
		if(amount >= bonusThreshold){
			amount += bonusAmount;
		}
		return SavingsAccount ::deposite(amount);
	}
	virtual bool withdraw(double amount) override {
		if(withdrawalCount > maxWithdrawals || amount > balance*maxWithdrawalsPercent){
			return false;
		}
		else{
			++withdrawalCount;
			return SavingsAccount::withdraw(amount);
		}
	}
	
	virtual ~TrustAccount(void) = default;
private:
	virtual void print(ostream &output) const override{
		output<<"TrustAccount:["<<name<<": "<<balance<<": "<<intRate<<" %: "<<withdrawalCount<<"]";
	}
};


int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	shared_ptr <Account> acc1 = make_shared <CheckingAccount> ("Larry", 1000);
	shared_ptr <Account> acc2 = make_shared <SavingsAccount> ("Curly", 6000, 5.0);
	shared_ptr <Account> acc3 = make_shared <TrustAccount> ("Moe", 1000, 6.0);
//	cout<<*acc1<<endl;
//	cout<<*acc2<<endl;
//	cout<<*acc3<<endl;
	cout<<"Counter: "<<acc1.use_count()<<endl;
	vector <shared_ptr <Account>> accounts{};
	accounts.push_back(acc1);
	accounts.push_back(acc2);
	accounts.push_back(acc3);
	for(const auto &acc: accounts){
		cout<<*acc<<endl;
		cout<<"Use count: "<<acc.use_count()<<endl;
	}
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
