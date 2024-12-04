#include <iostream>


int    main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address: " << &str << std::endl;
    std::cout << "Address: " << stringPTR << std::endl;
    std::cout << "Address: " << &stringREF << std::endl;

    std::cout << "\nValue: " << str << std::endl;
    std::cout << "Value: " << *stringPTR << std::endl;
    std::cout << "Value: " << stringREF << std::endl;
    return 0;
}