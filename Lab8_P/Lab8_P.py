import re
import sys

pattern = re.compile(r"[-+]?(?:\d+(?:\.\d*)?|\.\d+)(?:[eE][-+]?\d+)?") # regular expression for numbers  

try:
    print('Try to open "text.txt"\n')   # work with source file
    f = open('text.txt', 'r')
    lines = f.readlines()
    f.close()
except IOError:
     print ("IOError. Can't open text.txt")
     SystemExit()

print("SUCCESS\n")

try:
    result = open('rezult.txt', 'w')    # work with output file
    for line in lines:
        parser = re.findall(pattern, line)
        if not parser:
            result.write(line)

    result = line
    print('Now we deleting all strings with digits\nTry to create or rewrite "rezult.txt"\n')
except IOError:
    print ("IOError. Can't open/create rezult.txt")
    SystemExit()

print('SUCCESS\n\nResult save in "rezult.txt"')