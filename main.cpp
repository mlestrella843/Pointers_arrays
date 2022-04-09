/*The goal of the code below is to read a list supplied by the user and print it back in reverse order. Identify the errors, specify them and fix them.*/

#include<iostream>
using namespace std;

int main()

{ 
    string repeat = "Y";
    int count;
    double* p;
 
    while (repeat == "Y")  { 
    
    cout<<"How many numbers are in your list? "<<endl;
    cin>>count;
    
    p = new double [count];   
    
    cout<<"Enter the numbers: "<<endl;
    for (int i = 0; i < count; ++i){ 
          cin>> *(p+i);
    }
  
    cout<<"List in reverse order: " <<endl;
    for (int i = 0; i < count; ++i){
       cout<<p[count - i - 1]<<" "<<endl;   
        }
          
      do
    {
    cout << "Reverse another list? [Y/N] ";
    cin >> repeat;
    } while (repeat != "Y" && repeat != "N"); 
 
}
  delete [] p;
  return 0;
  
}


