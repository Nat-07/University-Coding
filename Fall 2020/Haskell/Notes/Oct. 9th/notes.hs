-- Our test cases
-- sum' [] -> 0
-- sum' [4] -> 4
-- sum' [1..10] - > 55
-- sum' [-4] -> -4
-- sum' [4,-5] -> -1

import Debug.Trace
import Test.HUnit

sum' :: [Integer] -> Integer

-- we show the steps of what is happening
sum' xs | trace("sum' " ++ show xs) False = undefined

sum' [] = 0
sum'(x:xs) = x + sum' xs

main = print $ sum' [1..10]
