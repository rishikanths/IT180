#include "SortHeader.h"
int main()
{

    Sort s;
    cout << "Array before Sorting: ";
    s.display();
    s.sort();
    cout << "Array after Sorting: ";
    s.display();
}
