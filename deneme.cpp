#include <iostream>
/*
    iostream is standart library header file that contains definitions
    of the standard input and output streams.

    iostream, standart giri� ve ��k�� ak��lar�n�n tan�mlar�n� i�eren
    standart k�t�phane ba�l�k dosyas�d�r


int main()
{
    int sayi;
    sayi = 5;

    //std::cout, iostream i�inde tan�mlanan standart ��kt�
    //ak��� nesnesidir.
    std::cout << "The current value is " << std::endl;
    std::cout << sayi;

    return 0;
    // return EXIT_SUCCESS;
}



#include <iostream>

using namespace std;

int main()
{
    const int birt_year = 2002;
    int height = 175, weight = 72;

    cout<< "Birt Year is : " << birt_year << endl;
    cout<< "My height is : " << height << endl;
    cout<< "My weight is : " << weight << endl;

    return 0;
}


#include <iostream>

using namespace std;
int main()
{
    bool true_value = true;
    bool false_value = false;

    cout<< "True value is : " << true_value << endl;
    cout<< "False value is: " << false_value << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    char harf = 'a';
    cout<< "a'n�n asci kar��l���: " << harf;
    return 0;

    char harf = 'a';
    int ascii_deger = static_cast<int>(harf);
    cout << "a'n�n ASCII kar��l���: " << ascii_deger;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int yas = 15;
    int kilo = 48;
    int boy = 176;
    cout<< "Benim ya��m: " << yas << endl;
    cout<< "Benim kilom: " << kilo << endl;
    cout<< "Benim boyum: " << boy << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    float number1 = 309.753;
    float number2 = -52.976;

    cout << "Sayi1: "<< number1 <<"\nSayi2: "<< number2;
    return 0;

}

*/


#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    char b = 'A';

    a = a + b;
    float c = a + 3.0;

    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;

    double d = 3.4;
    double e = d + 2;

    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    return 0;
}

