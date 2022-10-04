class Solution {
public:
    double myPow(double x, int n) {
    
// Recursive Version 
      
     /*   if (n == 0) return 1;

       int absN = abs(n);

double answer = (absN % 2 == 0) ? myPow(x * x, absN / 2) : myPow(x * x, (absN - 1) / 2) * x ;

	return (n > 0) ? answer : 1 / answer;
        */
        
// Iterative Version        

    double res = 1;
	while (n) {
		if (n % 2)
			res = n > 0 ? res * x : res / x;
		x = x * x;
		n /= 2;
	}
	return res;
    }
    
};