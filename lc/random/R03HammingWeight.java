package lc.random;
import lc.utils.*;

/**
 * https://leetcode.com/problems/number-of-1-bits/description/
 * Write a function that takes the binary representation of a positive integer and returns the number of set bits it has 
 * (also known as the Hamming weight).
 */
public class R03HammingWeight {
    public static void main(String[] args) {
        OE01Solution sol = new OE01SolutionTwo();
        System.out.println("sol="+sol.hammingWeight(11));
        assert sol.hammingWeight(11) == 3;
        assert sol.hammingWeight(128) == 1;
        assert sol.hammingWeight(2147483645) == 30;
        assert sol.hammingWeight(2147483647) == 31;
    }
}

interface OE01Solution {
    public int hammingWeight(int n);
}
class OE01SolutionOne implements OE01Solution {
    NumberToBinary ntb;
    public OE01SolutionOne() {
        if(ntb == null) {
            ntb = new NumberToBinary();
        }
    }
    public int hammingWeight(int n) {
        int[] bits = ntb.convert(n);
        int count = 0;
        for(int i=0;i<bits.length;i++) {
            if(bits[i] == 1) {
                count++;
            }
        }
        return count;
    }
}

class OE01SolutionTwo implements OE01Solution {
    public int hammingWeight(int n) {
        int t = n;
        int count = 0;
        while(t!=0) {
            count += t & 1;
            t >>= 1;
        }
        return count;
    }
}
