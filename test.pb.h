// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto;
namespace test {
class HelloReq;
class HelloReqDefaultTypeInternal;
extern HelloReqDefaultTypeInternal _HelloReq_default_instance_;
class HelloRes;
class HelloResDefaultTypeInternal;
extern HelloResDefaultTypeInternal _HelloRes_default_instance_;
}  // namespace test
PROTOBUF_NAMESPACE_OPEN
template<> ::test::HelloReq* Arena::CreateMaybeMessage<::test::HelloReq>(Arena*);
template<> ::test::HelloRes* Arena::CreateMaybeMessage<::test::HelloRes>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace test {

// ===================================================================

class HelloReq PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:test.HelloReq) */ {
 public:
  inline HelloReq() : HelloReq(nullptr) {};
  virtual ~HelloReq();

  HelloReq(const HelloReq& from);
  HelloReq(HelloReq&& from) noexcept
    : HelloReq() {
    *this = ::std::move(from);
  }

  inline HelloReq& operator=(const HelloReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloReq& operator=(HelloReq&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const HelloReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloReq* internal_default_instance() {
    return reinterpret_cast<const HelloReq*>(
               &_HelloReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HelloReq& a, HelloReq& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloReq* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloReq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HelloReq* New() const final {
    return CreateMaybeMessage<HelloReq>(nullptr);
  }

  HelloReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HelloReq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HelloReq& from);
  void MergeFrom(const HelloReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloReq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "test.HelloReq";
  }
  protected:
  explicit HelloReq(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPicFieldNumber = 1,
  };
  // string pic = 1;
  void clear_pic();
  const std::string& pic() const;
  void set_pic(const std::string& value);
  void set_pic(std::string&& value);
  void set_pic(const char* value);
  void set_pic(const char* value, size_t size);
  std::string* mutable_pic();
  std::string* release_pic();
  void set_allocated_pic(std::string* pic);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_pic();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_pic(
      std::string* pic);
  private:
  const std::string& _internal_pic() const;
  void _internal_set_pic(const std::string& value);
  std::string* _internal_mutable_pic();
  public:

  // @@protoc_insertion_point(class_scope:test.HelloReq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pic_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// -------------------------------------------------------------------

class HelloRes PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:test.HelloRes) */ {
 public:
  inline HelloRes() : HelloRes(nullptr) {};
  virtual ~HelloRes();

  HelloRes(const HelloRes& from);
  HelloRes(HelloRes&& from) noexcept
    : HelloRes() {
    *this = ::std::move(from);
  }

  inline HelloRes& operator=(const HelloRes& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloRes& operator=(HelloRes&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const HelloRes& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HelloRes* internal_default_instance() {
    return reinterpret_cast<const HelloRes*>(
               &_HelloRes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HelloRes& a, HelloRes& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloRes* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HelloRes* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HelloRes* New() const final {
    return CreateMaybeMessage<HelloRes>(nullptr);
  }

  HelloRes* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HelloRes>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HelloRes& from);
  void MergeFrom(const HelloRes& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HelloRes* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "test.HelloRes";
  }
  protected:
  explicit HelloRes(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // string result = 1;
  void clear_result();
  const std::string& result() const;
  void set_result(const std::string& value);
  void set_result(std::string&& value);
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  std::string* mutable_result();
  std::string* release_result();
  void set_allocated_result(std::string* result);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_result();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_result(
      std::string* result);
  private:
  const std::string& _internal_result() const;
  void _internal_set_result(const std::string& value);
  std::string* _internal_mutable_result();
  public:

  // @@protoc_insertion_point(class_scope:test.HelloRes)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloReq

// string pic = 1;
inline void HelloReq::clear_pic() {
  pic_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& HelloReq::pic() const {
  // @@protoc_insertion_point(field_get:test.HelloReq.pic)
  return _internal_pic();
}
inline void HelloReq::set_pic(const std::string& value) {
  _internal_set_pic(value);
  // @@protoc_insertion_point(field_set:test.HelloReq.pic)
}
inline std::string* HelloReq::mutable_pic() {
  // @@protoc_insertion_point(field_mutable:test.HelloReq.pic)
  return _internal_mutable_pic();
}
inline const std::string& HelloReq::_internal_pic() const {
  return pic_.Get();
}
inline void HelloReq::_internal_set_pic(const std::string& value) {
  
  pic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void HelloReq::set_pic(std::string&& value) {
  
  pic_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:test.HelloReq.pic)
}
inline void HelloReq::set_pic(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  pic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:test.HelloReq.pic)
}
inline void HelloReq::set_pic(const char* value,
    size_t size) {
  
  pic_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:test.HelloReq.pic)
}
inline std::string* HelloReq::_internal_mutable_pic() {
  
  return pic_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* HelloReq::release_pic() {
  // @@protoc_insertion_point(field_release:test.HelloReq.pic)
  return pic_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void HelloReq::set_allocated_pic(std::string* pic) {
  if (pic != nullptr) {
    
  } else {
    
  }
  pic_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), pic,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:test.HelloReq.pic)
}
inline std::string* HelloReq::unsafe_arena_release_pic() {
  // @@protoc_insertion_point(field_unsafe_arena_release:test.HelloReq.pic)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return pic_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void HelloReq::unsafe_arena_set_allocated_pic(
    std::string* pic) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (pic != nullptr) {
    
  } else {
    
  }
  pic_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      pic, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:test.HelloReq.pic)
}

// -------------------------------------------------------------------

// HelloRes

// string result = 1;
inline void HelloRes::clear_result() {
  result_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& HelloRes::result() const {
  // @@protoc_insertion_point(field_get:test.HelloRes.result)
  return _internal_result();
}
inline void HelloRes::set_result(const std::string& value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:test.HelloRes.result)
}
inline std::string* HelloRes::mutable_result() {
  // @@protoc_insertion_point(field_mutable:test.HelloRes.result)
  return _internal_mutable_result();
}
inline const std::string& HelloRes::_internal_result() const {
  return result_.Get();
}
inline void HelloRes::_internal_set_result(const std::string& value) {
  
  result_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void HelloRes::set_result(std::string&& value) {
  
  result_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:test.HelloRes.result)
}
inline void HelloRes::set_result(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  result_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:test.HelloRes.result)
}
inline void HelloRes::set_result(const char* value,
    size_t size) {
  
  result_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:test.HelloRes.result)
}
inline std::string* HelloRes::_internal_mutable_result() {
  
  return result_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* HelloRes::release_result() {
  // @@protoc_insertion_point(field_release:test.HelloRes.result)
  return result_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void HelloRes::set_allocated_result(std::string* result) {
  if (result != nullptr) {
    
  } else {
    
  }
  result_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), result,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:test.HelloRes.result)
}
inline std::string* HelloRes::unsafe_arena_release_result() {
  // @@protoc_insertion_point(field_unsafe_arena_release:test.HelloRes.result)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return result_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void HelloRes::unsafe_arena_set_allocated_result(
    std::string* result) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (result != nullptr) {
    
  } else {
    
  }
  result_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      result, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:test.HelloRes.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace test

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_2eproto