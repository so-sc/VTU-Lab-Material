<<<<<<< HEAD
import re
states = "Mississippi Alabama Texas Massachusetts Kansas"
# Split the sentence into words
statesArr = states.split()
statesLists = list()
for val in statesArr:
	if(re.search('xas$',val)):
		statesLists.append(val)
for val in statesArr:
	if(re.search('^k.*s$',val,re.I)):
		statesLists.append(val)
for val in statesArr:
	if(re.search('^M.*s$',val)):
		statesLists.append(val)
for val in statesArr:
	if(re.search('a$',val)):
		statesLists.append(val)
for val in statesLists:
	print(val)
=======
import re
states = "Mississippi Alabama Texas Massachusetts Kansas"
# Split the sentence into words
statesArr = states.split()
statesLists = list()
for val in statesArr:
	if(re.search('xas$',val)):
		statesLists.append(val)
for val in statesArr:
	if(re.search('^k.*s$',val,re.I)):
		statesLists.append(val)
for val in statesArr:
	if(re.search('^M.*s$',val)):
		statesLists.append(val)
for val in statesArr:
	if(re.search('a$',val)):
		statesLists.append(val)
for val in statesLists:
	print(val)
>>>>>>> 8c6ec7dee2e69b01976459206eb713b748e23f9b
print(states)	