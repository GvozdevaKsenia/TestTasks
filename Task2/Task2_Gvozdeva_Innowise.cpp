#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Array {
private:
    int size1;
    int size2;
public:

    void Function() 
    {
        cout << "Enter the size of array1: " << endl;
        cin >> size1;

        vector<int> array1;
        for (int i = 0; i < size1; i++)
        {
            array1.push_back(rand() % 100);
            cout <<array1[i];
            cout << endl;
        }

        cout << "Enter the size of array2: " << endl;
        cin >> size2;
       
        vector<int> array2;
        for (int i = 0; i < size2; i++)
        {
            array2.push_back(rand() % 100);
            cout << array2[i];
            cout << endl;
        }
        
        vector<int> result;
        result.insert(result.end(), array1.begin(), array1.end());
        result.insert(result.end(), array2.begin(), array2.end());
      
        sort(result.begin(), result.end());
        
        cout << "Sorted result array: ";
        for (auto i = result.begin(); i < result.end(); i++)
        {
            cout << " " << *i;
        }
    }
};

int main()
{
    Array array = Array();
    array.Function();
    
    return 0;
}