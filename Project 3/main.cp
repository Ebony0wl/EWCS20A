#include"list.h"
#include"studentinfo.h"
#include<iostream>
int main() {

	std::cout << StudentInfo::name() << std::endl;
	std::cout << StudentInfo::id() << std::endl;

	List<int> l; //List of integers

    l.addToRear(3);
    l.addToFront(-1);
    l.addToFront(9000);
    l.addToFront(2);
    l.printItems();
    std::cout << l.getRear();
    l.deleteRear();
    l.printItems();

	return 0;
}
