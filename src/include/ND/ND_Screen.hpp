#ifndef ND_SCREEN_HPP
#define ND_SCREEN_HPP
#include <ND_Color.hpp>
#include <ND_Types.hpp>

typedef enum ND_SIDE{
		ND_SIDE_BACKGROUND,
		ND_SIDE_FOREGROUND
}ND_SIDE;

namespace ND{
	namespace Screen{
			ND_Color GetColor(ND_SIDE side);
			void SetColor(ND_SIDE side, ND_Color colour);
			void PutChar(char c);
			void PutString(const char* str);
			void Clear(ND_Color colour);
			void SetCursor(uint8_t x, uint8_t y);
			void itoa(unsigned int i);
		}
	}
#endif
