#include <iostream>
#include <vector>

int main()
{
    std::vector<float> b(4);
    float a[4][4];
    std::vector<float> c(4);
    //Заполняем:
    std::cout << "Fill the vector:\n";
    for (int i = 0; i < 4; ++i)
    {
        std::cin >> b[i];
    }
    std::cout << "Fill the matrix:\n";
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            std::cin >> a[i][j];
        }
    }
    //Умножаем:
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            float sum = 0;
            for (int k = 0; k < 4; ++k)
            {
                sum += a[i][j] * b[k];
            }
            c[i] = sum;
        }
    }
    //Выводим:
    for (int i = 0; i < 4; ++i)
    {
        std::cout << c[i]<< " ";
        
    }
}