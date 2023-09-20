#include "Tetromino.h"



bool Tetromino::MoveDown()
{
	// 아래에 타일이 있는지 검사로 변경
	for (int i = 0; i < NUM_BLOCKS; ++i) {
		if (_blocks[i].y == 0) {
			return false;
		}
	}


	for (int i = 0; i < NUM_BLOCKS; ++i) {
		_blocks[i].y += 1;
	}
	return true;
}


bool Tetromino::MoveLeft()
{
	// 왼쪽에 타일이 있는지 검사로 변경
	for (int i = 0; i < NUM_BLOCKS; ++i) {
		if (_blocks[i].x == 0) {
			return false;
		}
	}

	for (int i = 0; i < NUM_BLOCKS; ++i) {
		_blocks[i].x -= 1;
	}
	return true;
}

bool Tetromino::MoveRight()
{
	// 오른쪽에 타일이 있는지 검사로 변경
	for (int i = 0; i < NUM_BLOCKS; ++i) {
		if (_blocks[i].y == NUM_ROWS) {
			return false;
		}
	}

	for (int i = 0; i < NUM_BLOCKS; ++i) {
		_blocks[i].x += 1;
	}
	return true;
}

