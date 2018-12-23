#!/usr/bin/env python
# coding: utf-8
"""
Created on Sat Dec  8 23:36:12 IST 2018
@author: Hitoshirenu
"""

# Import modules
import numpy as np

# Initialize values
X = np.array(([2, 9], [1, 5], [3, 6]), dtype=float)
y = np.array(([92], [86], [89]), dtype=float)

# Divide each element of X by an array with max of each column
X = X / np.max(X, axis=0) 
# Divide each element of y by 100
y = y / 100

def sigmoid(x):
    return 1 / (1 + np.exp(-x))  # The np.exp works like e^x where e is eulers constant 

def sigmoid_derive(x):
    return x * (1 - x)

# Initialise values
epoch=1000
learning_rate = 0.2
input_nodes = 2
hidden_nodes = 3 
output_nodes = 1

# Weight of hidden layer
wh = np.random.uniform(size = (input_nodes, hidden_nodes))
# Weight of output layer
wout=np.random.uniform(size = (hidden_nodes, output_nodes)) 

# Bias of hidden layer
bh = np.random.uniform(size = (1, hidden_nodes))
# Bias of output layer
bout=np.random.uniform(size = (1, output_nodes))

# Training starts
for i in range(epoch):
	# Sum of (input * weights in hidden layer) + bias of hidden layer
    h_ip = np.dot(X, wh) + bh

    # Apply Activation Function
    h_out = sigmoid(h_ip)

    # Sum of (o/p of hidden layer * weights of output layer) + bias of output layer
    o_ip = np.dot(h_out, wout) + bout
    
    # Apply Activation Function
    o_out = sigmoid(o_ip)

    # Delta of o/p layer
    delta_o = (y - o_out) * sigmoid_derive(o_out)
    
    # Delta of hidden layer
    delta_h = delta_o.dot(wout.T) * sigmoid_derive(h_out)
    
    # Update the weights
    wout += h_out.T.dot(delta_o) * learning_rate
    wh += X.T.dot(delta_h) * learning_rate

    # error = sum(deltaK) ** 2 / len(deltaK)    
    # print("Epoch -> {0}, learning_rate -> {1}, error_rate -> {2}".format(i, learning_rate, error))

print("Normalized Input: \n", X)
print("Actual Output: \n", y)
print("Predicted Output: \n" ,o_out)