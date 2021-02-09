-- check if prime
isPrime :: Integer -> Bool
isPrime n = null [x | x <- [2..n `div` 2], n `mod` x == 0]

-- get prime #s
primes :: Integer -> Integer -> [Integer]
-- gets number in range and test if they're prime
primes a b = [x | x <- [a..b], isPrime x == True]

-- get primes with gap between them
gappies :: Integer -> Integer -> Integer -> [(Integer, Integer)]
-- test a and b in primes function adn then put them into tuple if y-x == gap
gappies g a b = [(x, y) | x <- primes a b, y <- primes a b, y - x == g]

-- runs the gappies function but with a skip of 2
twins :: Integer -> Integer -> [(Integer, Integer)]
twins a b = gappies 2 a b

-- runs the gappies function but with a skip of 4
cousins :: Integer -> Integer -> [(Integer, Integer)]
cousins a b = gappies 4 a b

-- runs the gappies function but with a skip of 6
sexies :: Integer -> Integer -> [(Integer, Integer)]
sexies a b = gappies 6 a b