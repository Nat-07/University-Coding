
evenList = [x | x <- [1..10], x `mod` 2 == 0]

pathag = ["x = " ++show x++ " y= " ++show y++ " z= " ++ show z | x <- [1..100], y<- [1..100], z<- [1..100], x*x + y*y == z*z]


sumNum :: Int -> Int -> Int 
sumNum x y = x + y