#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;

int max_pairwise_product(const vector<int>& numbers)
{
    int result = 0;
    int n = numbers.size();

    for( int i=0; i<n; ++i )
    {
        for( int j=i+1; j<n; ++j )
        {
            if( numbers[i] * numbers[j] > result )
            {
                result = numbers[i] * numbers[j];
            }
        }
    }

    return result;
}

int main()
{
    int n;
    
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter the elements: ";
    for( int i=0; i<n; ++i )    cin >> numbers[i];

    int result = max_pairwise_product(numbers);
    cout << "The maximum pairwise product = " << result << endl;

    return 0;
}
