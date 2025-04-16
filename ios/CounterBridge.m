#import "CounterBridge.h"
#include "counter.h"

@implementation CounterBridge

+ (void)initCounter {
    initCounter();
}

+ (int)getCounterValue {
    return getCounterValue();
}

+ (void)incrementCounter {
    incrementCounter();
}

+ (void)decrementCounter {
    decrementCounter();
}

+ (void)setCounterValue:(int)value {
    setCounterValue(value);
}

@end
