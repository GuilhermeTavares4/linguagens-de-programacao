package main

import (
	"fmt"
	"math"
)

func main() {
    var x int
    var is_primo bool = true
    fmt.Print("Digite um valor: ")
    fmt.Scan(&x)
    for i := 2.0; i <= math.Floor(float64 (x) / 2); i++{
        if math.Mod(float64 (x), i) == 0 {
            is_primo = false
            break
        }
    }
    if x == 1{
        is_primo = false
    }
    if is_primo {
        fmt.Printf("O número %v é primo.", x)
    } else {
        fmt.Printf("O número %v não é primo.", x)
    }

}