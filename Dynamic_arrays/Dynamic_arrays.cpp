#include <iostream>
using namespace std;

template <typename T> T uniqueElementsWithoutRepetitions(T *arr1, T *arr2, int size1, int size2, bool repeatingElement) {
    //выводим первый массив
    for (int i = 0; i <= size1; i++)
    {
        arr1[i] = rand() % 10;
        cout << "arr1[ " << i << " ] - " << arr1[i] << "; ";
    }
    cout << endl;
    //выводим второй массив
    for (int i = 0; i <= size1; i++)
    {
        arr2[i] = rand() % 10;
        cout << "arr2[ " << i << " ] - " << arr2[i] << "; ";
    }
    cout << endl;
    //считаем сколько элементов первого массива нужно поместить в третий
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        repeatingElement = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                repeatingElement = true;
                break;
            }
        }
        if (!repeatingElement)
        {
            count++;
        }
    }
    //считаем сколько элементов второго массива нужно поместить в третий
    for (int i = 0; i < size2; i++)
    {
        repeatingElement = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                repeatingElement = true;
                break;
            }
        }
        if (!repeatingElement)
        {
            count++;
        }
    }
    // записываем уникальные элементы певого массива в третий
    int size3 = count;
    int* arr3 = new int[size3];
    count = 0;
    for (int i = 0; i < size1; i++)
    {
        repeatingElement = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                repeatingElement = true;
                break;
            }
        }
        if (!repeatingElement)
        {
            arr3[count++] = arr1[i];
        }
    }
    // записываем уникальные элементы второго массива в третий
    for (int i = 0; i < size2; i++)
    {
        repeatingElement = false;
        for (int j = 0; j < size1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                repeatingElement = true;
                break;
            }
        }
        if (!repeatingElement)
        {
            arr3[count++] = arr2[i];
        }
    }
    //выводим третий массив с уникальными(не повторяющимеся) элементами первого и второго массивов
    for (int i = 0; i < size3; i++)
    {
        cout << "arr3[ " << i << " ] - " << arr3[i] << "; ";
    }
    return *arr3;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}

int main() {
    srand(time(0));
    int size1 = 0;
    int size2 = 0;
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    bool repeatingElement = false;
    cout << "Enter size M: \n";
    cin >> size1;
    cout << "Enter size N: \n";
    cin >> size2;
    uniqueElementsWithoutRepetitions<>(arr1, arr2, size1, size2, repeatingElement);
    
}
