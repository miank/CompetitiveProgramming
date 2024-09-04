package main

import "fmt"

func rearrangeArray(nums []int) []int {
	// Separate positive and negative numbers
	pos := []int{}
	neg := []int{}

	for _, num := range nums {
		if num > 0 {
			pos = append(pos, num)
		} else {
			neg = append(neg, num)
		}
	}

	result := make([]int, len(nums))
	posIndex, negIndex := 0, 0

	for i := 0; i < len(nums); i++ {
		if i%2 == 0 {
			result[i] = pos[posIndex]
			posIndex++
		} else {
			result[i] = neg[negIndex]
			negIndex++
		}
	}

	return result
}

func main() {
	nums := []int{3, 1, -2, -5, 2, -4}
	result := rearrangeArray(nums)

	fmt.Println(result)
}
