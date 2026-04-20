package main

import "fmt"

func main() {
    var n int
    fmt.Print("Digite um valor: ")
    fmt.Scan(&n)
    for count := 1; count <= n; count += 2{
        fmt.Print(count, " ")
    }
}