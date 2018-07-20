/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef testthrift_TYPES_H
#define testthrift_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>





typedef struct _InnerStruct__isset {
  _InnerStruct__isset() : field0(false) {}
  bool field0;
} _InnerStruct__isset;

class InnerStruct {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  InnerStruct() : field0(0) {
  }

  virtual ~InnerStruct() throw() {}

  int32_t field0;

  _InnerStruct__isset __isset;

  void __set_field0(const int32_t val) {
    field0 = val;
  }

  bool operator == (const InnerStruct & rhs) const
  {
    if (!(field0 == rhs.field0))
      return false;
    return true;
  }
  bool operator != (const InnerStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InnerStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(InnerStruct &a, InnerStruct &b);

typedef struct _ThriftTestObj__isset {
  _ThriftTestObj__isset() : field1(false), field2(false), field3(false) {}
  bool field1;
  bool field2;
  bool field3;
} _ThriftTestObj__isset;

class ThriftTestObj {
 public:

  static const char* ascii_fingerprint; // = "2BA5D8DAACFBBE6599779830A6185706";
  static const uint8_t binary_fingerprint[16]; // = {0x2B,0xA5,0xD8,0xDA,0xAC,0xFB,0xBE,0x65,0x99,0x77,0x98,0x30,0xA6,0x18,0x57,0x06};

  ThriftTestObj() : field1(0), field2() {
  }

  virtual ~ThriftTestObj() throw() {}

  int32_t field1;
  std::string field2;
  std::vector<InnerStruct>  field3;

  _ThriftTestObj__isset __isset;

  void __set_field1(const int32_t val) {
    field1 = val;
  }

  void __set_field2(const std::string& val) {
    field2 = val;
  }

  void __set_field3(const std::vector<InnerStruct> & val) {
    field3 = val;
  }

  bool operator == (const ThriftTestObj & rhs) const
  {
    if (!(field1 == rhs.field1))
      return false;
    if (!(field2 == rhs.field2))
      return false;
    if (!(field3 == rhs.field3))
      return false;
    return true;
  }
  bool operator != (const ThriftTestObj &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ThriftTestObj & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ThriftTestObj &a, ThriftTestObj &b);



#endif
