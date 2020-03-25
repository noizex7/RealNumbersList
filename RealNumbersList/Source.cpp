#include "RealNumberList.h"
int main()
{
    const int SIZE = 20;
    RealNumberList numbers(SIZE);
    int val, x, n;

    cout << "Enter he quantity of elements: ";
    cin >> n;
    for (x = 0; x < n; x++)
    {
        cout << "Value #" << x << ":";
        cin >> val;
        numbers.setElement(x, val);

    }
    cout << endl;

    numbers.sortArray(n);

    for (x = 0; x < n; x++)
    {
        cout << numbers.getElement(x) << " ";
    }
    cout << endl;
    numbers.displayLowestandHighest(n);

    return 0;
}