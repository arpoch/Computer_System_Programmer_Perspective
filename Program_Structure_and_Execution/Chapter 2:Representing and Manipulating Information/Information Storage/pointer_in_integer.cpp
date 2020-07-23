#include <iostream>

int main(){
	
	char bait='a';
	char *char_ptr=NULL;
	char_ptr=&bait;
	printf("Address in char_ptr = %p\n",char_ptr);
//	std::cout<<"Address in char_ptr = "<<char_ptr<<'\n';
	uint32_t simple_int =0;
	simple_int = (int)char_ptr;
//	printf("Address in simple_ptr = %x\n",simple_int);
	std::cout<<"Address in simple_int uinteger value= "<<simple_int<<'\n';
	printf("Address in simple_ptr hexavalue = 0x%x\n",simple_int);
	return 0;
}
