#import <Foundation/Foundation.h>

@interface CounterBridge : NSObject

// 카운터 초기화
+ (void)initCounter;

// 현재 카운터 값 가져오기
+ (int)getCounterValue;

// 카운터 증가 (+1)
+ (void)incrementCounter;

// 카운터 감소 (-1)
+ (void)decrementCounter;

// 카운터 값 설정
+ (void)setCounterValue:(int)value;

@end
