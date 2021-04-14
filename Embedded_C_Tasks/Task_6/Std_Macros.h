#ifndef STD_MACROS_H_
#define STD_MACROS_H_

#define SET_BIT(R,B)        ((R) |= (1<<(B)))
#define CLR_BIT(R,B)        ((R) &=~ (1<<(B)))
#define GET_BIT(R,B)        (((R) & (1<<(B))) >> (B))
#define TOGGLE_BIT(R,B)     ((R) ^= (1<<(B)))

#define SHL_REG(R,B)        ((R) = ((R)<<(B)))
#define SHR_REG(R,B)        ((R) = ((R)>>(B)))

#define SET_NIBBLE_H(R)     ((R) |= (0xF0))
#define CLR_NIBBLE_H(R)     ((R) &= (0x0F))

#define SET_NIBBLE_L(R)     ((R) |= (0x0F))
#define CLR_NIBBLE_L(R)     ((R) &= (0xF0))

#define GET_NIBBLE_H(R)     ((R) >> (4))
#define GET_NIBBLE_L(R)     ((R) & (0x0F))

#define ASSIGN_NIBBLE_H_VALUE(R,V)      ((R) = (((((V) << 4) & 0xF0)) | ((R) & (0x0F))))
#define ASSIGN_NIBBLE_L_VALUE(R,V)      ((R) = ((((V)  & 0x0F)) | ((R) & (0xF0))))
#define ASSIGN_REG_VALUE(R,V)           ((R) = (((V)) & 0xFF))

#endif
