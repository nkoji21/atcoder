package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		n, m int
		s, t string
	)
	fmt.Scan(&n, &m, &s, &t)

	ans := math.MaxInt
	for i := 0; i < (n - m + 1); i++ {
		res := 0
		for j := range t {
			sInt, tInt := int(s[i+j]-'0'), int(t[j]-'0')
			if sInt < tInt {
				res += (sInt - tInt + 10)
			} else {
				res += (sInt - tInt)
			}
		}
		ans = min(ans, res)
	}

	fmt.Println(ans)
}
