fizzbuzz :: Integer -> String
fizzbuzz x
    | x `mod` 15 == 0 = "fizzbuzz"
    | x `mod` 3 == 0 = "Fizz"
    | x `mod` 5 == 0 = "buzz"
    | otherwise = show(x)
