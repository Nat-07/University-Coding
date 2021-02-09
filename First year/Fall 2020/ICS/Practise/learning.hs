import Data.List
import System.IO

--Generate a list of even #s
evenList = [2,4..20]

-- Generating a list of letters starting at 'A' all the way to 'Z'
letterList = ['A', 'C'.. 'Z']

-- infin list
infinPow10 = [10,20..]

-- Generates a list of 10 2s
many2s = take 10(repeat 2)

-- self made prime number list
primeNumbers = [3,5,7,11]

morePrimes = primeNumbers ++ [13,17,19,23,29]

-- DON'T RUN
morePrimes2 = 2: morePrimes2

-- Prints 10 numbers and cycles from 1,2,3,4,5
cycleList = take 10(cycle [1,2,3,4,5])

-- make a list from 1 to 10 and multiply the current value * 2
listTimes2 = [x * 2 | x <- [1..10]]


-- make a list and multiply the current number by 3 and only print if less than or equal to 20
listTimes3 = [x * 3 | x <- [1..10], x * 3 <= 20]

-- go through the list 1 to 500 and only want those values that are divisable by 13 and 9
divisBy9N13 = [x | x <- [1..500], x `mod` 13 == 0, x `mod` 9 == 0]

-- adds the first number from the first list to the second and then the second, third, ect..
sumofList = zipWith (+) [1..5] [6,7,8,9,10]

-- only get numbers that are less more than 5 from morePrimes list (made above)
listBiggerThen5 = filter (>5) morePrimes

-- kinda while loop up till 20 getting even numbers
evensUpTo20 = takeWhile (<= 20) [2,4..]

-- multiplying (due to *) all of the items together from left to right (change to foldr if want right to left)
multOfList = foldl (*) 1 [2,3,4,5]

-- creating a list of 3 to the power of 1 through 10
pow3List = [3^n | n <- [1..10]]

-- creating a list of sub lists that multiply the two values of x and y together. So 1*1, 1*2, 1*3 and so on
multTable= [[x*y | y <- [1..10]] | x <-[1..10]]

-- creating two tuples
randTuple = (1,"Random Tuple")
bobSmith = ("Bob Smith", 52)

-- how to get first item out of tuple and then the second item out of same tuple
bobName = fst bobSmith
bobAge = snd bobSmith

-- making two tuples
names = ["Bob", "Marry", "Tom"]
addresses = ["123 Main", "234 North", "567 South"]
-- combining names and addresses into one list. So first item of first tuple matches with first of other tuple
namesNAddress = zip names addresses

-- A program for when we compile using 'ghc --make learning.hs'
main = do
    -- print What is your name
    putStrLn "What is yout name"
    -- get what they type
    name <- getLine
    -- say hello and concatinate 
    putStrLn ("Hello " ++ name)


-- creating functions in Haskell

-- creating a function that takes 2 ints and returns one int
addMe :: Int -> Int -> Int

-- functionName param1 param2 = operations (returned value)
addMe x y = x + y

-- make a function called sumMe that we didn't specify takes ints so we can put int doubles when running it
sumMe x y = x + y

-- declaring types for function params and return and making what the function does
addTuples :: (Int, Int) -> (Int, Int) -> (Int, Int)
addTuples (x,y) (x2,y2) = (x+x2, y+y2)

-- our function declaration
whatAge :: Int -> String 
-- if the number is 16 or 18 of 21
whatAge 16 = "You can drive"
whatAge 18 = "You can vote"
whatAge 21 = "You are an adult"
-- if it is anything else
whatAge _ = "Nothing important"

-- defining and using a function factorial
factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial(n-1)

-- another way of finding the factors. Multiply all of the numbers from 1 to n
prodFact n = product [1..n]

-- finding if odd by defining and then using guards to check
isOdd :: Int -> Bool
isOdd n
    |n `mod` 2 == 0 = False
    | otherwise = True 

