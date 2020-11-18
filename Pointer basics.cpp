#include <iostream>
#include <string>

class Pointers
{
public:
    int digit = 4, item = 72;

    /* Now intpointer is assigned the address of item. */
    int *intPointer{ &item };
public:
    void usePointer()
    {
        std::cout << "Digit value: " << digit << "\n";
        std::cout << "Digit memory address: " << &digit << "\n";

        /* The indirection (*) operator allows one to access the value at an address. */
        std::cout << "Digit value at memory address: " << *(&digit) << "\n\n";

        std::cout << "Item's memory address: " << &item << "\n";
        std::cout << "Item's memory address in intpointer: " << intPointer << "\n\n";

        // The address-of operator (&) returns a pointer containing its address
        std::cout << "Pointer containing digit's address: " << typeid(&digit).name() << "\n\n";

        std::cout << "Digit value: " << digit << "\n";
        int *ptr{ &digit }; // ptr points to digit's value.
        /* One uses indirection to access the value being pointed at. */
        std::cout << "Indirection: the value in the address ptr is pointing to is accessed: " << *ptr << "\n\n";

        // Reassigning a pointer.
        int* intptr{};
        intptr = &item;
        std::cout << "The value of the address intptr is pointing at is: " << *intptr << "\n";
        std::cout << "The address intptr is pointing at is: " << intptr << "\n";

        intptr = &digit;
        std::cout << "The value of the new address intptr is pointing at is: " << *intptr << "\n";
        std::cout << "The new address intptr is pointing at is: " << intptr << "\n\n";
        /* intptr = &digit, *intptr = digit */
    }
};

class Mindset
{
private:
    std::string cause{ "happiness" }, changedCause{ "freedom" }, effect{ "smile" }, changedEffect{ "fly" };
    std::string *sptrc{};
    std::string *sptre{};
public:
    void shareThoughts()
    {
        sptrc = &cause;
        sptre = &effect;
        std::cout << "My thoughts be of " << *sptrc << ". It makes me " << *sptre << ".\n";
        sptrc = &changedCause;
        sptre = &changedEffect;
        std::cout << "My new thoughts be of " << *sptrc << ". It makes me " << *sptre << ".\n";

    }

};


int main()
{
    Pointers p;
    p.usePointer();

    Mindset m;
    m.shareThoughts();
}

