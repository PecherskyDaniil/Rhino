// /qml/Bhead.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _qml_Bhead_qml {
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x36,0x0,0x0,0x0,0x1,0x4,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2c,0x9,0x0,0x0,0x38,0x64,0x38,0x31,
0x33,0x35,0x36,0x66,0x62,0x64,0x30,0x32,
0x37,0x65,0x39,0x31,0x36,0x35,0x62,0x63,
0x62,0x32,0x38,0x30,0x63,0x62,0x39,0x32,
0x66,0x36,0x66,0x65,0x65,0x63,0x62,0x66,
0x65,0x37,0x39,0x65,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xde,0x5c,0x2b,0x50,
0x3d,0x8e,0x8e,0x54,0xa0,0x83,0x60,0xda,
0xa5,0x7,0x9a,0xeb,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x70,0x3,0x0,0x0,
0x6,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0xb,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x3c,0x1,0x0,0x0,
0xa,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x90,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x90,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x90,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x90,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x90,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x90,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x90,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xa8,0x5,0x0,0x0,
0x90,0x1,0x0,0x0,0xe8,0x1,0x0,0x0,
0x40,0x2,0x0,0x0,0x88,0x2,0x0,0x0,
0xe0,0x2,0x0,0x0,0x28,0x3,0x0,0x0,
0xf3,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0xf3,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x13,0x1,0x0,0x0,0xf3,0x0,0x0,0x0,
0x0,0x1,0x0,0x0,0x13,0x1,0x0,0x0,
0x20,0x1,0x0,0x0,0x13,0x1,0x0,0x0,
0xd0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xd2,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xec,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xd8,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xe8,0xbf,
0x33,0x33,0x33,0x33,0x33,0x33,0x1f,0xc0,
0x9a,0x99,0x99,0x99,0x99,0x99,0x1d,0xc0,
0x29,0x5c,0x8f,0xc2,0xf5,0x28,0x20,0xc0,
0x1,0x0,0x0,0x0,0x0,0x80,0x3,0x0,
0xcd,0xcc,0xcc,0xcc,0xcc,0xcc,0x10,0xc0,
0x9a,0x99,0x99,0x99,0x99,0x99,0x35,0xc0,
0x40,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xe,0x0,0x0,0x0,
0x7,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x2e,0x0,0x18,0x7,0x14,0x4,0xa,0x14,
0x5,0xb,0x14,0x6,0xc,0x14,0x7,0xd,
0xac,0x1,0x7,0x4,0xa,0x18,0x6,0x2,
0x40,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xe,0x0,0x0,0x0,
0xb,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x2e,0x2,0x18,0x7,0x14,0x8,0xa,0x14,
0x9,0xb,0x14,0x9,0xc,0x14,0x7,0xd,
0xac,0x3,0x7,0x4,0xa,0x18,0x6,0x2,
0x40,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc,0x0,0x0,0x0,
0x2e,0x4,0x18,0x6,0x2,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xe,0x0,0x0,0x0,
0x11,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,
0x2e,0x5,0x18,0x7,0x14,0x8,0xa,0x14,
0x8,0xb,0x14,0x9,0xc,0x14,0x7,0xd,
0xac,0x6,0x7,0x4,0xa,0x18,0x6,0x2,
0x40,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x12,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x0,
0x2e,0x7,0x3c,0x8,0x18,0x6,0x2,0x0,
0x40,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x13,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x2e,0x9,0x3c,0xa,0x18,0x6,0x2,0x0,
0xc0,0x3,0x0,0x0,0xc8,0x3,0x0,0x0,
0xe0,0x3,0x0,0x0,0xf0,0x3,0x0,0x0,
0x8,0x4,0x0,0x0,0x18,0x4,0x0,0x0,
0x30,0x4,0x0,0x0,0x40,0x4,0x0,0x0,
0x70,0x4,0x0,0x0,0x88,0x4,0x0,0x0,
0xa0,0x4,0x0,0x0,0xd8,0x4,0x0,0x0,
0xe8,0x4,0x0,0x0,0x18,0x5,0x0,0x0,
0x30,0x5,0x0,0x0,0x60,0x5,0x0,0x0,
0x70,0x5,0x0,0x0,0x80,0x5,0x0,0x0,
0x98,0x5,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x46,0x0,0x65,0x0,
0x6c,0x0,0x67,0x0,0x6f,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x61,0x0,0x6e,0x0,
0x67,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x6f,0x0,0x6c,0x0,
0x6f,0x0,0x72,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x63,0x0,0x68,0x0,0x6f,0x0,0x72,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x63,0x0,0x65,0x0,
0x6e,0x0,0x74,0x0,0x65,0x0,0x72,0x0,
0x49,0x0,0x6e,0x0,0x0,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x65,0x0,0x6e,0x0,
0x74,0x0,0x65,0x0,0x72,0x0,0x49,0x0,
0x6e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x72,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x74,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x72,0x0,0x69,0x0,0x67,0x0,
0x68,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x62,0x0,0x6f,0x0,
0x74,0x0,0x74,0x0,0x6f,0x0,0x6d,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x62,0x0,0x6f,0x0,0x74,0x0,
0x74,0x0,0x6f,0x0,0x6d,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x72,0x0,0x67,0x0,
0x62,0x0,0x61,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x6c,0x0,0x65,0x0,
0x66,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x38,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x10,0x0,0xff,0xff,0x0,0x0,
0x4c,0x0,0x0,0x0,0x1c,0x1,0x0,0x0,
0xd4,0x1,0x0,0x0,0x44,0x2,0x0,0x0,
0xfc,0x2,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x5,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xcc,0x0,0x0,0x0,
0x4,0x0,0x10,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x50,0x0,0x7,0x0,0xc0,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x50,0x0,0x6,0x0,0xc0,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x50,0x0,0x5,0x0,0xb0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x8,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x50,0x0,0xe,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x4,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x90,0x0,0xb,0x0,0x0,0x1,
0x5,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x90,0x0,0xa,0x0,0x0,0x1,
0x4,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x90,0x0,0x9,0x0,0xf0,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0xc,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x10,0x1,0xc,0x0,0xb0,0x1,
0x0,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x4,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0xe,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x90,0x0,0x11,0x0,0x0,0x1,
0x5,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x90,0x0,0x10,0x0,0x0,0x1,
0x4,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x90,0x0,0xf,0x0,0xf0,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x90,0x0,0x12,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x12,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x10,0x1,0x13,0x0,0x90,0x1,
0xb,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x10,0x1,0x12,0x0,0x80,0x1,
0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr);
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           new (dataPtr) return_type(binding(aotContext, argumentsPtr));
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r11_1;
QObject *r7_1;
double r13_1;
QVariant r2_2;
QObject *r2_1;
double r10_1;
double r12_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadSingletonLookup(0, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadSingletonLookup(0, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError())
    return QVariant();
}
// generate_StoreReg
r7_1 = r2_1;
// generate_MoveConst
r10_1 = 0.59999999999999998;
// generate_MoveConst
r11_1 = 0.55000000000000004;
// generate_MoveConst
r12_1 = 0.44000000000000000;
// generate_MoveConst
r13_1 = double(1);
// generate_CallPropertyLookup
{
QVariant callResult;
void *args[] = { &callResult, &r10_1, &r11_1, &r12_1, &r13_1 };
const QMetaType types[] = { QMetaType::fromType<QVariant>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>() };
while (!aotContext->callObjectPropertyLookup(1, r7_1, args, types, 4)) {
aotContext->setInstructionPointer(21);
aotContext->initCallObjectPropertyLookup(1);
if (aotContext->engine->hasError())
    return QVariant();
}
r2_2 = std::move(callResult);
}
// generate_Ret
if (!r2_2.isValid())
    aotContext->setReturnValueUndefined();
