# frozen_string_literal: true
#
# Created by: Mr. Coxall
# Created on: Sept 2020
# This program shows declaring constants

# A constant in Ruby is a type of variable which always starts with a capital letter.
# They can only be defined outside of methods, unless you use metaprogramming.
# By adding ".freeze", you will get a warning if you try and change a constant.
ROOM_NUMBER = 212.freeze
HST = 0.13.freeze
COUNTRY = "Canada".freeze

puts "Room: " + ROOM_NUMBER.to_s
puts HST.to_s + "%"
puts COUNTRY

puts "\nDone."
