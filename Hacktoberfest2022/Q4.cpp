#include <iostream>

using namespace std;
 
/* Returns true if the there is a subarray of
arr[] with a sum equal to 'sum' otherwise
returns false. Also, prints the result */

int subArraySum(int arr[], int n, int sum)
{

    /* Initialize currentSum as value of

    first element and starting point as 0 */

    int currentSum = arr[0], start = 0, i;
 

    /* Add elements one by one to currentSum and

    if the currentSum exceeds the sum,

    then remove starting element */

    for (i = 1; i <= n; i++) {

        // If currentSum exceeds the sum,

        // then remove the starting elements

        while (currentSum > sum && start < i - 1) {

            currentSum = currentSum - arr[start];

            start++;

        }
 

        // If currentSum b…
