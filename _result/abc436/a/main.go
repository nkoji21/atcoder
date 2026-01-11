package main

import "fmt"

func main() {
	var n int
	var s string
	fmt.Scan(&n, &s)

	for i := len(s); n > i; i++ {
		fmt.Printf("%c", 'o')
	}

	fmt.Println(s)
}
