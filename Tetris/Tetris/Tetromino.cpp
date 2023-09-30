#include "Tetromino.h"



Tetromino::Tetromino(Math::Coordinate startingPosition)
{
    _blocks[0] = startingPosition;
    _blocks[1] = startingPosition;
    _blocks[2] = startingPosition;
    _blocks[3] = startingPosition;
    
    _blocks[1].y += 1;
    _blocks[2].y += 2;
    _blocks[3].y += 3;
    
    _eState = EDefaultState::Vertical;
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

bool Tetromino::Rotate()
{
    switch (_eState) {
        case Vertical:
            _blocks[1] = _blocks[0];
            _blocks[2] = _blocks[0];
            _blocks[3] = _blocks[0];
            
            _blocks[1].x += 1;
            _blocks[2].x += 2;
            _blocks[3].x += 3;
            
            _eState = Horizontal;
            break;
        case Horizontal:
            _blocks[1] = _blocks[0];
            _blocks[2] = _blocks[0];
            _blocks[3] = _blocks[0];
            
            _blocks[1].y += 1;
            _blocks[2].y += 2;
            _blocks[3].y += 3;
            
            _eState = Vertical;
            break;
        default:
            return false;
    }
    return true;
}


void Tetromino::Draw(char* board)
{
    for (int i = 0; i < NUM_BLOCKS; ++i) {
        board[NUM_COLS * _blocks[i].y + _blocks[i].x] = '*';
    }
}

