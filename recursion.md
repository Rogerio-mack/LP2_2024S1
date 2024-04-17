

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

Necessidade de função recursiva

Uma função recursiva é uma função que resolve um problema resolvendo instâncias menores do mesmo problema. 

1. Resolvendo tarefas complexas:
Funções recursivas dividem problemas complexos em instâncias menores do mesmo problema, resultando em código compacto e legível.

2. Dividir e conquistar:
Funções recursivas são adequadas para algoritmos de divisão e conquista, como merge sort e quicksort, dividindo problemas em subproblemas menores.

3. Retrocesso:
O retrocesso recursivo é ideal para problemas como N-Queens e Sudoku.

4. Programação dinâmica:
Funções recursivas resolvem com eficiência problemas de programação dinâmica, resolvendo subproblemas e combinando suas soluções.

5. Estruturas de árvores e gráficos:
Funções recursivas são ótimas para trabalhar com estruturas de árvores e gráficos.

# Para escrever uma função recursiva

## Componentes de uma função recursiva

**Caso base**: toda função recursiva deve ter um caso base. O caso base é o cenário mais simples que não requer recursão adicional. Esta é uma condição de encerramento que impede que a função se chame indefinidamente. Sem um caso base adequado, uma função recursiva pode levar a uma recursão infinita.

**Caso recursivo**: No caso recursivo, a função chama a si mesma com os argumentos modificados. Esta é a essência da recursão – resolver um problema maior dividindo-o em instâncias menores do mesmo problema. O caso recursivo deve se aproximar do caso base a cada iteração.

```
