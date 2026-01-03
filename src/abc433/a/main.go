package main

import "fmt"

func main() {
	var x, y, z int
	fmt.Scan(&x, &y, &z)

	for i := 0; i <= x; i++ {
		if x+i == (y+i)*z {
			fmt.Println("Yes")
			return
		}
	}
	fmt.Println("No")
}
