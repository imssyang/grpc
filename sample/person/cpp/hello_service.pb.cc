// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello_service.proto

#include "hello_service.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class HelloRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<HelloRequest> _instance;
} _HelloRequest_default_instance_;
class HelloResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<HelloResponse> _instance;
} _HelloResponse_default_instance_;
static void InitDefaultsscc_info_HelloRequest_hello_5fservice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_HelloRequest_default_instance_;
    new (ptr) ::HelloRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_HelloRequest_hello_5fservice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_HelloRequest_hello_5fservice_2eproto}, {}};

static void InitDefaultsscc_info_HelloResponse_hello_5fservice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_HelloResponse_default_instance_;
    new (ptr) ::HelloResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_HelloResponse_hello_5fservice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_HelloResponse_hello_5fservice_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_hello_5fservice_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_hello_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_hello_5fservice_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_hello_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::HelloRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::HelloRequest, greeting_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::HelloResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::HelloResponse, reply_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::HelloRequest)},
  { 6, -1, sizeof(::HelloResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_HelloRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_HelloResponse_default_instance_),
};

const char descriptor_table_protodef_hello_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023hello_service.proto\" \n\014HelloRequest\022\020\n"
  "\010greeting\030\001 \001(\t\"\036\n\rHelloResponse\022\r\n\005repl"
  "y\030\001 \001(\t29\n\014HelloService\022)\n\010SayHello\022\r.He"
  "lloRequest\032\016.HelloResponseb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_hello_5fservice_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_hello_5fservice_2eproto_sccs[2] = {
  &scc_info_HelloRequest_hello_5fservice_2eproto.base,
  &scc_info_HelloResponse_hello_5fservice_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_hello_5fservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_hello_5fservice_2eproto = {
  false, false, descriptor_table_protodef_hello_5fservice_2eproto, "hello_service.proto", 154,
  &descriptor_table_hello_5fservice_2eproto_once, descriptor_table_hello_5fservice_2eproto_sccs, descriptor_table_hello_5fservice_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_hello_5fservice_2eproto::offsets,
  file_level_metadata_hello_5fservice_2eproto, 2, file_level_enum_descriptors_hello_5fservice_2eproto, file_level_service_descriptors_hello_5fservice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_hello_5fservice_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_hello_5fservice_2eproto)), true);

// ===================================================================

class HelloRequest::_Internal {
 public:
};

HelloRequest::HelloRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:HelloRequest)
}
HelloRequest::HelloRequest(const HelloRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  greeting_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_greeting().empty()) {
    greeting_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_greeting(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:HelloRequest)
}

void HelloRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_HelloRequest_hello_5fservice_2eproto.base);
  greeting_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

HelloRequest::~HelloRequest() {
  // @@protoc_insertion_point(destructor:HelloRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void HelloRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  greeting_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void HelloRequest::ArenaDtor(void* object) {
  HelloRequest* _this = reinterpret_cast< HelloRequest* >(object);
  (void)_this;
}
void HelloRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void HelloRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const HelloRequest& HelloRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_HelloRequest_hello_5fservice_2eproto.base);
  return *internal_default_instance();
}


void HelloRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:HelloRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  greeting_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HelloRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string greeting = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_greeting();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "HelloRequest.greeting"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* HelloRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:HelloRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string greeting = 1;
  if (this->greeting().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_greeting().data(), static_cast<int>(this->_internal_greeting().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "HelloRequest.greeting");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_greeting(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:HelloRequest)
  return target;
}

size_t HelloRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:HelloRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string greeting = 1;
  if (this->greeting().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_greeting());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void HelloRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:HelloRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const HelloRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<HelloRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:HelloRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:HelloRequest)
    MergeFrom(*source);
  }
}

void HelloRequest::MergeFrom(const HelloRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:HelloRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.greeting().size() > 0) {
    _internal_set_greeting(from._internal_greeting());
  }
}

void HelloRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:HelloRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloRequest::CopyFrom(const HelloRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:HelloRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloRequest::IsInitialized() const {
  return true;
}

void HelloRequest::InternalSwap(HelloRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  greeting_.Swap(&other->greeting_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata HelloRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class HelloResponse::_Internal {
 public:
};

HelloResponse::HelloResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:HelloResponse)
}
HelloResponse::HelloResponse(const HelloResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  reply_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_reply().empty()) {
    reply_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_reply(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:HelloResponse)
}

void HelloResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_HelloResponse_hello_5fservice_2eproto.base);
  reply_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

HelloResponse::~HelloResponse() {
  // @@protoc_insertion_point(destructor:HelloResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void HelloResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  reply_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void HelloResponse::ArenaDtor(void* object) {
  HelloResponse* _this = reinterpret_cast< HelloResponse* >(object);
  (void)_this;
}
void HelloResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void HelloResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const HelloResponse& HelloResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_HelloResponse_hello_5fservice_2eproto.base);
  return *internal_default_instance();
}


void HelloResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:HelloResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  reply_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HelloResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string reply = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_reply();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "HelloResponse.reply"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* HelloResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:HelloResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string reply = 1;
  if (this->reply().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_reply().data(), static_cast<int>(this->_internal_reply().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "HelloResponse.reply");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_reply(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:HelloResponse)
  return target;
}

size_t HelloResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:HelloResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string reply = 1;
  if (this->reply().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_reply());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void HelloResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:HelloResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const HelloResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<HelloResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:HelloResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:HelloResponse)
    MergeFrom(*source);
  }
}

void HelloResponse::MergeFrom(const HelloResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:HelloResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.reply().size() > 0) {
    _internal_set_reply(from._internal_reply());
  }
}

void HelloResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:HelloResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloResponse::CopyFrom(const HelloResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:HelloResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HelloResponse::IsInitialized() const {
  return true;
}

void HelloResponse::InternalSwap(HelloResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  reply_.Swap(&other->reply_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata HelloResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::HelloRequest* Arena::CreateMaybeMessage< ::HelloRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::HelloRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::HelloResponse* Arena::CreateMaybeMessage< ::HelloResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::HelloResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