return r2_2;
});}
 },{ 1, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r11_1;
QObject *r7_1;
double r13_1;
QObject *r2_1;
QVariant r2_2;
double r10_1;
double r12_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadSingletonLookup(2, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadSingletonLookup(2, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError())
    return QVariant();
}
// generate_StoreReg
r7_1 = r2_1;
// generate_MoveConst
r10_1 = 0.90000000000000002;
// generate_MoveConst
r11_1 = 0.20000000000000001;
// generate_MoveConst
r12_1 = 0.20000000000000001;
// generate_MoveConst
r13_1 = double(1);
// generate_CallPropertyLookup
{
QVariant callResult;
void *args[] = { &callResult, &r10_1, &r11_1, &r12_1, &r13_1 };
const QMetaType types[] = { QMetaType::fromType<QVariant>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>() };
while (!aotContext->callObjectPropertyLookup(3, r7_1, args, types, 4)) {
aotContext->setInstructionPointer(21);
aotContext->initCallObjectPropertyLookup(3);
if (aotContext->engine->hasError())
    return QVariant();
}
r2_2 = std::move(callResult);
}
// generate_Ret
if (!r2_2.isValid())
    aotContext->setReturnValueUndefined();
return r2_2;
});}
 },{ 2, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(4, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(4, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
// generate_Ret
return r2_1;
});}
 },{ 3, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r11_1;
QObject *r7_1;
double r13_1;
QObject *r2_1;
QVariant r2_2;
double r10_1;
double r12_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadSingletonLookup(5, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadSingletonLookup(5, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError())
    return QVariant();
}
// generate_StoreReg
r7_1 = r2_1;
// generate_MoveConst
r10_1 = 0.90000000000000002;
// generate_MoveConst
r11_1 = 0.90000000000000002;
// generate_MoveConst
r12_1 = 0.20000000000000001;
// generate_MoveConst
r13_1 = double(1);
// generate_CallPropertyLookup
{
QVariant callResult;
void *args[] = { &callResult, &r10_1, &r11_1, &r12_1, &r13_1 };
const QMetaType types[] = { QMetaType::fromType<QVariant>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>() };
while (!aotContext->callObjectPropertyLookup(6, r7_1, args, types, 4)) {
aotContext->setInstructionPointer(21);
aotContext->initCallObjectPropertyLookup(6);
if (aotContext->engine->hasError())
    return QVariant();
}
r2_2 = std::move(callResult);
}
// generate_Ret
if (!r2_2.isValid())
    aotContext->setReturnValueUndefined();
return r2_2;
});}
 },{ 4, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QVariant r2_2;
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(7, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(7, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return QVariant();
}
// generate_GetLookup
r2_2 = QVariant(aotContext->lookupResultMetaType(8));
while (!aotContext->getObjectLookup(8, r2_1, r2_2.data())) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(8, r2_1, r2_2.metaType());
if (aotContext->engine->hasError())
    return QVariant();
r2_2 = QVariant(aotContext->lookupResultMetaType(8));
}
// generate_Ret
if (!r2_2.isValid())
    aotContext->setReturnValueUndefined();
return r2_2;
});}
 },{ 5, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2_1;
QVariant r2_2;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(9, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(9, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return QVariant();
}
// generate_GetLookup
r2_2 = QVariant(aotContext->lookupResultMetaType(10));
while (!aotContext->getObjectLookup(10, r2_1, r2_2.data())) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(10, r2_1, r2_2.metaType());
if (aotContext->engine->hasError())
    return QVariant();
r2_2 = QVariant(aotContext->lookupResultMetaType(10));
}
// generate_Ret
if (!r2_2.isValid())
    aotContext->setReturnValueUndefined();
return r2_2;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
