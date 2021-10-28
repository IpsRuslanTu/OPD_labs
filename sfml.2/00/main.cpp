#include <iostream>

int main()
{
    for (int num = 1; num <= 100; num += 1)
    {
        if ((num % 3 == 0) && (num % 5 == 0))
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        //  - иначе если число кратно 3, вывести Fizz
        else if (num % 3 == 0)
        {
            std::cout << "Fizz" << std::endl;
        }
        //  - иначе если число кратно 5, вывести Buzz
        else if (num % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        // - иначе выводим число
        else
        {
            std::cout << num << std::endl;
        }
    }
}