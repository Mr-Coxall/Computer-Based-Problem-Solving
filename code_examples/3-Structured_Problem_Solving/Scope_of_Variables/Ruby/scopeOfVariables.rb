#!/usr/bin/ruby
# Copyright (c) Jonathan Pasco-Arnone All rights reserved.
#
# Created by: Jonathan Pasco-Arnone
# Created on: Mar 2022
# This program shows how local and global variables work

# Global variable
$variableX = 25

# This shows what happens with local variables
def localVariable
    variableX = 10
    variableY = 30
    variableZ = variableX + variableY
    puts "Local variableX, variableY, variableZ: #{variableX}"\
        " + #{variableY} = #{variableZ}"
end

# This shows what happens with global variables
def globalVariable
    variableX = $variableX + 1
    variableY = 30
    variableZ = variableX + variableY
    puts "Global variableX. Local variableY, variableZ: #$variableX"\
        " + #{variableY} = #{variableZ}"
end

localVariable()
globalVariable()
