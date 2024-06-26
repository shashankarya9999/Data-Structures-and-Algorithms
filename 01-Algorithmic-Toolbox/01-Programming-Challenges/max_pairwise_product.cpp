#include<cstdlib>
#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;

// this solution is quite slow(time limit exceeds)
// our algorithm goes through all possible pairs of input numbers
// need for better algorithm
long long int max_pairwise_product(const vector<int> &numbers)
{
    long long int result = 0;
    int n = numbers.size();

    for( int i=0; i<n; ++i )
    {
        for( int j=i+1; j<n; ++j )
        {
            if(((long long)numbers[i]) * numbers[j] > result)
            {
                result = ((long long)numbers[i]) * numbers[j];
            }
        }
    }

    return result;
}

// improving the naive solution
// idea: that to find the maximum product of two numbers from our sequence,
// it is actually enough to find the two maximal numbers in the sequence
// this is because all numbers in our sequence are non-negative

long long max_pairwise_product_fast(const vector<int> &numbers)
{
    int n = numbers.size();

    int max_index1 = -1;
    for(int i=0; i<n; ++i)
    {
        if((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
            max_index1 = i;
    }

    int max_index2 = -1;
    for(int j=0; j<n; ++j)
    {
        if((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
            max_index2 = j;
    }

    // cout << max_index1 << ' ' << max_index2 << "\n";

    return ((long long)(numbers[max_index1])) * numbers[max_index2];
}

int main()
{
    // stress testing
    /*
        while(true)
        {
            int n = rand() % 1000 + 2;
            cout << n << "\n";
            vector<int> a;

            for(int i=0; i<n; ++i)
            {
                a.push_back(rand() % 100000);
            }

            for(int i=0; i<n; ++i)
            {
                cout << a[i] << ' ';
            }

            cout << "\n";
            
            long long res1 = max_pairwise_product(a);
            long long res2 = max_pairwise_product_fast(a);

            if(res1 != res2)
            {
                cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
                break;
            }

            else
            {
                cout << "OK\n";
            }
        }    
    */
    
    int n;
    
    // cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> numbers(n);

    // cout << "Enter the elements: ";
    for( int i=0; i<n; ++i )    cin >> numbers[i];

    long long int result = max_pairwise_product(numbers);
    long long int result2 = max_pairwise_product_fast(numbers);
    
    // cout << result;     // time limit exceeds for this
    cout << result2;
    
    // cout << "The maximum pairwise product = " << result << "\n";
    // cout << "The maximum pairwise product = " << result2 << "\n";

    return 0;
}
