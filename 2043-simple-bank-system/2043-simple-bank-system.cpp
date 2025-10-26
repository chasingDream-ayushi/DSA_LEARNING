class Bank {
private:
    vector<long long> accounts;   

public:
    
    Bank(vector<long long>& balance) {
        accounts = balance;
    }

   
    bool isValid(int account) {
        
        return account >= 1 && account <= this->accounts.size();
    }

    
    bool withdraw(int account, long long money) {
        if (!isValid(account)) return false;
        if (accounts[account - 1] < money) return false;
        accounts[account - 1] -= money;
        return true;
    }

    
    bool deposit(int account, long long money) {
        if (!isValid(account)) return false;
        accounts[account - 1] += money;
        return true;
    }

    
    bool transfer(int account1, int account2, long long money) {
        if (!isValid(account1) || !isValid(account2)) return false;
        if (accounts[account1 - 1] < money) return false;
        accounts[account1 - 1] -= money;
        accounts[account2 - 1] += money;
        return true;
    }
};
