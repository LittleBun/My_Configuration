#include <iostream>

int main(){
	int sum;
	sum=0;
	int counter=10;
//	for (counter=50;counter<=100;counter++)
//		sum += counter;
//	while(counter<=100){
//		sum += counter;
//		counter ++;	
//	}
	while(counter>=0){
		sum += counter;
		counter --;
	}
	std::cout<<sum<<std::endl;
	return 0;
}
