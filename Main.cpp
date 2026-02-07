
#include <iostream>

#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> MyDynamicArray(5);
    
    MyDynamicArray.SetItem(0 ,10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\n\nIs Empty ? " << MyDynamicArray.IsEmpty() ;
    cout << "\n\nArray Size ? " << MyDynamicArray.Size();

    cout << "\n\nArrays Items : \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(2);
    cout << "\n\nArrays Items after resize to 2 : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size();


    MyDynamicArray.Resize(10);
    
    cout << "\n\nArrays Items after resize to 10 : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size();



    cout << "\n" << MyDynamicArray.GetItem(1) << "\n";

    MyDynamicArray.Resize(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);


    MyDynamicArray.Reverse();
    cout << "\n\nArray Items After Reverse : ";
    MyDynamicArray.PrintList();

    int Index = MyDynamicArray.Find(30);

    if (Index == -1) 
    {
        cout << "\n\nItem was not at index";
    }
    else {
        cout << "\n\n30 is found at index : " << Index;
    }
    
    MyDynamicArray.DeleteItem(30);
    cout << "\n\nArray Items After deleting 30 : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size() ;
    

    MyDynamicArray.DeleteItemAt(2);
    cout << "\n\nArray Items After deleting Item(2) : ";
    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteFirstItem();
    cout << "\n\nArray Items After deleting first item : ";
    MyDynamicArray.PrintList();

    MyDynamicArray.DeleteLastItem();
    cout << "\n\nArray Items After deleting last item : ";
    MyDynamicArray.PrintList();


    MyDynamicArray.Clear();
    cout << "\n\nArray Items After Clear : ";
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);
    
    MyDynamicArray.InsertAt(2 , 500);
    cout << "\n\nArray Items After inserting 500 in index 2 : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size();

    MyDynamicArray.InsertAtBeginning(200);
    cout << "\n\nArray Items After inserting 200 in Beginning : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size();

    MyDynamicArray.InsertBefore(2 , 600);
    cout << "\n\nArray Items After inserting 600 before index 2 : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size();

    MyDynamicArray.InsertAfter(2, 800);
    cout << "\n\nArray Items After inserting 800 after index 2 : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size();

    MyDynamicArray.InsertAtEnd(900);
    cout << "\n\nArray Items After inserting 900 at end : \n";
    MyDynamicArray.PrintList();
    cout << "\nArray Size : " << MyDynamicArray.Size();


    
}

