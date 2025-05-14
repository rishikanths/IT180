#include "SortHeader.h"
Sort::Sort(){
  srand(time(NULL));
  for (int i = 0; i < SIZE; i++)
  {
      array[i] = rand()%1000 +1;
  }
}
void Sort::display()
{
    for (int i = 0; i < SIZE; i++)
        cout << array[i] << " ";
    cout << endl;
}
void Sort::sort()
{
    for (int i = 0; i < SIZE; i++)
    {
        int swaps = 0; //flag to detect any swap is there or not
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swaps = 1; //set swap flag
            }
        }
        if (!swaps)
            break; // No swap in this pass, so array is sorted
    }
}
