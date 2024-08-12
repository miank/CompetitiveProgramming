package main

import (
	"fmt"
)

func isSubsequence(s string, t string) bool {
	sIndex, tIndex := 0, 0

	// Iterate through the string t
	for tIndex < len(t) {
		// If characters match, move to the next character in s
		if sIndex < len(s) && s[sIndex] == t[tIndex] {
			sIndex++
		}
		tIndex++
	}

	// If we've matched all characters in s, then it's a subsequence
	return sIndex == len(s)
}

func main() {
	// Example usage
	s := "abc"
	t := "ahbgdc"
	fmt.Println(isSubsequence(s, t)) // Output: true
}
