#!/usr/bin/env python
# coding: utf-8
"""
Created on Sat Dec  8 23:36:12 IST 2018
@author: Hitoshirenu
"""

# Import modules
import csv

# Initialize a variable as list to save dataset
data = [] # data --> dataset

print("The Given Training Data:")
# Open the csv file in read mode and add rows to data
with open("datasets/enjoysport.csv", "r") as csvFile:
    reader = csv.reader(csvFile)
    for row in reader:
        data.append(row)
        print(row)
    
# Number of attributes i.e. all columns, excluding the last column
num_attributes = len(data[0]) - 1

# The number of "?" and "0" represent the number of attributes 
print("\nThe most general hypothesis :\n", ["0"] * num_attributes)
print("\nThe most specific hypothesis :\n", ["?"] * num_attributes)

hypothesis = ["0"] * num_attributes
print("\nInitial value of the hypothesis:\n",hypothesis)

# First row values of the dataset without the last column value
hypothesis = data[1][:-1]

print("\n**** Find S: Finding Maximally specific hypothesis ****\n")
for i in range(1, len(data)):
    # Check if the rows last value is "yes"
    if data[i][num_attributes] == "yes":
        for j in range(num_attributes):
            hypothesis[j] = "?" if data[i][j] != hypothesis[j] else data[i][j]
    print("For training example no :{} Hypothesis:{}".format(i, hypothesis))

print("\nThe Maximally Specific Hypothesis for the given Training Examples:\n", hypothesis)