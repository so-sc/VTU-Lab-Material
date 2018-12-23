#!/usr/bin/env python
# coding: utf-8
"""
Created on Sat Dec  8 23:36:12 IST 2018
@author: Hitoshirenu
"""

# Import modules
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn import datasets

# Load the iris dataset 
iris = datasets.load_iris()

# Split the data into train and test samples
xtrain, xtest, ytrain, ytest = train_test_split(iris.data, iris.target, test_size=0.1)
print("\nDataset is split into Training:{} and Testing:{} instances".format(xtrain.shape[0], xtest.shape[0]))

# Show what number corresponds to which label
for index, value in enumerate(iris.target_names):
    print("Label: {} --> {}".format(index, value))

# Create object of KNN classifier
classifier = KNeighborsClassifier(n_neighbors = 1)

# Perform Training
classifier.fit(xtrain, ytrain)

# Perform testing
y_pred = classifier.predict(xtest)

# Display the results
print("Results of Classification using K-nn with K=1 ")
for r in range(len(xtest)):
    print("Sample:{} Actual-label:{} Predicted-label:{}".format(xtest[r], ytest[r], y_pred[r]))
print("Classification Accuracy :" , classifier.score(xtest, ytest));