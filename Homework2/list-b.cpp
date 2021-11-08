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
//2B functions
//if empty return true
bool List::is_empty(){
  if(this->head==NULL)//checking first node of function
    return true;
  else
    return false;
}

//if id == s then return true
bool List::has_id(string id){  
    Node *tmp = head;
        while (tmp!=NULL)  //looping through the list
        {  
            if(tmp->id == id)//checks the List id versus string "s"
                return true;
                
            else
                tmp = tmp->next;  
        }
    return false;
}

//reverses the linked lists
void List::reverse(){
    	Node* tmp = head;
		Node *prev = NULL;
		Node *next = NULL;

		while (tmp != NULL) {//looping through list
			next = tmp->next;
			// Reverse tmp node's pointer
			tmp->next = prev;
			// Move pointers one position ahead.
			prev = tmp;
			tmp = next;
		}
		head = prev;
}
