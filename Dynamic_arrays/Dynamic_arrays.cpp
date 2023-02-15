#include<iostream>

using namespace std;

void sortingUniqueValuesFromTwoArrays(int* arr1, int* arr2, int size1, int size2) {
    for (int i = 0; i <= size1; i++)                              
    {                                                                      
        arr1[i] = rand() % 10;                                    
        cout << "arr1[" << i << "] - " << arr1[i] << "; ";        
    }                                                      //Вывод двух заданных массивов
    cout << endl;                                                 
    for (int i = 0; i <= size2; i++)                              
    {                                                             
        arr2[i] = rand() % 10;                                    
        cout << "arr2[" << i << "] - " << arr2[i] << "; ";        
    }                                                             
    cout << endl;

    int tmp = 0;                                                  
    for (int i = 0; i <= size1; i++)                              
    {                                                             
        bool checkedValues = false;                               
        for (int j = 0; j <= size2; j++)                          
        {                                                         
            if (arr1[i] == arr2[j]) {                             
                checkedValues = true;                             
                break;                                            
            }                                                     
        }                                                         
        if (!checkedValues)                                       
            tmp++;                            //Считаем какие элементы будем переносить в третий массив из двух заданных
    }                                                             
                                                                  
    for (int i = 0; i <= size2; i++)                              
    {                                                             
        bool checkedValues = false;                               
        for (int j = 0; j <= size1; j++)                          
        {                                                         
            if (arr2[i] == arr1[j]) {                             
                checkedValues = true;                             
                break;                                            
            }                                                     
        }                                                         
        if (!checkedValues)                                       
            tmp++;                                                
    }                                                             

    int size3 = tmp;                                                   
    int* arr3 = new int[size3];                                        
    tmp = 0;                                                           
                                                                       
    for (int i = 0; i <= size1; i++)                                   
    {                                                                  
        bool checkedValues = false;                                    
        for (int j = 0; j <= size2; j++)                               
        {                                                              
            if (arr1[i] == arr2[j]) {                                  
                checkedValues = true;                                  
                break;                                                 
            }                                                          
        }                                                              
        if (!checkedValues)                                            
            arr3[tmp++] = arr1[i];                                     
    }                                          //Перенос элементов двух заданных массивов в третий
                                                                       
    for (int i = 0; i <= size2; i++)                                   
    {                                                                  
        bool checkedValues = false;                                    
        for (int j = 0; j <= size1; j++)                               
        {                                                              
            if (arr2[i] == arr1[j]) {                                  
                checkedValues = true;                                  
                break;                                                 
            }                                                          
        }                                                              
        if (!checkedValues) {                                          
            arr3[tmp++] = arr2[i];                                     
        }
    }                                                             

    for (int i = 0; i <= size3; i++) {
        cout << "arr3[" << i << "] - " << arr3[i] << "; ";;            //Вывод третьего массива
    }
    cout << endl;
}

void sortingUniqueValuesFromTheFirstArray(int* arr1, int* arr2, int size1, int size2) {
    for (int i = 0; i <= size1; i++)                                        
    {                                                                       
        arr1[i] = rand() % 10;                                              
        cout << "arr1[" << i << "] - " << arr1[i] << "; ";                  
    }                                                                       
    cout << endl;                                          //Вывод заданных массивов
    for (int i = 0; i <= size2; i++)                                       
    {                                                                      
        arr2[i] = rand() % 10;                                             
        cout << "arr2[" << i << "] - " << arr2[i] << "; ";                 
    }                                                                      
    cout << endl;                                                          

    int tmp = 0;                                                           
    for (int i = 0; i <= size1; i++)                                       
    {                                                                      
        bool checkedValues = false;                                        
        for (int j = 0; j <= size2; j++)                                   
        {                                           //Считаем какие элементы будем переносить из первого массива в третий
            if (arr1[i] == arr2[j]) {                                       
                checkedValues = true;                                       
                break;                                                      
            }                                                               
        }                                                                   
        if (!checkedValues) {                                               
            tmp++;                                                          
        }
    }

    int size3 = tmp;                                                        
    int* arr3 = new int[size3];                                             
    tmp = 0;                                                                
                                                                            
    for (int i = 0; i <= size1; i++)                                        
    {                                                                       
        bool checkedValues = false;                                         
        for (int j = 0; j <= size2; j++)         //Перенос элементов первого массива не совпадающих со вторым, в третий
        {                                                                
            if (arr1[i] == arr2[j]) {                                    
                checkedValues = true;                                    
                break;                                                   
            }                                                            
        }                                                                
        if (!checkedValues) {                                            
            arr3[tmp++] = arr1[i];                                       
        }
    }                                                                    

    for (int i = 0; i <= size3; i++)
    {
        cout << "arr3[" << i << "] - " << arr3[i] << "; ";     //Вывод третьего массива
    }
    cout << endl;
}
    
void twoArraysIntoOne(int* arr1, int* arr2, int size1, int size2) {
    for (int i = 0; i <= size1; i++)
    {
        arr1[i] = rand() % 10;
        cout << "arr1[" << i << "] - " << arr1[i] << "; ";
    }
    cout << endl;                                          //Вывод заданных массивов
    for (int i = 0; i <= size2; i++)
    {
        arr2[i] = rand() % 10;
        cout << "arr2[" << i << "] - " << arr2[i] << "; ";
    }
    cout << endl;

    int size3 = 0;
    int* arr3 = new int[size3];
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];                                  // Присвоение элементов первого массива третьим
    }

    for (int i = 0; i < size2; i++)
    {
        arr3[size1 + i] = arr2[i];                          // Присвоение элементов второго массива третьим
    }

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << "arr3[" << i << "] - " << arr3[i] << "; ";  //Вывод третьего массива
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    //srand(time(0));

    int size1 = 10;
    int size2 = 10;
    cout << " Введите размер первого массива ";
    cin >> size1;

    cout << " Введите размер второго массива ";
    cin >> size2;

    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    cout << "\n=========================================Задача1=================================================\n";
    sortingUniqueValuesFromTwoArrays(arr1, arr2, size1, size2);
    cout << "\n=========================================Задача2=================================================\n";
    sortingUniqueValuesFromTheFirstArray(arr1, arr2, size1, size2);
    cout << "\n=========================================Задача3=================================================\n";
    twoArraysIntoOne(arr1, arr2, size1, size2);
}
