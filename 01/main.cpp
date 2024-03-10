#include "SmartArray.h"

int main(int argc, char** argv) {
	system("chcp 1251");

    try {

        SmartArray sArr(5);
        sArr.addElement(1);
        sArr.addElement(4);
        sArr.addElement(155);
        sArr.addElement(14);
        sArr.addElement(15);
        sArr.printSmartArray();
        std::cout << "#########################################" << std::endl;
        std::cout << sArr.getElement(5) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
	return 0;
}