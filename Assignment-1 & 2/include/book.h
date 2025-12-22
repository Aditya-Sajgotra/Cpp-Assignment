#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
using namespace std;

class Book {
public:
    string id;        
    string title;
    string author;
    bool issued;     

    Book() {}

    Book(string i, string t, string a, bool iss=false)
        : id(i), title(t), author(a), issued(iss) {}

    friend ostream& operator<<(ostream &out, const Book &b) {
        out << b.id << " " << b.title << " " << b.author << " " << b.issued;
        return out;
    }
    
    friend istream& operator>>(istream &in, Book &b) {
        in >> b.id >> b.title >> b.author >> b.issued;
        return in;
    }
};

#endif
