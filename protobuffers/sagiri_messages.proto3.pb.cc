// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sagiri_messages.proto3

#include "sagiri_messages.proto3.pb.h"

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
class FileUpload_MessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<FileUpload_Message> _instance;
} _FileUpload_Message_default_instance_;
static void InitDefaultsscc_info_FileUpload_Message_sagiri_5fmessages_2eproto3() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_FileUpload_Message_default_instance_;
    new (ptr) ::FileUpload_Message();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::FileUpload_Message::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_FileUpload_Message_sagiri_5fmessages_2eproto3 =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_FileUpload_Message_sagiri_5fmessages_2eproto3}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sagiri_5fmessages_2eproto3[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_sagiri_5fmessages_2eproto3[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sagiri_5fmessages_2eproto3 = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sagiri_5fmessages_2eproto3::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::FileUpload_Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::FileUpload_Message, datasetuuid_),
  PROTOBUF_FIELD_OFFSET(::FileUpload_Message, fileuuid_),
  PROTOBUF_FIELD_OFFSET(::FileUpload_Message, islast_),
  PROTOBUF_FIELD_OFFSET(::FileUpload_Message, type_),
  PROTOBUF_FIELD_OFFSET(::FileUpload_Message, position_),
  PROTOBUF_FIELD_OFFSET(::FileUpload_Message, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::FileUpload_Message)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_FileUpload_Message_default_instance_),
};

const char descriptor_table_protodef_sagiri_5fmessages_2eproto3[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026sagiri_messages.proto3\"\212\001\n\022FileUpload_"
  "Message\022\023\n\013datasetUuid\030\001 \001(\t\022\020\n\010fileUuid"
  "\030\002 \001(\t\022\016\n\006isLast\030\003 \001(\010\022\035\n\004type\030\004 \001(\0162\017.U"
  "ploadDataType\022\020\n\010position\030\005 \001(\004\022\014\n\004data\030"
  "\006 \001(\014*=\n\016UploadDataType\022\020\n\014DATASET_TYPE\020"
  "\000\022\031\n\025CLUSTER_SNAPSHOT_TYPE\020\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sagiri_5fmessages_2eproto3_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_sagiri_5fmessages_2eproto3_sccs[1] = {
  &scc_info_FileUpload_Message_sagiri_5fmessages_2eproto3.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sagiri_5fmessages_2eproto3_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sagiri_5fmessages_2eproto3 = {
  false, false, descriptor_table_protodef_sagiri_5fmessages_2eproto3, "sagiri_messages.proto3", 236,
  &descriptor_table_sagiri_5fmessages_2eproto3_once, descriptor_table_sagiri_5fmessages_2eproto3_sccs, descriptor_table_sagiri_5fmessages_2eproto3_deps, 1, 0,
  schemas, file_default_instances, TableStruct_sagiri_5fmessages_2eproto3::offsets,
  file_level_metadata_sagiri_5fmessages_2eproto3, 1, file_level_enum_descriptors_sagiri_5fmessages_2eproto3, file_level_service_descriptors_sagiri_5fmessages_2eproto3,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_sagiri_5fmessages_2eproto3 = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_sagiri_5fmessages_2eproto3)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* UploadDataType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_sagiri_5fmessages_2eproto3);
  return file_level_enum_descriptors_sagiri_5fmessages_2eproto3[0];
}
bool UploadDataType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void FileUpload_Message::InitAsDefaultInstance() {
}
class FileUpload_Message::_Internal {
 public:
};

FileUpload_Message::FileUpload_Message(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:FileUpload_Message)
}
FileUpload_Message::FileUpload_Message(const FileUpload_Message& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  datasetuuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_datasetuuid().empty()) {
    datasetuuid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_datasetuuid(),
      GetArena());
  }
  fileuuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_fileuuid().empty()) {
    fileuuid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_fileuuid(),
      GetArena());
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_data(),
      GetArena());
  }
  ::memcpy(&islast_, &from.islast_,
    static_cast<size_t>(reinterpret_cast<char*>(&position_) -
    reinterpret_cast<char*>(&islast_)) + sizeof(position_));
  // @@protoc_insertion_point(copy_constructor:FileUpload_Message)
}

void FileUpload_Message::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_FileUpload_Message_sagiri_5fmessages_2eproto3.base);
  datasetuuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  fileuuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&islast_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&position_) -
      reinterpret_cast<char*>(&islast_)) + sizeof(position_));
}

