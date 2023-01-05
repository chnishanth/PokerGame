#include <collection.h>

collection::collection() :name(nullptr), bet(nullptr)
{

    vector = new T[1];
    count = 1;


}
collection::~collection()
{
    delete[] arr;
}


// Function to add an element at the last
collection::void push(T data)
{
        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }

        delete[] vector;
        capacity *= 2;
        vector = temp;
    }
    vector[current] = data;
    size++;
}

collection::T get(int index)
{

    // if index is within the range
    if (index < current)
        return arr[index];
}

// function to delete last element
collection::void remove() { current--; }

// function to get capacity of the vector
collection::int getSize() { return count; }

// function to print array elements
collection::void print()
{
    for (int i = 0; i < current; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}