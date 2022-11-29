/**
 * Created by: Mr. Coxall
 * Created on: Sep 2020
 * This program shows declaring variables
 */

package main

import (
  "fmt"
)

func main() {
  // variable definition
  var is_current bool = true  // bool
  var is_old = true  // type is inferred
  var age int = 32  // int
  var area = 32.4  // float32
  var some_words string = "Hello, World!"  // string

  fmt.Println(is_current)
  fmt.Println(is_old)
  fmt.Println(age)
  fmt.Println(area)
  fmt.Println(some_words)

  fmt.Println("\nDone.")
}
