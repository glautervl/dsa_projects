package dev.dsa;

import dev.dsa.arrays.LinearSearchExamples;
import dev.dsa.bigo.BigOExamples;

/**
 * Hello world!
 *
 */
public class RunDSA 
{
    public static void main( String[] args )
    {
        // Big O Examples
        new BigOExamples().runBigO();
        // Linear Search Examples
        new LinearSearchExamples().runLinearSearchExamples();
    }
}
