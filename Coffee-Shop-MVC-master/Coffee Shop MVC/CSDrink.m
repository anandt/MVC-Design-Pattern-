//
//  CSDrink.m
//  Coffee Shop MVC


#import "CSDrink.h"

@implementation CSDrink

//sample for blocks in ios
-(void)addNumber:(int)number1 withNumber:(int)number2 andCompletionHandler:(void (^)(int result))completionHandler{
    int result = number1 + number2;
    completionHandler(result);
}

@end
