#include <iostream>

using namespace std;

int main() {

    size_t size{ 0 };
    double* temp_ptr{ nullptr };
  
    cout << "How Many Temps? =  ";
    cin >> size;

   while(true) //this thing causes infinite loop and massive memory leak due to not freeing the pre-allocated memory
    temp_ptr = new double[size];
    
    cout << temp_ptr << endl;

    delete[] temp_ptr;

    cout << endl;
    return 0;
}