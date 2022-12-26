// Quick practice program that checks to see if a word is a
// palindrome (reads the same foward and back) uses STL
// queue and stack


#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

bool palCheck(const string toCheck);


int main(){


    string palstring = "kayak"; // kayak should return true
    palCheck(palstring);

    palstring = "Seattle";      // Seattle should return false
    palCheck(palstring);

    palstring = "bob";          // Bob should return true
    palCheck(palstring);
 

    return 0;
}




//-----------------------------------------------------------------------------
// Checks for whether or not a word is a palindrome by popping the top of the 
// stack and comparing it to the front of the queue. 
// if they are equal, return true. If they are not, return false. 
bool palCheck( const string toCheck){

    stack<char> pstack;
    queue<char> pqueue;

        for (int i = 0; i < toCheck.size(); i++){
            pstack.push(toCheck[i]);
            pqueue.push(toCheck[i]);
        }

        for(int i = 0; i < pstack.size(); i++){

            if(pstack.top() != pqueue.front()){
                while( !pqueue.empty()){
                    pqueue.pop();
                }
                
                while (!pstack.empty()){
                    pstack.pop();
                }

                cout << endl << toCheck << " is not a palindrome\n\n";
                return false;
            }
            pstack.pop();
            pqueue.pop();
        }

    cout << endl << toCheck << " is a palindrome\n\n";
    return true;
}
