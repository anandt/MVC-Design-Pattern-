//
//  CSDrink.h
//  Coffee Shop MVC


#import <Foundation/Foundation.h>

@interface CSDrink : NSObject

@property (nonatomic) NSInteger numberOfShots;
@property (nonatomic) BOOL isIced;
@property (nonatomic) NSString *drinkName;
@property (nonatomic) NSString *drinkSize;
-(void)addNumber:(int)number1 withNumber:(int)number2 andCompletionHandler:(void (^)(int result))completionHandler;

@end
