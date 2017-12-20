import re,sys

with open(sys.argv[1]) as f:
	contents = f.readlines()
contents = [l.rstrip() for l in contents]
contents = [l.replace("\t\t"," ") for l in contents]

with open(sys.argv[1],"w") as f:
	f.write("\n".join(contents))
