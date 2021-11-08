#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std ;

//given Node and List
class Node {
  public:
    std::string     id ;
    Node            *next ;
    Node (std::string id , Node *next=nullptr ) {
        this->id = id ;
        this->next = next ;
    }
};

class List {
  public:
    Node    *head ;
    List() { head = nullptr ; }
    Node    *first() { return head ; }
    friend std::istream& operator>> ( std::istream& sin, List &lst ) ;
    //end of given code here
    friend std::ostream& operator<< ( std::ostream& sout, List &lst ) ;//overload cout
    void prepend(string id);//add to begin of list
    void append(string id);//add to end of list
    bool is_empty();//checks if empty
    void reverse();//reverses list
    bool has_id(string id);//checks for specific node
};
