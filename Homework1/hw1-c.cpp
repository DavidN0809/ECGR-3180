#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){//important vars
    string userinput;
    vector <string> inputs={"0","1"};
    int max=1;
    
 while(cin>>userinput){ //while loop
    inputs.front()=userinput;//assign input to front of vector
    
    if(inputs.front()==inputs.back())//compare new input to last input
    max++;
    else{
    max=1;
    inputs.back()=userinput;}//move new input to back to compare later
    }//end while
    
cout << "Max is " << max << endl;

    return EXIT_SUCCESS;
}
