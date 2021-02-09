rotate :: Int -> [a] -> [a]

rotate y (x:xs)
    |y == 0 = xs

--rotate  y (x:xs) = times4 x : multBy4 xs