#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/leaky_relu/leaky_relu16_model_data.h"

const unsigned int g_leaky_relu16_model_data_size = 624;alignas(16) const unsigned char g_leaky_relu16_model_data[] = {0x18,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x28,0x02,0x00,0x00,0x03,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x88,0xfe,0xff,0xff,0x10,0x00,0x00,0x00,0x58,0x00,0x00,0x00,0x5c,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x16,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x4b,0x18,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,0x06,0x00,0x00,0x00,0x9a,0x99,0x99,0x3e,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xf0,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,0x13,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x4c,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xa0,0x00,0x00,0x00,0x2c,0xff,0xff,0xff,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x2e,0xee,0x3b,0x01,0x00,0x00,0x00,0x25,0x2c,0x6e,0x43,0x01,0x00,0x00,0x00,0x8f,0x3c,0xa0,0xc2,0x5b,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x32,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x74,0x72,0x61,0x6e,0x73,0x70,0x6f,0x73,0x65,0x5f,0x33,0x78,0x34,0x2f,0x61,0x63,0x74,0x69,0x76,0x61,0x74,0x69,0x6f,0x6e,0x2f,0x6c,0x65,0x61,0x6b,0x79,0x5f,0x72,0x65,0x5f,0x6c,0x75,0x5f,0x36,0x32,0x2f,0x4c,0x65,0x61,0x6b,0x79,0x52,0x65,0x6c,0x75,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x78,0x00,0x00,0x00,0x0c,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xd7,0x88,0x05,0x3c,0x01,0x00,0x00,0x00,0x25,0x2c,0x6e,0x43,0x01,0x00,0x00,0x00,0xcc,0x87,0x85,0xc3,0x2a,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x75,0x5f,0x73,0x6b,0x69,0x70,0x5f,0x33,0x2f,0x61,0x64,0x64,0x2f,0x61,0x64,0x64,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x0c,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x62,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x62,};
