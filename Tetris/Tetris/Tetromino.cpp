#include "Tetromino.h"



Tetromino::Tetromino()
	: _eSpin(ESpin::ONE)
{
    _blocks[0] = Math::Coordinate{ 2, 2 };
    _blocks[1] = Math::Coordinate{ 2, 2 };
    _blocks[2] = Math::Coordinate{ 2, 2 };
    _blocks[3] = Math::Coordinate{ 2, 2 };
}


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




void Tetromino::Draw(char* board)
{
    for (int i = 0; i < NUM_BLOCKS; ++i) {
		unsigned int x = _blocks[i].x;
		unsigned int y = _blocks[i].y;
		if (x < NUM_COLS && x >= 0 && y < NUM_COLS && y >= 0) {
			board[NUM_COLS * y + x] = '*';
		}
    }
}

