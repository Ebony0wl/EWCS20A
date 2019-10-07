//
//  Person.cpp
//  Class 6
//
//  Created by Ebony Warren on 10/1/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include "Person.hpp"
#include <string>


class LinkedList{
    
};

class  Book {
public:
    char title;
    char author;
};

class Person{
public:
    Person(){myBook = new Book;}
    
    Person(const Person &other){
        myBook = new Book;
        myBook->title = other.myBook->title;
        myBook->author = other.myBook->author;
    }
    
    Person& operator=(const Person &other){
        
        //if other is you
        if (this == &other)
            return *this;
        //we need to get ride of original book
        delete myBook;
        myBook = new Book;
        myBook->title = other.myBook->title;
        myBook->author = other.myBook->author;
        return *this;
    }
    
    ~Person(){
        delete myBook;
    }
    
private:
    Book * myBook;
};

class student : public Person {
public:
    student(const student &other): Person(other){
        
    }
    
    student& operator=( student other){
        if (this == &other)
            return *this;
        
        Person::operator=(other);

        delete myClass;
        myClass = new LinkedList;
        
        
        return (*this);
    }
private:
    LinkedList * myClass;
};

