package main

import (
	"fmt"
	"math"
)

func main() {
    var x, n float64
    
    fmt.Print("Digite a base: ")
    fmt.Scan(&x)
    fmt.Print("Digite o expoente: ")
    fmt.Scan(&n)

    result := math.Pow(x, n)
    fmt.Printf("O resultado é: %v.", result)
}