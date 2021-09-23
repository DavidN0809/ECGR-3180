#include <iostream>
#include<vector>
#include <cstdlib>
using namespace std;
//functions
int count_numbers ( int num) { //function to see how many integers in number
   int count =0;
   while (num !=0) {   
      count++;  
      num/=10;
   } 
   return count;
}

int main (){
int userinput=0,count=0,old=0,first=1,subtotal=0,grandtotal=0;
cout << "Account Numbers        Expenses"<<endl; //displaying header file
cout << "-------------------------------" << endl; 

  while(cin>>userinput){
    count=count_numbers(userinput); 
    
    if(count ==5 && first==1){ //setting first account number equal to old for comparing later
      old=userinput;
      first=0;}//setting first to 0 so this if statement never runs again
    
        if(count==5){ //checking to see if the number is an account number
            if(old!=userinput){//comparing new account number to old account number
                old=userinput;//storing new account number to be compared later
                cout << "sub-total = " << subtotal<< endl;
                grandtotal=subtotal+grandtotal;
                cout << endl;
                subtotal=0;//settings subtotal to 0 so its correct for new account
                }
        cout << userinput<< "                   ";
        }
    
        else{
            cout << userinput << endl;
            subtotal=subtotal+userinput;
        }   
    }//end of while loop

    grandtotal=subtotal+grandtotal;//grandtotal not + last subtotal inside while loop, so doing that here
    cout << "sub-total = " <<subtotal << endl;
    cout << "grand-total = " << grandtotal;
return EXIT_SUCCESS;
}
