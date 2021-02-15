# Jacobs University
This repo contains code for the courses...
* C/C++
* ICS
* ADS

### Beginner manual

1. Download & install the respective compiler(s)
    ##### Note: For Mac, C and C++ come pre-installed
    * [C](http://mingw-w64.org/doku.php/download/mingw-builds)
    * [C++](http://mingw-w64.org/doku.php/download/mingw-builds)
    * [Haskell](https://www.haskell.org/ghc/)
2. Download & install Visual Studio Code (aka vscode) [HERE](https://code.visualstudio.com)
3. Open a new file and ready to go

### Compilation

C
```c
gcc -Wall -o outFileName fileName.cpp
```

C++
```c++
g++ -Wall -o outFileName fileName.cpp
```
C++11
```c++
g++ -std=c++11 -o outFileName fileName.cpp
```
Haskell
```haskell
ghc -o outFileName fileName.hs
```

Haskell (loading into gchi)
###### After loading into the Haskell interpreter by running "ghci"
```haskell
:l fileName.hs
```

### Fixes to Common Problems 

Problem  | Fix
------------- | -------------
C++11 code throwing errors (vscode)  | https://stackoverflow.com/a/57341371
Makefile using C++11 (example in repo) | https://stackoverflow.com/a/13828283

<br />

### Usage & Contract of Use 
Permission is henceforth granted for anyone if human, plant, or living being who lives under the sun to make use of the respective files if and only if they are used solely in a learning capacity. Thus, redistribution and or using as one's own is not condoned by myself or anyone who aided in the creation of the files.

---
[NAT](Use:https://github.com/Nat-07)