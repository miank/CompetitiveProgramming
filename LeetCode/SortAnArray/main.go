package main

import "fmt"

func sortArray(nums []int) []int {
	size := len(nums)
	i := 0
	j := size - 1
	for i < j {
		if nums[i] > nums[j] {
			nums[i], nums[j] = nums[j], nums[i]
			i++
		}
		j--
	}

	return nums
}

func main() {
	arr := []int{5, 1, 1, 2, 0, 0}
	arr = sortArray(arr)
	fmt.Println(arr)
}
