// what is up yall welcome to the louie and andi show where we show u coding shit
// we just made notes thats it 

// general C++ eme eme syntaxing and shit
// uhh idk kaya niyo na yan may reference code naman si sir lecture prof 

// errors and their bullshit

// The Big O 
// think of it as a foundation for getting the algorithm runtime.
// big o notaion is for scaled inputs - the input should be really large to see the difference
// analogy: if u had to go 10ft by car or by foot you would go by foot cuz
// the car would have to start and you'd be there faster
// but if u had to travel 10km you'd go by car (thats essentially big O kaya nga big diba)

// you just need to get the general big o notation and then compare expressions that have the same big o notation. 
// you get the general big o notation by getting the term that grows the fastest
// from there it's just arithmetic
// I would show the time complexity graph pero we're on vs code so just check ppt 2a 
// so like if u have n^2, log2 6, and 3n^2
// we know na the largest changing value would be the one with an exponent (quadratic)
// so we have n^2 and 3n^2 - arithmetic na lang 3n^2 > n^2
// yay i hope that makes sense

// the expression O(smth) is us analyzing the time complexity of an algorithm

// properties of Big O cuz turns out this some fuckin math now 
// 1. if T(n) = O(f(n)) & S(n) = O(g(n)) then T(n) + S(n) = O(max(f(n), g(n)))
// that just means if u get the complexity of T(n) & S(n), it will be the max/fastest growing thingy of the 2

// 2. if T(n) = O(f(n)) & S(n) = O(g(n)) then T(n) * S(n) = O(f(n) * g(n)) 
// best for for loops and recursion
// example: if a nested for loop is given with both loops being run n times, it would be O(n*n) or O(n^2)

// 3. if lim of f(n)/g(n) as x approaches infinity is a finite number, then f(n) = O(g(n))
// Unsure what this is for as of the moment but yay thats 2a


//header files, classes & inheritance


// 3 different sorting techniques (louie u got this)


// different sorting algorithms 

//sorting analysis
