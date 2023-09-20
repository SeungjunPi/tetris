#include "Tetromino.h"



bool Tetromino::MoveDown()
{
	// �Ʒ��� Ÿ���� �ִ��� �˻�� ����
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
	// ���ʿ� Ÿ���� �ִ��� �˻�� ����
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
	// �����ʿ� Ÿ���� �ִ��� �˻�� ����
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

