#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
#define I_MAX 10
class BubbleSorting
{
    public:
    void BubbleSort(vector<int>& array)
    {
        for(int i = 0; i < array.size(); i++)
        {
            for(int y = 0; y < array.size() - 1 - i; y++)
            {
                if(array[y] > array[y+1])
                {
                    swap(array[y], array[y+1]);
                }
            }
        }
        cout<< "Bubble Sort"<< endl;
    }
};
class Sorting: public BubbleSorting
{};
void NhapMang(vector<int>& array)
{
    int i_input_value = 0;
    for(int i = 0; i < I_MAX; i++)
    {
        cout<< "nhap so thu "<< i+1<< endl;
        cin>> i_input_value;
        array.push_back(i_input_value);
    }
}
void PrintMang(vector<int>& array)
{
    cout<< "mang da sap xep la: "<< endl;
    for(int i = 0; i < array.size(); i++)
    {
        cout<< array[i]<< endl;
    }
}
int main()
{
    Sorting c_sort;
    vector<int> v_mang = {1, 8, 5, 4, 7, 12, 2, 15, 6};
    c_sort.BubbleSort(v_mang);
    PrintMang(v_mang);
    //NhapMang(v_mang);
    return 0;
}