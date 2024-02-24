#include<bits/stdc++.h>

void example1 ()
{
    // auxillary variables
    int foo = 10;
    const int foo_const = 10;
    int bar = 20;
    int bar_const = 20;

    int const * p1 = &foo_const; //p1 is a pointer to a constant integer
    // *(p1) = 20; // Compiler error, cause *p1 is constant
    p1 = &bar_const; // OK, cause p1 is not constant

    int const * p2 = &foo; // Ok, foo is interger , *p2 is constant integer.
                           //     It is possible to assign integer to constant integer

    foo = 12;
    assert(*p2 == 12);

    p2 = &bar; // Ok, cause p2 is not constant

    std::cout<<"All check passed in example1"<<std::endl;
}

void example2()
{
    // auxillary variables
    int foo = 10;
    const int foo_const = 10;
    int bar = 20;
    int bar_const = 20;

    int * const p1 = &foo; // p1 is a constant pointer to an integer
    *p1 = bar; // Ok, cause *p1 is not constant
    // p1 = &bar; // Compiler error, cause p1 is constant
    assert(*p1 == bar);

    //int * const p2 = &foo_const; // Error, cause *p2 is not constant.
                                 //  But foo_const is constant.



    std::cout<<"All check passed in example2"<<std::endl;

}


int main()
{
    example1();
    example2();
    return 0;
}