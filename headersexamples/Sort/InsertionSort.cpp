#include "SortHeader.h"
Sort::Sort(){

  srand(time(NULL));
  for (int i = 0; i < SIZE; i++)
  {
      array[i] = rand()%10 +1;
  }
}
void Sort::sort()
{
    int key, j;
    for (int i = 1; i < SIZE; i++)
    {
        key = array[i];
        j = i;
        while (j > 0 && array[j - 1] > key)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
    }
}
void Sort::display()
{
    for (int i = 0; i < SIZE; ++i)
        cout << array[i] << " ";
    cout << "\n";
}
