#include <stdint.h>

// all https://makecode.com/_FDFFVsKaTUfF

// https://makecode.com/_7VxXm3JMPXfM - file
// https://makecode.com/_LuEUCsPEKUbs - download
const uint8_t fileLogo[] = {
32, 32, 71, 140, 201, 151, 1, 2, 146, 1, 2, 146, 63, 2, 151, 9, 153, 9, 153, 9, 146, 1, 9, 146, 3, 9, 146, 7, 9, 137, 205, 72, 140, 206, 36, 139, 207, 18, 138, 206, 36, 139, 205, 72, 149, 7, 9, 146, 3, 9, 146, 1, 9, 153, 9, 153, 9, 153, 9, 148, 63, 2, 146, 1, 2, 146, 1, 2, 146, 201, 191, 191, 191, 174
};

// https://makecode.com/_9b0RcK5yRa12
const uint8_t pendriveLogo[] = {
32, 32, 59, 137, 215, 137, 1, 143, 1, 8, 146, 203, 149, 3, 8, 146, 3, 8, 146, 115, 8, 146, 115, 8, 146, 3, 8, 146, 3, 8, 146, 115, 8, 146, 115, 8, 146, 3, 8, 146, 3, 8, 146, 203, 149, 1, 8, 146, 1, 8, 146, 1, 120, 211, 191, 191, 191, 191, 191, 191, 191, 135
};

// https://makecode.com/_TTqbj705L4mr
const uint8_t arrowLogo[] = {
32, 32, 54, 137, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 151, 201, 146, 211, 142, 209, 144, 207, 146, 205, 148, 203, 150, 201, 152, 199, 154, 31, 154, 7, 154, 1, 191, 191, 191, 175
};

