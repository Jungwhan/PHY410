class StudentRecord (object):
    first_ = ""
    last_ = ""
    score_ = 0.0

    def __init__(self, first, last, score) :
        self.first_ = first
        self.last_ = last
        self.score_ = score

    def  firstname(self) :
        return self.first_

    def lastname(self) :
        return self.last_

    def score(self):
        return self.score_

    def putin (self, in):
        f = open(in)
        value = f.readline()
        self.first = value
        value = f.readline()
        self.last = value
        value = f.readline()
        self.score = value
        if value == "" :
            return false;
        else :
            return true;

    def putoff (self, out):
        print (self.last ", " self.first ", " (str)self.score )

sr = []
def calculate(alist):
    if alist.size() > 0 :
        for Sr in alist:
            ave = ave + Sr.score
        ava = ave / alist.size()
    return ave

import sys
n = sys.argc
val = sys.argv[n-1]
if n < 2:
    print ("Usage: " (str)sys.argv[0] << "filename.txt")
    return 0

f = open(argv[1])
asdf = StudentRecord
    while (asdf.putin)
        sr.append(asdf)
        print ("Added Record :")
        sr.putoff

print ("Average :" calculate)
