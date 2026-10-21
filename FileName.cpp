#include <iostream>
#include <cstdint>


int BitCount3(int N, int T) {
	int c = 0;
	int A = 0;

	T = T&((1>>0)&1);

	((((N >> 1) & T) & T) == T) ? c++ : c;
	((((N >> 2) & T) & T) == T) ? c++ : c;
	((((N >> 3) & T) & T) == T) ? c++ : c;
	return c;
}
namespace BiKiBikiCheck {
	bool EnCode(bool A, bool B = true) {

		bool R = ((A & B) & B) & B;


		return R;

	}

	bool EcCodition(bool A, bool B = true) {
		bool R = !(A & B);  R = (R | B) & B;

		return R;
	}

	bool ErrorCheck(bool A, bool B = false) {
		return (A && B) || B;
	}
};

int main() {

	//std::int4_t V = 0b1111;

	std::int8_t TF = 0b1100;
	std::int8_t TT = 0b0011;
	
	std::int8_t TX[] = { 0b1100,0b1001,0b1011,0b1101,0b1110 ,0b1010};

	int i = 0;


	std::cout << BitCount3(TX[i++], 1) << ':' <<( (TX[i++] & 1)==true) << std::endl;
	std::cout << BitCount3(TX[i++], 1) << ':' <<( (TX[i++] & 1)==true) << std::endl;
	std::cout << BitCount3(TX[i++], 1) << ':' <<( (TX[i++] & 1)==true) << std::endl;
	std::cout << BitCount3(TX[i++], 1) << ':' <<( (TX[i++] & 1)==true) << std::endl;
	std::cout << BitCount3(TX[i++], 1) << ':' <<( (TX[i++] & 1)==true) << std::endl;
	std::cout << BitCount3(TX[i++], 1) << ':' <<( (TX[i++] & 1)==true) << std::endl;
	std::cout << BitCount3(TX[i++], 1) << ':' <<( (TX[i++] & 1)==true) << std::endl;

	std::uint8_t oxbe = 0xbe;
	std::int8_t   Dc;
	for (int i = 0; i < 4; ++i) {
		bool bit;
		bit = (oxbe >> (3 - i)) & 1;
		bool bit2 = BiKiBikiCheck::EnCode(bit);
		bool bit3 = BiKiBikiCheck::EcCodition(bit2);
		if (!BiKiBikiCheck::ErrorCheck(bit3)) {
			//std::cout << "Error detected at bit position: " << i << std::endl;
			bit3 = !bit3;
		}

		std::cout << (bit != bit3 ? 't' : 'f');
		 
		C |= ((bit3 > 0) << i);



	}
}