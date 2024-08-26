package main

import "fmt"

func isPrefixString(s string, words []string) bool {
	var s1 string
	for i := 0; i < len(words)-1; i++ {
		s1 += words[i]
	}

	if s == s1 {
		return s == s1
	}

	return false
}

func main() {
	s := "iloveleetcode"
	words := []string{"i", "love", "leetcode", "apples"}

	fmt.Println(isPrefixString(s, words))
}
