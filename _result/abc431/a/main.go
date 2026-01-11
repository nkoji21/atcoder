package main

import "fmt"

func main() {
	var h, b int
	fmt.Scanf("%d %d", &h, &b)

	if h <= b {
		fmt.Println(0)
	} else {
		fmt.Println(h - b)
	}
}
