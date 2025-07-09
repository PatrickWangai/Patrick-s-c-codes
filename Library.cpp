/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:creating a Library management System
Date: 9/07/2025
version 1
*/
#include <iostream>
#include <string>
using namespace std;

// (i)
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// (ii) 
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int id, int books) {
        setName(n); 
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// (iii) 
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
   
    PremiumMember pm("Patrick Wangai", 0052, 8, 3500);

    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << pm.getMembershipFee() << endl;

    return 0;
}