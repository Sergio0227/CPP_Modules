#include <iostream>


int    main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str: " << &str << std::endl;
    std::cout << "Address stringPTR: " << stringPTR << std::endl;
    std::cout << "Address stringREF: " << &stringREF << std::endl;

    std::cout << "\nValue of str: " << str << std::endl;
    std::cout << "Value stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value stringREF: " << stringREF << std::endl;
    return 0;
}