#include<iostream> 
#include<limits> 
using namespace std; 
int main() 
{ 
int k, i=1, sum_k=0 , n; 
cout<<"Enter the amount of integers to sum: "; 
cin>>k; 
while (i <= k) { 
 cout<<"Enter integer number\n";
cin>>n; 
while(1) 
{ 
if(cin.fail())  
{ 
cin.clear(); 
cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
cout<<"Wrong input, try again"<<endl;  
cin>>n; 
} 
if(!cin.fail()) 
break; 
}  
sum_k += n; 
i++;
} 
cout << "The total sum of " << k << " integers is: "  << sum_k; 
return 0; 
}
