
#include<iostream>

#include<string>
void print_binary_str(std::string decimal_number){
    int number = stoi(decimal_number);
	int rem=0;
	int base=1;
	while(number!=0)
	{
		rem = rem + (number%2)*base;
		base*=10;
		number/=2;
	}
	
	std::cout<<rem<<std::endl;



    
}