import sys

with open(sys.argv[1]) as f:
	contents = [l.rstrip() for l in f.readlines()]
with open(sys.argv[2]) as f:
	replacements = [l.rstrip().split(",",1) for l in f]
for i in range(len(contents)):
	for repl in replacements:
		if i==int(repl[0]):
			contents[i]=repl[1]
for i in range((len(replacements)-1),-1,-1):
	repl = replacements[i]
	if repl[0]=="-1":
		contents.insert(0,repl[1])
	elif repl[0]=="-2":
		parts = repl[1].split(",")
		contents = [l.replace(parts[0],parts[1]) for l in contents]
	elif repl[0]=="-3":
		contents.pop(int(repl[1])) # remove line number X
with open(sys.argv[1],"w") as f:
	f.write("\n".join(contents))
