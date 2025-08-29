#include <iostream> 

using namespace std;

//  Recursion - Is a process when a function invoke itself

int recursive_sum(int m, int n){
    if (m==n){  //Base case
        return m; //Remembering when you place return, it is a break for the function
    }
    return m + recursive_sum(m+1, n); //This will call the function until the first requirement (if (m==n)) be completed, summing 1 to m

}

int main () {

    int original;
    int n, m;
    int result = 0;

    cout << "===== THIS PROGRAM WILL SUM ALL THE NUMBERS BETWEEN 2 NUMBERS YOU CHOOSE =====" << "\n" << endl;
    cout << "Please, inset the first number: ";
    cin >> m;
    original = m;
    cout << "Now, please insert the second number: ";
    cin >> n;


    cout << "The sum between " << original << " and " << n << " is: " <<  recursive_sum(m, n);

    /* Mission : Sum all the numbers between m and n (defined by the user) - We can do it using loops as below :

    for(int i = m; i <= n; i++){
        result = result + i;
    }

    cout << "The sum between " << original << " and " << n << " is: " << result;




    */
    
    return 0;
}