#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/strided_slice/strided_slice24_model_data.h"

const unsigned int g_strided_slice24_model_data_size = 1064;alignas(16) const unsigned char g_strided_slice24_model_data[] = {0x18,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x88,0x00,0x00,0x00,0xe0,0x03,0x00,0x00,0x03,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x54,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x54,0xfd,0xff,0xff,0xc6,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xe2,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb4,0xfd,0xff,0xff,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x44,0xfd,0xff,0xff,0x10,0x00,0x00,0x00,0x68,0x00,0x00,0x00,0x6c,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x08,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x08,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x24,0x02,0x00,0x00,0xa0,0x01,0x00,0x00,0x20,0x01,0x00,0x00,0xb8,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x7e,0xfe,0xff,0xff,0x14,0x00,0x00,0x00,0x4c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x88,0x00,0x00,0x00,0xf4,0xfd,0xff,0xff,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xbf,0x56,0x0a,0x3c,0x01,0x00,0x00,0x00,0xaa,0x55,0x8a,0x43,0x01,0x00,0x00,0x00,0x79,0xe1,0xc4,0xc2,0x42,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x32,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x31,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x2e,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x48,0x00,0x00,0x00,0x20,0xff,0xff,0xff,0x3b,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x62,0x61,0x73,0x65,0x5f,0x63,0x6f,0x6e,0x76,0x5f,0x6c,0x61,0x73,0x74,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x92,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x50,0x00,0x00,0x00,0x84,0xff,0xff,0xff,0x41,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x32,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,0x13,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x54,0x00,0x00,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x41,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x30,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x88,0x00,0x00,0x00,0x0c,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xbf,0x56,0x0a,0x3c,0x01,0x00,0x00,0x00,0xaa,0x55,0x8a,0x43,0x01,0x00,0x00,0x00,0x79,0xe1,0xc4,0xc2,0x3a,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x32,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x63,0x61,0x74,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x2a,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x0c,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x2d,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x2d,};
