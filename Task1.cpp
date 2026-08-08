#include <iostream>
#include<vector>
#include<string>
using namespace std;
class customer
{
private:
    int CustomerId;
    string CustomerName;
    long long Phone;
    string Email;
    string address;

public:
    customer()
    {
        
        CustomerId = 1212;
        CustomerName = "Anwar";
        Phone = 992299393;
        Email = "anwaralam@gmail.com";
        address = "Sultan Nagar chas ";
    }
    
};
class Transaction
{
private:
    int TransactionId;
    string TransactionType;
    int amount;
    

public:
    Transaction(int t, string a, int b)
    {
        TransactionId = t;
        amount = b;
        TransactionType = a;
    }
    void display()
    {
        cout << "Transaction Id =" << TransactionId << endl;
        cout << "Amount = " << amount << endl;
        cout << "Account Type = " << TransactionType;
        cout << endl;
    }
};

class Account
{
private:
    long long AccountNo = 94948110000634;
    int Balance = 5000;
    vector<Transaction>transactions;

public:
    int Password = 4237;
    string name = "Md Anwar Alam";
    void balanceCheck()
    {
        cout << "Bank Balance = " << Balance<<endl;
    }
    void Deposit()
    {
        int temp;
        cout<<"Enter Pin = ";
        cin>>temp;
        if (temp == Password)
        {
            int amount;
            cout << "Enter the amount = ";
            cin >> amount;
            Balance += amount;
            Transaction t(101,"Deposite",amount);
            transactions.push_back(t);
            cout<<endl;
            cout<<"Your Bank Balance = "<<Balance<<endl;
        }
        else
        {
            cout << "Invalid Password";
        }
    }
    void Withdraw()
    {
        int temp;
        cout << "Enter password = ";
        cin >> temp;
        if (temp == Password)
        {
            int amount;
            cout << "Enter the Amount = ";
            cin >> amount;
            if (amount <= Balance)
            {
                Balance -= amount;
                Transaction t(102,"Withdraw",Balance);
                
                transactions.push_back(t);
                cout<<endl;
                cout<<"Your Current Bank Balance = "<<Balance<<endl;
            }
            else{
                cout << "Insufficient Funds " << endl;
            cout << "No Transaction Record";
            }
        }
        else
        {
            cout << "Invalid Password";
        }
    }
    void showtransaction(){
        for (Transaction t : transactions)
        {
            t.display();
            cout<<endl;
        }
}

};
int main(){
    Account a1;
    a1.Deposit();
    a1.Withdraw();
    a1.showtransaction();

}