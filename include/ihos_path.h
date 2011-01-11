#ifndef IHOS_PATH_H
#define IHOS_PATH_H


#include <string>

// strings representing various path-related bits and pieces
const std::string CURDIR = ".";
const std::string PARDIR = "..";
const std::string EXTSEP = ".";
const std::string SEP = "\\";
const std::string PATHSEP = ";";
const std::string ALTSEP = "/";
const std::string DEFPATH = ".;C:\\Windows";
const std::string DEVNULL = "nul";


std::string normcase(std::tring& s);

bool isabs(const std::string& s);

std::string join(std::string a, std::string& p, ...);

std::string splitdrive(const std::string p);

bool splitunc(std::string& p);

/**
 * Split a path in head (everythin up to the last '/') and tail (the
 * rest). After the trailing '/' is stripped, the invariant
 * join(head, tail) = p holds.
 * The resulting head won't end in '/' unless it is the root.
 *
 * @param p
 * @param head
 * @param tail
 *
 * @return
 */
bool split(std::string& p, std::string& head, std::string& tail);


bool splitext(p);

def basename(p):
def dirname(p):
def commonprefix(m):
def getsize(filename):
def getmtime(filename):
def getatime(filename):
def getctime(filename):
def islink(path):
def exists(path):
def isdir(path):
def isfile(path):
def ismount(path):
def walk(top, func, arg):
def expanduser(path):
def expandvars(path):
def normpath(path):
def abspath(path):
def abspath(path):



#endif
