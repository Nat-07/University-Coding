cnt :: Eq a => a -> [a] -> Int
cnt x [] = 0
cnt x (y:ys)
    | x == y = 1 + (cnt x ys)
    | otherwise = cnt x ys



con :: [a] -> [a] -> [a]
con [] ys = ys
con (x:xs) ys = x : (con xs ys)