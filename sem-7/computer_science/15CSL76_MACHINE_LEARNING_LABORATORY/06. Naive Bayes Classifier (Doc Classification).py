#!/usr/bin/env python
# coding: utf-8
"""
Created on Sat Dec  8 23:36:12 IST 2018
@author: Hitoshirenu
"""

# Import modules
import pandas as pd

# Read csv file content under attributes "message" and "label"
msg = pd.read_csv("datasets/text_doc.csv", names = ["message", "label"]) 
print("Total instances in the dataset:", msg.shape[0])
print("\nThe message and its label of first 5 instances:\n", msg[0:5])

# Create another column where pos/neg are in terms of 1/0
msg["labelnum"] = msg.label.map({"pos":1, "neg":0})
X = msg.message
Y = msg.labelnum

# Split the data for training and testing   
from sklearn.model_selection import train_test_split
xtrain, xtest, ytrain, ytest = train_test_split(X,Y)
print("\nDataset is split into Training:{} and Testing:{} instances".format(xtrain.shape[0], xtest.shape[0]))

# Feature extraction form dataset
from sklearn.feature_extraction.text import CountVectorizer
count_vect = CountVectorizer()
xtrain_dtm = count_vect.fit_transform(xtrain) 
xtest_dtm = count_vect.transform(xtest)
print("\nTotal features extracted using CountVectorizer:",xtrain_dtm.shape[1])

# Create a datafram according to pos/neg occurances
df = pd.DataFrame(xtrain_dtm.toarray(), columns = count_vect.get_feature_names())
print("\nFeatures for first 5 training instances:\n", df[0:5])

# Run prediction the dataset
from sklearn.naive_bayes import MultinomialNB
clf = MultinomialNB().fit(xtrain_dtm, ytrain)
predicted = clf.predict(xtest_dtm)

print("\nClassstification results of testing samples are given below")
for doc, p in zip(xtest, predicted):
    pred = "pos" if p == 1 else "neg"
    print("{} -> {} ".format(doc, pred))

from sklearn import metrics
print("\nAccuracy metrics")
print("Accuracy of the classifer: ", metrics.accuracy_score(ytest, predicted))
print("Recall: ", metrics.recall_score(ytest, predicted))
print("Precison :", metrics.precision_score(ytest,predicted))
print("Confusion matrix:\n", metrics.confusion_matrix(ytest,predicted))