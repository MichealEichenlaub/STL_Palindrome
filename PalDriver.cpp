//Quick practice program that checks to see if a word is a
// palindrome (reads the same foward and back) uses STL
// queue and stack


#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

bool palCheck(stack<char> &pstack, queue<char> &pqueue);
void loadCheck(stack<char> &pstack, queue<char> &pqueue, string toLoad);





int main(){

    stack<char> pals;
    queue<char> palq;


    string palstring = "kayak"; // kayak should return as a palindrome
    loadCheck(pals,palq,palstring);

    


    if(palCheck(pals,palq) == true){
        cout << endl <<palstring << " is a palindrome\n\n";
    }                                                 
    else{                                              
        cout << endl << palstring << " is not a palindrome\n\n";
    }



   palstring = "Seattle"; // Seattle should return as not a palindrome
   loadCheck(pals,palq,palstring);




    if(palCheck(pals,palq) == true){
        cout << palstring << " is a palindrome\n\n";
    }                                                  
    else{                                             
        cout << palstring << " is not a palindrome\n\n";
    }




    palstring = "bob"; // Bob should return as a palindrome
    loadCheck(pals,palq,palstring);



    if(palCheck(pals,palq) == true){
        cout << palstring << " is a palindrome\n\n";
    }                                                  
    else{                                              
        cout << palstring << " is not a palindrome\n\n";
    }
    

    return 0;
}




//-----------------------------------------------------------------------------
// Checks for whether or not a world is a palindrome by popping the top of the 
// stack and comparing it to the front of the queue. 
// if they are equal, return true. If they are not, return false. 
bool palCheck( stack<char> &pstack,queue<char> &pqueue){

        for(int i = 0; i < pstack.size(); i++){

            if(pstack.top() != pqueue.front()){
                while( !pqueue.empty()){
                    pqueue.pop();
                }
                
                while (!pstack.empty()){
                    pstack.pop();
                }
                
                return false;
            }

            pstack.pop();
            pqueue.pop();
        }

    return true;
}


void loadCheck(stack<char> &pstack, queue<char> &pqueue, string toLoad){

      for (int i = 0; i < toLoad.size(); i++){
        
        pstack.push(toLoad[i]);
        pqueue.push(toLoad[i]);
       
    }
}