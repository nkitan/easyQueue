# easyQueue
linear queue data structure implemented using arrays in c++



usage
-----

The queue class can be accessed simply by including the provided header file
The class provides 3 functions namely
enqueue, dequeue, display and is initialized at the time of object creating using constructors.
to create a queue, declare the object with the size of the queue                                                                                      
 $ class queue Queue( SIZE )                                                                               
  
The queue can then be edited using the aforementioned functions                                                                                      
to add a value to the end of the queue, use the enqueue function                                                                                       
 $ Queue.enqueue(VALUE);                                                                 
  
To delete the first value, use the dequeue function                                                                       
 $ int deletedValue = Queue.dequeue();                                                                             
this function returns the deleted value                                                                           
 
To display the whole queue, use the display function                                                           
 $ Queue.display();                                                                      
