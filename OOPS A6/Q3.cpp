#include<iostream>
using namespace std;

class Account {
    const long accNo;
    double balance;
    long txnID;
    static int id;

public:
    Account(long a,double b):accNo(a),balance(b){txnID=0;}

    long depositAmount(const long &to,const long&,const double &amt){
        if(accNo==to){ balance+=amt; return txnID=++id;}
        return -1;
    }

    long creditAmount(const long&,const long &from,const double &amt){
        if(accNo==from){ balance-=amt; return txnID=++id;}
        return -1;
    }

    void displayDetails() const {
        cout<<accNo<<" "<<balance<<" "<<txnID<<endl;
    }
};
int Account::id=0;
int main(){
    Account a(1,1000);
    a.depositAmount(1,0,200);
    a.displayDetails();
}