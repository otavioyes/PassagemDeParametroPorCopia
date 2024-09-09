#include <limits>
#include <iostream>

bool readInt(uint32_t *value)
{
    std::cin >> *value;
    if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<uint32_t>::max(), 'n');
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

    uint32_t v = 0;

    std::cout << "Type number: ";
    if(!readInt(&v)){
        std::cout << "Number invalid \n";
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
