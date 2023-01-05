#pragma once

using namespace std;
namespace Poker
{
    template <typename T> class collection
    {

        T* vector;
        int count;
        int size;

    public:

        collection();

        virtual ~collection();

        // Function to add an element at the last
        void push(T data);


        // function to extract element at any index
        T get(int index);

        // function to delete last element
        void remove();

        // function to get capacity of the vector
        int getSize();

        // function to print array elements
        void print();
    };
}