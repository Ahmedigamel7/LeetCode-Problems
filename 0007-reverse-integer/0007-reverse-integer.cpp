class Solution {
public: 
   int reverse(int x) {
		if (x != 2143847412 && x > 1463847412)
			     return 0;
		if(x != -2147483412 && x < -1463847412)
			     return	0;
	    int x2; int res = 0;
	    if (x < 0)
		   x2 = x * -1;
        else	
	       x2 = x;
		while (true){
            res  += (x2 % 10);
			x2 /= 10;
			if (x2)
				res *= 10;
			else break;
		}
	   return x >=0 ? res : -res;
}
};