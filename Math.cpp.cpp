#include<iostream>
#include<conio.h>
int main(){
    int x, y, sum, pro, dif, rem, quot;
    std::cout<<"Enter First Number:";
    std::cin>>x;
    std::cout<<"Enter Second Number:";
    std::cin>>y;
    	sum=x+y;
    	pro=x*y;
    	dif=x-y;
    	rem=x%y;
   	 	quot=x/y;
    	std::cout<<"\nThe Sum is:"
    		<<sum<<"\nThe Product is:"
   			<<pro<<"\nThe Difference is:"
    		<<dif<<"\nThe Reminder is:"<<rem<<"\nThe Quotient"<<quot;
    getch();
}

