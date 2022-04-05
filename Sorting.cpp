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
class SelectionSorting
{
    public:
    void SelectionSort(vector<int>& array)
    {
        int i_min_pos = 0;
        for(int i = 0; i < array.size(); i++)
        {
            i_min_pos = i;
            for(int y = 0 + i; y < array.size(); y++)
            {
                if(array[y] < array[i_min_pos])
                {
                    i_min_pos = y;
                }
            }
            swap(array[i], array[i_min_pos]);
        }
        cout<< "Selection Sort"<< endl;
    }
};
class InsertionSorting
{
    public:
    void InsertionSort(vector<int>& array)
    {
        int i_key = 0;
        for(int i = 1; i < array.size(); i++)
        {
            i_key = array[i];
            for(int y = i - 1; y >= 0; y--)
            {
                if(array[y] > i_key)
                {
                    swap(array[y + 1], array[y]);
                }
            }
        }
        cout<< "Insertion Sort"<< endl;
    }
};
class Sorting: public BubbleSorting, SelectionSorting, InsertionSorting
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
    vector<int> v_mang1 = {1, 8, 5, 4, 7, 12, 2, 15, 6};
    c_sort.BubbleSort(v_mang1);
    PrintMang(v_mang1);
    return 0;
}