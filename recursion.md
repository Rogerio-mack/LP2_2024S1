

![imagem](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Recursive-Functions-in-c.png)


```
// Recursive Function to calculate Factorial of a number
int factorial(int n)
{
    // Base case
    if (n == 0) {
        return 1;
    }
 
    // Recursive case
    return n * factorial(n - 1);
}
 
// Driver Code
 
int main()
{
    int n = 4;
 
    printf(factorial(n));
    return 0;
}
```
