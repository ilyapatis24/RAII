#include "SmartArray.h"

int main(int argc, char** argv) {
    system("chcp 1251");

    try {

        SmartArray smartArray1(5);
        smartArray1.addElement(1);
        smartArray1.addElement(4);
        smartArray1.addElement(155);
        smartArray1.addElement(14);
        smartArray1.addElement(15);
        smartArray1.printSmartArray();
        std::cout << "#########################################" << std::endl;
        std::cout << smartArray1.getElement(4) << std::endl;

        SmartArray smartArray2(5);
        smartArray2.addElement(17);
        smartArray2.addElement(18);
        smartArray2.addElement(19);
        smartArray2.addElement(20);
        smartArray2.addElement(21);

        smartArray2.printSmartArray();

        std::cout << "В массиве 3 находится массив 1" << std::endl;
        SmartArray smartArray3(smartArray1);
        smartArray3.printSmartArray();

        std::cout << "В массиве 4 находится массив 2" << std::endl;
        SmartArray smartArray4 = smartArray2;
        smartArray4.printSmartArray();
        std::cout << std::endl;
        std::cout << "Сам в себя" << std::endl;
        smartArray4 = smartArray4;
        smartArray4.printSmartArray();

    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}