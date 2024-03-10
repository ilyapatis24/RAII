#include "SmartArray.h"

int main(int argc, char** argv) {
	system("chcp 1251");

    try {

        SmartArray smartArray(5);
        smartArray.addElement(1);
        smartArray.addElement(4);
        smartArray.addElement(155);
        smartArray.addElement(14);
        smartArray.addElement(15);
        smartArray.printSmartArray();
        std::cout << "#########################################" << std::endl;
        std::cout << smartArray.getElement(5) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
	return 0;
}