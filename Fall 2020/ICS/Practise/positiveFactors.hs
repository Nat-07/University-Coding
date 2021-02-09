-- find the factors
factorsOfNum :: Int -> [Int]
factorsOfNum y = [x | x <- [1..y], y `mod` x == 0]

---pythagorean
pythagorean = [show a ++ "," ++ show b ++ "," ++ show  c ++ ","| a <-[1..100], b <- [1..100], c <- [1..100], a*a+b*b==c*c]