const uint8_t font8[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x06, 0x5f, 0x5f, 0x06, 0x00, 0x00, 
0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x00, 
0x14, 0x7f, 0x7f, 0x14, 0x7f, 0x7f, 0x14, 0x00, 
0x24, 0x2e, 0x6b, 0x6b, 0x3a, 0x12, 0x00, 0x00, 
0x46, 0x66, 0x30, 0x18, 0x0c, 0x66, 0x62, 0x00, 
0x30, 0x7a, 0x4f, 0x5d, 0x37, 0x7a, 0x48, 0x00, 
0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x1c, 0x3e, 0x63, 0x41, 0x00, 0x00, 0x00, 
0x00, 0x41, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00, 
0x08, 0x2a, 0x3e, 0x1c, 0x1c, 0x3e, 0x2a, 0x08, 
0x08, 0x08, 0x3e, 0x3e, 0x08, 0x08, 0x00, 0x00, 
0x00, 0x80, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 
0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 
0x3e, 0x7f, 0x71, 0x59, 0x4d, 0x7f, 0x3e, 0x00, 
0x40, 0x42, 0x7f, 0x7f, 0x40, 0x40, 0x00, 0x00, 
0x62, 0x73, 0x59, 0x49, 0x6f, 0x66, 0x00, 0x00, 
0x22, 0x63, 0x49, 0x49, 0x7f, 0x36, 0x00, 0x00, 
0x18, 0x1c, 0x16, 0x53, 0x7f, 0x7f, 0x50, 0x00, 
0x27, 0x67, 0x45, 0x45, 0x7d, 0x39, 0x00, 0x00, 
0x3c, 0x7e, 0x4b, 0x49, 0x79, 0x30, 0x00, 0x00, 
0x03, 0x03, 0x71, 0x79, 0x0f, 0x07, 0x00, 0x00, 
0x36, 0x7f, 0x49, 0x49, 0x7f, 0x36, 0x00, 0x00, 
0x06, 0x4f, 0x49, 0x69, 0x3f, 0x1e, 0x00, 0x00, 
0x00, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x80, 0xe6, 0x66, 0x00, 0x00, 0x00, 0x00, 
0x08, 0x1c, 0x36, 0x63, 0x41, 0x00, 0x00, 0x00, 
0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 
0x00, 0x41, 0x63, 0x36, 0x1c, 0x08, 0x00, 0x00, 
0x02, 0x03, 0x51, 0x59, 0x0f, 0x06, 0x00, 0x00, 
0x3e, 0x7f, 0x41, 0x5d, 0x5d, 0x1f, 0x1e, 0x00, 
0x7c, 0x7e, 0x13, 0x13, 0x7e, 0x7c, 0x00, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x49, 0x7f, 0x36, 0x00, 
0x1c, 0x3e, 0x63, 0x41, 0x41, 0x63, 0x22, 0x00, 
0x41, 0x7f, 0x7f, 0x41, 0x63, 0x3e, 0x1c, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x5d, 0x41, 0x63, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x1d, 0x01, 0x03, 0x00, 
0x1c, 0x3e, 0x63, 0x41, 0x51, 0x73, 0x72, 0x00, 
0x7f, 0x7f, 0x08, 0x08, 0x7f, 0x7f, 0x00, 0x00, 
0x00, 0x41, 0x7f, 0x7f, 0x41, 0x00, 0x00, 0x00, 
0x30, 0x70, 0x40, 0x41, 0x7f, 0x3f, 0x01, 0x00, 
0x41, 0x7f, 0x7f, 0x08, 0x1c, 0x77, 0x63, 0x00, 
0x41, 0x7f, 0x7f, 0x41, 0x40, 0x60, 0x70, 0x00, 
0x7f, 0x7f, 0x0e, 0x1c, 0x0e, 0x7f, 0x7f, 0x00, 
0x7f, 0x7f, 0x06, 0x0c, 0x18, 0x7f, 0x7f, 0x00, 
0x1c, 0x3e, 0x63, 0x41, 0x63, 0x3e, 0x1c, 0x00, 
0x41, 0x7f, 0x7f, 0x49, 0x09, 0x0f, 0x06, 0x00, 
0x1e, 0x3f, 0x21, 0x71, 0x7f, 0x5e, 0x00, 0x00, 
0x41, 0x7f, 0x7f, 0x09, 0x19, 0x7f, 0x66, 0x00, 
0x26, 0x6f, 0x4d, 0x59, 0x73, 0x32, 0x00, 0x00, 
0x03, 0x41, 0x7f, 0x7f, 0x41, 0x03, 0x00, 0x00, 
0x7f, 0x7f, 0x40, 0x40, 0x7f, 0x7f, 0x00, 0x00, 
0x1f, 0x3f, 0x60, 0x60, 0x3f, 0x1f, 0x00, 0x00, 
0x7f, 0x7f, 0x30, 0x18, 0x30, 0x7f, 0x7f, 0x00, 
0x43, 0x67, 0x3c, 0x18, 0x3c, 0x67, 0x43, 0x00, 
0x07, 0x4f, 0x78, 0x78, 0x4f, 0x07, 0x00, 0x00, 
0x47, 0x63, 0x71, 0x59, 0x4d, 0x67, 0x73, 0x00, 
0x00, 0x7f, 0x7f, 0x41, 0x41, 0x00, 0x00, 0x00, 
0x01, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00, 
0x00, 0x41, 0x41, 0x7f, 0x7f, 0x00, 0x00, 0x00, 
0x08, 0x0c, 0x06, 0x03, 0x06, 0x0c, 0x08, 0x00, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00, 
0x20, 0x74, 0x54, 0x54, 0x3c, 0x78, 0x40, 0x00, 
0x41, 0x7f, 0x3f, 0x48, 0x48, 0x78, 0x30, 0x00, 
0x38, 0x7c, 0x44, 0x44, 0x6c, 0x28, 0x00, 0x00, 
0x30, 0x78, 0x48, 0x49, 0x3f, 0x7f, 0x40, 0x00, 
0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00, 0x00, 
0x48, 0x7e, 0x7f, 0x49, 0x03, 0x02, 0x00, 0x00, 
0x98, 0xbc, 0xa4, 0xa4, 0xf8, 0x7c, 0x04, 0x00, 
0x41, 0x7f, 0x7f, 0x08, 0x04, 0x7c, 0x78, 0x00, 
0x00, 0x44, 0x7d, 0x7d, 0x40, 0x00, 0x00, 0x00, 
0x60, 0xe0, 0x80, 0x80, 0xfd, 0x7d, 0x00, 0x00, 
0x41, 0x7f, 0x7f, 0x10, 0x38, 0x6c, 0x44, 0x00, 
0x00, 0x41, 0x7f, 0x7f, 0x40, 0x00, 0x00, 0x00, 
0x7c, 0x7c, 0x18, 0x38, 0x1c, 0x7c, 0x78, 0x00, 
0x7c, 0x7c, 0x04, 0x04, 0x7c, 0x78, 0x00, 0x00, 
0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00, 0x00, 
0x84, 0xfc, 0xf8, 0xa4, 0x24, 0x3c, 0x18, 0x00, 
0x18, 0x3c, 0x24, 0xa4, 0xf8, 0xfc, 0x84, 0x00, 
0x44, 0x7c, 0x78, 0x4c, 0x04, 0x1c, 0x18, 0x00, 
0x48, 0x5c, 0x54, 0x54, 0x74, 0x24, 0x00, 0x00, 
0x00, 0x04, 0x3e, 0x7f, 0x44, 0x24, 0x00, 0x00, 
0x3c, 0x7c, 0x40, 0x40, 0x3c, 0x7c, 0x40, 0x00, 
0x1c, 0x3c, 0x60, 0x60, 0x3c, 0x1c, 0x00, 0x00, 
0x3c, 0x7c, 0x70, 0x38, 0x70, 0x7c, 0x3c, 0x00, 
0x44, 0x6c, 0x38, 0x10, 0x38, 0x6c, 0x44, 0x00, 
0x9c, 0xbc, 0xa0, 0xa0, 0xfc, 0x7c, 0x00, 0x00, 
0x4c, 0x64, 0x74, 0x5c, 0x4c, 0x64, 0x00, 0x00, 
0x08, 0x08, 0x3e, 0x77, 0x41, 0x41, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00, 
0x41, 0x41, 0x77, 0x3e, 0x08, 0x08, 0x00, 0x00, 
0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};