cmake_minimum_required(VERSION 3.27)
project(Cpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_BUILD_TYPE Debug)


#############CPP MODULE01############
add_executable(00.ex00              #
        00/ex00/megaphone.cpp)      #
                                    #
add_executable(00.ex01              #
        00/ex01/Contact.hpp         #
        00/ex01/Contact.cpp         #
        00/ex01/PhoneBook.cpp       #
        00/ex01/PhoneBook.hpp       #
        00/ex01/main.cpp)           #
                                    #
add_executable(00.ex02              #
        00/ex02/Account.hpp         #
        00/ex02/Account.cpp         #
        00/ex02/tests.cpp)          #
#####################################

#############CPP MODULE02############
add_executable(01.ex00              #
        01/ex00/main.cpp            #
        01/ex00/Zombie.cpp          #
        01/ex00/Zombie.hpp          #
        01/ex00/randomChump.cpp     #
        01/ex00/newZombie.cpp)      #
                                    #
add_executable(01.ex01              #
        01/ex01/main.cpp            #
        01/ex01/Zombie.cpp          #
        01/ex01/Zombie.hpp          #
        01/ex01/zombieHorde.cpp)    #
                                    #
add_executable(01.ex02              #
        01/ex02/main.cpp)           #
                                    #
add_executable(01.ex03              #
        01/ex03/Weapon.cpp          #
        01/ex03/Weapon.hpp          #
        01/ex03/main.cpp)           #
#####################################
