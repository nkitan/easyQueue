#include "queue_using_array.h"             // this header already includes iostream and other basic headers

int main(){

    int n = 0;
    std::cin>>n;

    class queue Q(n);
    int result = 0;
    int choice = 0;
    bool run = true;

while(run){                                
    std::cout<<"\n1. ENQUEUE\n";
    std::cout<<"2. DEQUEUE\n";
    std::cout<<"3. DISPLAY\n";
    std::cout<<"ENTER CHOICE: ";
    std::cin>>choice;
        

    switch(choice){
    case 1:
        std::cin>>result;
        Q.enqueue(result);
        break;

    case 2:
        result = Q.dequeue();
        printf("res - %d\n",result);
        break;
    case 3:    
        Q.display();
        break;
    case 4:
        run = false;
        break;    
    }

    
}
    return 0;
}
