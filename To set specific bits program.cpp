//Yash Rastogi Exp-4
//24070123135
#include<iostream>
using namespace std;
int main()
{
    int i=80;
    int bit_to_be_set,set,reset;
    cout << "Enter the bit to be set: ";
    cin >> bit_to_be_set;
    set=i|(1<<bit_to_be_set);
    cout << "Enter the bit to be reset: ";
    cin >> reset;
    reset=i&(~(1<<reset));
    cout << " The number after change is :"<<set<<endl;
    cout << "The number before change :"<<reset<<endl;
    
}
/*
output:
Enter the bit to be set: 5
Enter the bit to be reset: 4
 The number after change is :112
The number before change :64
*/
