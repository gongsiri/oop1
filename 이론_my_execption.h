//#pragma once

#ifndef  MYEXCEPTION_H
#define MYEXCEPTION_H

class Myexception {
public:
	int info;
	const void* sender; // 누가 보냈는지
	const char* description; // 예외 설명

	Myexception(const void* sender, const char* description, int info) {
		this->info = info;
		this->description = description;
		this->sender = sender;
	}
};
//인덱스 관련 예외
class OutOfRangeException : public Myexception {
public:
	OutOfRangeException(const void* sender, int index)
		:Myexception(sender, "인덱스의 범위를 벗어났습니다.", index) {

	}//부모 생성자 호출

};
//메모리 관련 예외
class MemoryException : public Myexception {
public:
	MemoryException(const void* sender, int bytes)
		:Myexception(sender, "메모리 용량 초과.", bytes) {

	}

};

#endif