//
//  NSNumber+EKStuff.h
//  EKAlgorithms
//
//  Created by Vittorio Monaco on 26/11/13.
//  Copyright (c) 2013 EvgenyKarkan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (EKStuff)

+ (NSArray *)primeNumbersFromSieveEratosthenesWithMaxNumber:(NSUInteger)maxNumber;
- (NSUInteger)greatestCommonDivisorWithNumber:(NSUInteger)secondNumber;
- (NSUInteger)leastCommonMultipleWithNumber:(NSUInteger)secondNumber;
- (NSUInteger)factorial;
+ (NSMutableArray *)fibonacciNumbersUpToNumber:(NSUInteger)number;
- (NSUInteger)sumOfDigits;
+ (NSUInteger)decimalNumberFromBinary:(NSUInteger)binary;
+ (NSUInteger)binaryNumberFromDecimal:(NSUInteger)decimal;
+ (NSInteger)fastExpForNumber:(NSInteger)number withPower:(NSInteger)power;
- (NSUInteger)reverseNumber;
- (BOOL)isEven;
- (BOOL)isLeapGivenYear;
- (BOOL)isArmstrongNumber;
- (BOOL)isPrime;
+ (void)swapValueOfIntPointer:(NSInteger *)xPointer withValueOfIntPointer:(NSInteger *)yPointer;

@end
