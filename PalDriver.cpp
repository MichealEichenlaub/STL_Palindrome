#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

bool palcheck(stack<char> pstack, queue<char> pqueue);

int main(){

    stack<char> pals;
    queue<char> palq;
    string palstring = "madam";


    for (int i = 0; i < palstring.size(); i++){
        palq.push(palstring[i]);
        pals.push(palstring[i]);
    }

    

    if(palcheck(pals,palq) == true){
        cout << palstring << " is a palindrome\n";
    }
    else{
        cout << palstring << " is not a palindrome\n";
    }

   

    return 0;
}

bool palcheck(stack<char> pstack, queue<char> pqueue){

        for(int i = 0; i < pstack.size(); i++){

            if(pstack.top() != pqueue.front()){
                cout << "Not a palindrome\n";
                return false;
            }


        }
    return true;

}