FileUpload_Message::~FileUpload_Message() {
  // @@protoc_insertion_point(destructor:FileUpload_Message)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void FileUpload_Message::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  datasetuuid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  fileuuid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void FileUpload_Message::ArenaDtor(void* object) {
  FileUpload_Message* _this = reinterpret_cast< FileUpload_Message* >(object);
  (void)_this;
}
void FileUpload_Message::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void FileUpload_Message::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const FileUpload_Message& FileUpload_Message::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_FileUpload_Message_sagiri_5fmessages_2eproto3.base);
  return *internal_default_instance();
}


void FileUpload_Message::Clear() {
// @@protoc_insertion_point(message_clear_start:FileUpload_Message)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  datasetuuid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  fileuuid_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  data_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&islast_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&position_) -
      reinterpret_cast<char*>(&islast_)) + sizeof(position_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FileUpload_Message::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string datasetUuid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_datasetuuid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "FileUpload_Message.datasetUuid"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string fileUuid = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_fileuuid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "FileUpload_Message.fileUuid"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool isLast = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          islast_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .UploadDataType type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::UploadDataType>(val));
        } else goto handle_unusual;
        continue;
      // uint64 position = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          position_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes data = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* FileUpload_Message::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:FileUpload_Message)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string datasetUuid = 1;
  if (this->datasetuuid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_datasetuuid().data(), static_cast<int>(this->_internal_datasetuuid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FileUpload_Message.datasetUuid");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_datasetuuid(), target);
  }

  // string fileUuid = 2;
  if (this->fileuuid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_fileuuid().data(), static_cast<int>(this->_internal_fileuuid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "FileUpload_Message.fileUuid");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_fileuuid(), target);
  }

  // bool isLast = 3;
  if (this->islast() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_islast(), target);
  }

  // .UploadDataType type = 4;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_type(), target);
  }

  // uint64 position = 5;
  if (this->position() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(5, this->_internal_position(), target);
  }

  // bytes data = 6;
  if (this->data().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FileUpload_Message)
  return target;
}

size_t FileUpload_Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FileUpload_Message)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string datasetUuid = 1;
  if (this->datasetuuid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_datasetuuid());
  }

  // string fileUuid = 2;
  if (this->fileuuid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_fileuuid());
  }

  // bytes data = 6;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // bool isLast = 3;
  if (this->islast() != 0) {
    total_size += 1 + 1;
  }

  // .UploadDataType type = 4;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  // uint64 position = 5;
  if (this->position() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_position());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FileUpload_Message::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:FileUpload_Message)
  GOOGLE_DCHECK_NE(&from, this);
  const FileUpload_Message* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<FileUpload_Message>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:FileUpload_Message)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:FileUpload_Message)
    MergeFrom(*source);
  }
}

void FileUpload_Message::MergeFrom(const FileUpload_Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FileUpload_Message)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.datasetuuid().size() > 0) {
    _internal_set_datasetuuid(from._internal_datasetuuid());
  }
  if (from.fileuuid().size() > 0) {
    _internal_set_fileuuid(from._internal_fileuuid());
  }
  if (from.data().size() > 0) {
    _internal_set_data(from._internal_data());
  }
  if (from.islast() != 0) {
    _internal_set_islast(from._internal_islast());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.position() != 0) {
    _internal_set_position(from._internal_position());
  }
}

void FileUpload_Message::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:FileUpload_Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileUpload_Message::CopyFrom(const FileUpload_Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FileUpload_Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileUpload_Message::IsInitialized() const {
  return true;
}

void FileUpload_Message::InternalSwap(FileUpload_Message* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  datasetuuid_.Swap(&other->datasetuuid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  fileuuid_.Swap(&other->fileuuid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FileUpload_Message, position_)
      + sizeof(FileUpload_Message::position_)
      - PROTOBUF_FIELD_OFFSET(FileUpload_Message, islast_)>(
          reinterpret_cast<char*>(&islast_),
          reinterpret_cast<char*>(&other->islast_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FileUpload_Message::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::FileUpload_Message* Arena::CreateMaybeMessage< ::FileUpload_Message >(Arena* arena) {
  return Arena::CreateMessageInternal< ::FileUpload_Message >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
