package main

import (
	"bufio"
	"fmt"
	"os"
)

func get_substring(phrase string, index int, size int) string{
    var substring string = ""
    for i := 0; i < size; i++ {
        substring += string(phrase[i + index])
    }
    return substring
}

func main() {
    var phrase string
    var word string
    var substr_count int = 0

	reader := bufio.NewReader(os.Stdin)

    fmt.Print("Digite uma frase: ")
    phrase, _ = reader.ReadString('\n')
    fmt.Print("Digite uma palavra que está nessa frase: ")
    fmt.Scan(&word)

    var substr_length = len(word)
    for i := 0; i < len(phrase) - substr_length + 1; i++ {
        var substr string = get_substring(phrase, i, substr_length)
        if word == substr{
            substr_count += 1
        }
    }
		
    if substr_count > 0 {
        fmt.Printf("Essa palavra se repete %v vezes na frase.", substr_count)
    } else {
      fmt.Print("Essa palavra não se repete nenhuma vez na frase.")  
    }
    
}