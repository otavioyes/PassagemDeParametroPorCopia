#include <limits>
#include <iostream>

bool readInt(int *value)
{
    if(!value)
    {
        return false;
    }

    std::cin >> *value;
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<int>::max(), 'n');
        return false;
    }
    return true;
}


// void test(int a)
// {
//     a = 10;
//     std::cout << "a: " << a << '\n';
// }

int main()
{

    int v = 0;

    std::cout << "Type number: ";
    if(!readInt(nullptr)){
        std::cout << "Invalid input \n";
    }else{
        std::cout << "The number is: " << v << '\n';
    }



    //passagem de parametro por cópia
    // int x = 100;
    // std::cout << "Antes x: " << x << '\n';
    // test(x);
    // std::cout << "Depois x: " << x << '\n';
    return 0;

}
