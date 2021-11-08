#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std ;

// this version of the overloaded operator << reads a node ID
// string from the stream and prepends nodes to the list
istream& operator>> ( istream& sin, List &lst ) {
    Node            *tmp ;
    std::string     id ;

    sin >> id ;
    while( sin ) {
        tmp = new Node(id,lst.head) ;
        lst.head = tmp ;
        sin >> id ;
    }
    return sin ;
}

//overload << operator and create list
ostream& operator<< ( ostream& sout, List &lst ) {
    Node *tmp = lst.head;
    if(tmp==NULL) //checking if no input was given
        sout << "[]"; 
    
    else{
        sout << "[";
        while(tmp->next && tmp){//going through list until end
            sout << tmp->id<<" ,"; // adding nodes as it loops
            tmp=tmp->next;
            }
        sout <<tmp->id<<"]"; //adding to last node to end of list
        }
    return sout;
    }

//2A functions
//adding node to begining of list
void List::prepend(string id){
    Node *tmp = new Node (id);
    tmp ->id = id;
    tmp -> next = head;
    head = tmp;
}

//adding node to ending of list 
void List::append (string id){
    Node *tmp = new Node(id);
    tmp->id = id;
    tmp->next = NULL; 
    //if empty make the new node at the end
        if(tmp == NULL) 
           head = tmp;
        else{
    //go to the last node
            Node *temp = head;
        while(temp->next != NULL)//loops through the list
            temp = temp->next;
        temp->next = tmp;
  }    
}
