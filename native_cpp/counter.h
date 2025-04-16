#ifndef COUNTER_H
#define COUNTER_H

#ifdef __cplusplus
extern "C" {
#endif

	// 카운터 초기화
	void initCounter();

	// 현재 카운터 값 가져오기
	int getCounterValue();

	// 카운터 증가 (+1)
	void incrementCounter();

	// 카운터 감소 (-1)
	void decrementCounter();

	// 카운터 값 설정
	void setCounterValue(int value);

#ifdef __cplusplus
}
#endif

#endif