-- another way of finding if odd or even but by not using guards
isEven n = n `mod` 2 == 0

-- using guards
whatGrade age
    | (age >= 5) && (age <= 6) = "Kindergarten"
    | (age > 6) && (age <= 10) = "Elementary school"
    | (age > 10) && (age <=14) = "Middle school"
    | (age > 14) && (age <=18) = "High School"
    |otherwise = "Go to college"

-- define the function
batAvgRating :: Double -> Double -> String
--for the function batAvgRating we get 2 parameters
batAvgRating hits atBats
    | avg <= 0.200 = "Terrible Batting Average"
    | avg <= 0.250 = "Average Player"
    | avg <= 0.280 = "Your doing pretty good"
    | otherwise = "You are amazing!"
    where avg = hits/atBats

-- get list of ints and return a string
getListItems :: [Int] -> String

--if list is empty
getLineItems [] = "Your list is empty"
-- gets the first item in the list
getListItems (x:[]) = "Your list starts with " ++ show x 
-- gets the first item x, and the second item y
getListItems (x:y:[]) = "Your list contains " ++ show x ++ " and " ++ show y
-- gets the first item x and then the rest of the items xs
getListItems (x:xs) = "The first item is " ++ show x ++ " and the rest are " ++ show xs

-- get the first item out of the string
getFirstItem :: String -> String
-- if empty string
getFirstItem [] = "Empty String"
-- allows us to get a letter in a string
getFirstItem all@(x:xs)= "The first letter in " ++ all ++ " is " ++ [x]

-- multiplying a given int by 4 and returning an int
times4 :: Int -> Int
times4 x = x * 4

-- Using map to pass every number in the list to the function times4
listTimes4 = map times4[1,2..5]

-- making a function that takes a int list and returns an int list
multBy4 :: [Int] -> [Int]
-- if empty list, then return empty
multBy4 [] = []
-- if not, then take the first multiply by 4 and then run the same function again with the remaining list
multBy4 (x:xs) = times4 x : multBy4 xs


areStringsEq :: [Char] -> [Char] -> Bool 
areStringsEq [] [] = True 
areStringsEq (x:xs) (y:ys) = x==y && areStringsEq xs ys
areStringsEq _ _  = False

doMutlt :: (Int -> Int) -> Int
doMutlt func = func 3

-- making number3Times4 equal to doMult with the parameter for domult the function times4
number3Times4 = doMutlt times4

getAddFunc :: Int -> (Int -> Int)
getAddFunc x y = x + y
adds3 = getAddFunc 3

fourPlus3 = adds3 4

threePlusList = map adds3 [1..5]

-- making a function that applies the list to the lamda function(one without a name). All it does is multiply by 2
dbl1To10 = map(\x->x * 2) [1..10]

-- if statements in haskell
doubleEvenNumber y = 
    if(y `mod` 2 /= 0)
        then y
        else y*2

-- Conditionals
-- if the number is 5 then prints Go to kindergarten, and so on
getClass :: Int -> String 
getClass n = case n of
    5 -> "Go to kindergarten"
    6 -> "Go to elementry school"
    _ -> "Go away"

-- kinda like a list where we can make a variable or something and set them to one of the values
data BaseballPlayer = Pitcher
                    | Catcher
                    |Infeilder
                    | Outfield
                    deriving Show 
-- function that returns a bool
baarryBonds :: BaseballPlayer -> Bool 
baarryBonds Outfield = True 
barryInOf = print(baarryBonds Outfield)

-- kinda like a class
data Customer  = Customer String String Double
    deriving Show

-- making a function to set TomSmith's data in the class Customer
tomSmith :: Customer
tomSmith = Customer "Tom Smith" "123 Main" 20.50

-- Getting the data from the Customer class for a function and querying for their balance which we return as b
getBalance :: Customer -> Double
getBalance (Customer _ _ b) = b

