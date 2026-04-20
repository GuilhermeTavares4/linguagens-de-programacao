package main

import "fmt"

func main() {
    var fahrenheit_temp float64
    fmt.Print("Digite um valor: ")
    fmt.Scan(&fahrenheit_temp)
    var celsius_temp float64 = (fahrenheit_temp - 32) * 5 / 9;
    fmt.Printf("A temperatura em graus Celsius eh %.1fC", celsius_temp)
}