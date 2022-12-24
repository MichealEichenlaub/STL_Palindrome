# STL_Palindrome
<pre>
- A Quick solution to the palindrome problem. This uses the STL stack and queue to read a string and test to see if it is a palindrome
- This implentation does not take in user inputs, but could be modified to do so. 

- This program functions by removing the top value of the stack and the first value of the queue and comparing them.
  in the case that it is a palindrome , the result will be true, in the case that it is not it will be false.
  
- This works because the stack is a LIFO data stucture where as the queue is a FIFO data stucture. A stack can be thought of 
  as reading the word backwards and the queue can be thought of as reading the word forwards.
  
- This tests three words to ensure that the program is scalable. scalability is achieved by clearing the stacks and queues in the case
  where the functions returns false, before the program has finished fully popping values from the stack and queues.
  This ensures that when you go to add a new word to be tested, the stack and queues are empty and ready to be added to. 
  
</pre>
