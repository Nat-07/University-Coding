-- vowel function
vowel :: Char -> Bool
vowel 'a' = True
vowel 'e' = True
vowel 'i' = True
vowel 'o' = True
vowel 'u' = True
vowel 'l' = False
-- underscore catches everything undefined 
vowel _ = False



-- load into ghci using :load (filename)
-- then, vowel 'letter'


-- map vowel "hello world"
-- Returns: [False,True,False,False,True,False,False,True,False,False,False] 
-- goes through our string and tells us if vowel or not

-- ====================================================================================================================

-- list function
elems :: [a] -> String
elems[] = "an empty list"
elems[_] = "A list with one element"
elems _ = "A list with multiple elements"

-- elems []
-- return: "an empty list"


-- elems [1]
-- return: "A list with one element"

-- elems [1,2]
-- return: "A list with multiple elements"

-- ====================================================================================================================

-- fibonacci calculator 

fib :: Integer -> Integer
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib(n-2)

-- *Main> fib 0
-- return: 0
-- *Main> fib 1
-- return: 1
-- *Main> fib 2
--return: 1
-- *Main> fib 3
-- return: 2
-- *Main> map fib [0..10]
-- return: [0,1,1,2,3,5,8,13,21,34,55]
-- Main> map fib [0..100]
-- return: [0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,^CInterrupted.

-- ====================================================================================================================

-- writing sum function

-- built in sum
--sum [1..10]
-- return: 55

--our own

-- colon ":" is a list instructor operator
sum' :: Num a => [a] -> a
sum' [] = 0
sum' (x:xs) = x + sum' xs

-- *Main> sum' []
-- return: 0

-- *Main> sum' [1]
-- return: 1

-- *Main> sum' [1,2,3]
-- return: 6
