--returns a list of rotated chars

-- announce the function with its inputs and output
rotate :: Int -> [a] -> [a]
rotate 0 xs = xs

-- get string of chars depending on their position and the user input to change their position
rotate a xs = rotate (a-1) (last xs : init xs)

-------------------------------------------------

--returns lists of rotates

-- announce the function with its input and output
rotateList :: [a] -> [[a]]
-- when run run the rotate function for the length of a (thus getting all the variations)
rotateList a = [rotate i a | i <- [1..(length (a))]]

