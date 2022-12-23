#include <iostream>
#include <vector>
#include<algorithm>
#include <cstdio>
#include <ctime>
using namespace std;

class Array {
private:
    int size1;
    int size2;
public:

    void FunctionPrev(vector<int> array1, vector<int> array2)
    {
        vector<int> result;
        result.insert(result.end(), array1.begin(), array1.end());
        result.insert(result.end(), array2.begin(), array2.end());

        sort(result.begin(), result.end());

        cout << "Sorted result array: " << endl;
        for (auto i = result.begin(); i < result.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
    }

    void FunctionNow(vector<int> array1, vector<int> array2) {

        vector<int> result(array1.size() + array2.size());
        int i = 0, j = 0, k = 0;

        while (i < array1.size() && j < array2.size())
        {
            if (array1[i] < array2[j])
                result[k++] = array1[i++];
            else
                result[k++] = array2[j++];
        }
        while (i < array1.size())
            result[k++] = array1[i++];

        while (j < array2.size())
            result[k++] = array2[j++];


        cout << "Sorted result array: " << endl;
        for (auto i = result.begin(); i < result.end(); i++)
        {
            cout << " " << *i;
        }
        cout << endl;
    }
};

int main()
{
    Array array = Array();

    vector<int> array1 = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 30 };

    vector<int> array2 = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 31 };

    clock_t start;
    double duration;

    start = clock();

    array.FunctionPrev(array1, array2);

    duration = (clock() - start) / (double)CLOCKS_PER_SEC;

    cout << "Previous function: " << duration << '\n';

    start = clock();
    array.FunctionNow(array1, array2);
    duration = (clock() - start) / (double)CLOCKS_PER_SEC;

    cout << "New function: " << duration << '\n';
    return 0;
}
