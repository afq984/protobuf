// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/struct.proto
// Protobuf C++ Version: 5.27.0-dev

#include "google/protobuf/struct.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace google {
namespace protobuf {

inline constexpr ListValue::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : values_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ListValue::ListValue(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ListValueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ListValueDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ListValueDefaultTypeInternal() {}
  union {
    ListValue _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ListValueDefaultTypeInternal _ListValue_default_instance_;

inline constexpr Struct::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : fields_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Struct::Struct(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct StructDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StructDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~StructDefaultTypeInternal() {}
  union {
    Struct _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StructDefaultTypeInternal _Struct_default_instance_;
      template <typename>
PROTOBUF_CONSTEXPR Struct_FieldsEntry_DoNotUse::Struct_FieldsEntry_DoNotUse(::_pbi::ConstantInitialized) {}
struct Struct_FieldsEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Struct_FieldsEntry_DoNotUseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Struct_FieldsEntry_DoNotUseDefaultTypeInternal() {}
  union {
    Struct_FieldsEntry_DoNotUse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Struct_FieldsEntry_DoNotUseDefaultTypeInternal _Struct_FieldsEntry_DoNotUse_default_instance_;

inline constexpr Value::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : kind_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Value::Value(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ValueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ValueDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ValueDefaultTypeInternal() {}
  union {
    Value _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ValueDefaultTypeInternal _Value_default_instance_;
}  // namespace protobuf
}  // namespace google
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2fprotobuf_2fstruct_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2fstruct_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2fstruct_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Struct_FieldsEntry_DoNotUse, _has_bits_),
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Struct_FieldsEntry_DoNotUse, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Struct_FieldsEntry_DoNotUse, key_),
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Struct_FieldsEntry_DoNotUse, value_),
        0,
        1,
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Struct, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Struct, _impl_.fields_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Value, _internal_metadata_),
        ~0u,  // no _extensions_
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Value, _impl_._oneof_case_[0]),
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        PROTOBUF_FIELD_OFFSET(::google::protobuf::Value, _impl_.kind_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::google::protobuf::ListValue, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::google::protobuf::ListValue, _impl_.values_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::google::protobuf::Struct_FieldsEntry_DoNotUse)},
        {12, -1, -1, sizeof(::google::protobuf::Struct)},
        {21, -1, -1, sizeof(::google::protobuf::Value)},
        {36, -1, -1, sizeof(::google::protobuf::ListValue)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::google::protobuf::_Struct_FieldsEntry_DoNotUse_default_instance_._instance,
    &::google::protobuf::_Struct_default_instance_._instance,
    &::google::protobuf::_Value_default_instance_._instance,
    &::google::protobuf::_ListValue_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2fstruct_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\034google/protobuf/struct.proto\022\017google.p"
    "rotobuf\"\204\001\n\006Struct\0223\n\006fields\030\001 \003(\0132#.goo"
    "gle.protobuf.Struct.FieldsEntry\032E\n\013Field"
    "sEntry\022\013\n\003key\030\001 \001(\t\022%\n\005value\030\002 \001(\0132\026.goo"
    "gle.protobuf.Value:\0028\001\"\352\001\n\005Value\0220\n\nnull"
    "_value\030\001 \001(\0162\032.google.protobuf.NullValue"
    "H\000\022\026\n\014number_value\030\002 \001(\001H\000\022\026\n\014string_val"
    "ue\030\003 \001(\tH\000\022\024\n\nbool_value\030\004 \001(\010H\000\022/\n\014stru"
    "ct_value\030\005 \001(\0132\027.google.protobuf.StructH"
    "\000\0220\n\nlist_value\030\006 \001(\0132\032.google.protobuf."
    "ListValueH\000B\006\n\004kind\"3\n\tListValue\022&\n\006valu"
    "es\030\001 \003(\0132\026.google.protobuf.Value*\033\n\tNull"
    "Value\022\016\n\nNULL_VALUE\020\000B\177\n\023com.google.prot"
    "obufB\013StructProtoP\001Z/google.golang.org/p"
    "rotobuf/types/known/structpb\370\001\001\242\002\003GPB\252\002\036"
    "Google.Protobuf.WellKnownTypesb\006proto3"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2fstruct_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2fstruct_2eproto = {
    false,
    false,
    638,
    descriptor_table_protodef_google_2fprotobuf_2fstruct_2eproto,
    "google/protobuf/struct.proto",
    &descriptor_table_google_2fprotobuf_2fstruct_2eproto_once,
    nullptr,
    0,
    4,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2fstruct_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2fstruct_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2fstruct_2eproto,
};
namespace google {
namespace protobuf {
const ::google::protobuf::EnumDescriptor* NullValue_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2fstruct_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2fstruct_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t NullValue_internal_data_[] = {
    65536u, 0u, };
bool NullValue_IsValid(int value) {
  return 0 <= value && value <= 0;
}
// ===================================================================

Struct_FieldsEntry_DoNotUse::Struct_FieldsEntry_DoNotUse() {}
Struct_FieldsEntry_DoNotUse::Struct_FieldsEntry_DoNotUse(::google::protobuf::Arena* arena)
    : SuperType(arena) {}
const ::google::protobuf::MessageLite::ClassData*
Struct_FieldsEntry_DoNotUse::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(Struct_FieldsEntry_DoNotUse, _cached_size_),
              false,
          },
          &Struct_FieldsEntry_DoNotUse::MergeImpl,
          &Struct_FieldsEntry_DoNotUse::kDescriptorMethods,
          &descriptor_table_google_2fprotobuf_2fstruct_2eproto,
          nullptr,  // tracker
      };
  return _data_.base();
}
// ===================================================================

class Struct::_Internal {
 public:
};

Struct::Struct(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Struct)
}
inline PROTOBUF_NDEBUG_INLINE Struct::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : fields_{visibility, arena, from.fields_},
        _cached_size_{0} {}

Struct::Struct(
    ::google::protobuf::Arena* arena,
    const Struct& from)
    : ::google::protobuf::Message(arena) {
  Struct* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:google.protobuf.Struct)
}
inline PROTOBUF_NDEBUG_INLINE Struct::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : fields_{visibility, arena},
        _cached_size_{0} {}

inline void Struct::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Struct::~Struct() {
  // @@protoc_insertion_point(destructor:google.protobuf.Struct)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Struct::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Struct::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(Struct, _impl_._cached_size_),
              false,
          },
          &Struct::MergeImpl,
          &Struct::kDescriptorMethods,
          &descriptor_table_google_2fprotobuf_2fstruct_2eproto,
          nullptr,  // tracker
      };
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 2, 37, 2> Struct::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Struct_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::google::protobuf::Struct>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // map<string, .google.protobuf.Value> fields = 1;
    {PROTOBUF_FIELD_OFFSET(Struct, _impl_.fields_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMap)},
  }}, {{
    {::_pbi::TcParser::GetMapAuxInfo<
        decltype(Struct()._impl_.fields_)>(
        1, 0, 0, 9,
        11)},
    {::_pbi::TcParser::CreateInArenaStorageCb<::google::protobuf::Value>},
  }}, {{
    "\26\6\0\0\0\0\0\0"
    "google.protobuf.Struct"
    "fields"
  }},
};

PROTOBUF_NOINLINE void Struct::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Struct)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.fields_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Struct::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


::uint8_t* Struct::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Struct)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // map<string, .google.protobuf.Value> fields = 1;
  if (!_internal_fields().empty()) {
    using MapType = ::google::protobuf::Map<std::string, ::google::protobuf::Value>;
    using WireHelper = _pbi::MapEntryFuncs<std::string, ::google::protobuf::Value,
                                   _pbi::WireFormatLite::TYPE_STRING,
                                   _pbi::WireFormatLite::TYPE_MESSAGE>;
    const auto& field = _internal_fields();

    if (stream->IsSerializationDeterministic() && field.size() > 1) {
      for (const auto& entry : ::google::protobuf::internal::MapSorterPtr<MapType>(field)) {
        target = WireHelper::InternalSerialize(
            1, entry.first, entry.second, target, stream);
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.first.data(), static_cast<int>(entry.first.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.protobuf.Struct.fields");
      }
    } else {
      for (const auto& entry : field) {
        target = WireHelper::InternalSerialize(
            1, entry.first, entry.second, target, stream);
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry.first.data(), static_cast<int>(entry.first.length()),
 ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.protobuf.Struct.fields");
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Struct)
  return target;
}

::size_t Struct::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Struct)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // map<string, .google.protobuf.Value> fields = 1;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_fields_size());
  for (const auto& entry : _internal_fields()) {
    total_size += _pbi::MapEntryFuncs<std::string, ::google::protobuf::Value,
                                   _pbi::WireFormatLite::TYPE_STRING,
                                   _pbi::WireFormatLite::TYPE_MESSAGE>::ByteSizeLong(entry.first, entry.second);
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Struct::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Struct*>(&to_msg);
  auto& from = static_cast<const Struct&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Struct)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.fields_.MergeFrom(from._impl_.fields_);
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Struct::CopyFrom(const Struct& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Struct)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Struct::IsInitialized() const {
  return true;
}

void Struct::InternalSwap(Struct* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.fields_.InternalSwap(&other->_impl_.fields_);
}

::google::protobuf::Metadata Struct::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class Value::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::google::protobuf::Value, _impl_._oneof_case_);
};

void Value::set_allocated_struct_value(::google::protobuf::Struct* struct_value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  clear_kind();
  if (struct_value) {
    ::google::protobuf::Arena* submessage_arena = struct_value->GetArena();
    if (message_arena != submessage_arena) {
      struct_value = ::google::protobuf::internal::GetOwnedMessage(message_arena, struct_value, submessage_arena);
    }
    set_has_struct_value();
    _impl_.kind_.struct_value_ = struct_value;
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Value.struct_value)
}
void Value::set_allocated_list_value(::google::protobuf::ListValue* list_value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  clear_kind();
  if (list_value) {
    ::google::protobuf::Arena* submessage_arena = list_value->GetArena();
    if (message_arena != submessage_arena) {
      list_value = ::google::protobuf::internal::GetOwnedMessage(message_arena, list_value, submessage_arena);
    }
    set_has_list_value();
    _impl_.kind_.list_value_ = list_value;
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Value.list_value)
}
Value::Value(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Value)
}
inline PROTOBUF_NDEBUG_INLINE Value::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : kind_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

Value::Value(
    ::google::protobuf::Arena* arena,
    const Value& from)
    : ::google::protobuf::Message(arena) {
  Value* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  switch (kind_case()) {
    case KIND_NOT_SET:
      break;
      case kNullValue:
        _impl_.kind_.null_value_ = from._impl_.kind_.null_value_;
        break;
      case kNumberValue:
        _impl_.kind_.number_value_ = from._impl_.kind_.number_value_;
        break;
      case kStringValue:
        new (&_impl_.kind_.string_value_) decltype(_impl_.kind_.string_value_){arena, from._impl_.kind_.string_value_};
        break;
      case kBoolValue:
        _impl_.kind_.bool_value_ = from._impl_.kind_.bool_value_;
        break;
      case kStructValue:
        _impl_.kind_.struct_value_ = ::google::protobuf::Message::CopyConstruct<::google::protobuf::Struct>(arena, *from._impl_.kind_.struct_value_);
        break;
      case kListValue:
        _impl_.kind_.list_value_ = ::google::protobuf::Message::CopyConstruct<::google::protobuf::ListValue>(arena, *from._impl_.kind_.list_value_);
        break;
  }

  // @@protoc_insertion_point(copy_constructor:google.protobuf.Value)
}
inline PROTOBUF_NDEBUG_INLINE Value::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : kind_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void Value::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Value::~Value() {
  // @@protoc_insertion_point(destructor:google.protobuf.Value)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Value::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  if (has_kind()) {
    clear_kind();
  }
  _impl_.~Impl_();
}

void Value::clear_kind() {
// @@protoc_insertion_point(one_of_clear_start:google.protobuf.Value)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  switch (kind_case()) {
    case kNullValue: {
      // No need to clear
      break;
    }
    case kNumberValue: {
      // No need to clear
      break;
    }
    case kStringValue: {
      _impl_.kind_.string_value_.Destroy();
      break;
    }
    case kBoolValue: {
      // No need to clear
      break;
    }
    case kStructValue: {
      if (GetArena() == nullptr) {
        delete _impl_.kind_.struct_value_;
      }
      break;
    }
    case kListValue: {
      if (GetArena() == nullptr) {
        delete _impl_.kind_.list_value_;
      }
      break;
    }
    case KIND_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = KIND_NOT_SET;
}


const ::google::protobuf::MessageLite::ClassData*
Value::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(Value, _impl_._cached_size_),
              false,
          },
          &Value::MergeImpl,
          &Value::kDescriptorMethods,
          &descriptor_table_google_2fprotobuf_2fstruct_2eproto,
          nullptr,  // tracker
      };
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 6, 2, 42, 2> Value::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    6, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967232,  // skipmap
    offsetof(decltype(_table_), field_entries),
    6,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Value_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::google::protobuf::Value>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // .google.protobuf.NullValue null_value = 1;
    {PROTOBUF_FIELD_OFFSET(Value, _impl_.kind_.null_value_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kOpenEnum)},
    // double number_value = 2;
    {PROTOBUF_FIELD_OFFSET(Value, _impl_.kind_.number_value_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kDouble)},
    // string string_value = 3;
    {PROTOBUF_FIELD_OFFSET(Value, _impl_.kind_.string_value_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // bool bool_value = 4;
    {PROTOBUF_FIELD_OFFSET(Value, _impl_.kind_.bool_value_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBool)},
    // .google.protobuf.Struct struct_value = 5;
    {PROTOBUF_FIELD_OFFSET(Value, _impl_.kind_.struct_value_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kMessage | ::_fl::kTvTable)},
    // .google.protobuf.ListValue list_value = 6;
    {PROTOBUF_FIELD_OFFSET(Value, _impl_.kind_.list_value_), _Internal::kOneofCaseOffset + 0, 1,
    (0 | ::_fl::kFcOneof | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::google::protobuf::Struct>()},
    {::_pbi::TcParser::GetTable<::google::protobuf::ListValue>()},
  }}, {{
    "\25\0\0\14\0\0\0\0"
    "google.protobuf.Value"
    "string_value"
  }},
};

PROTOBUF_NOINLINE void Value::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Value)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_kind();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Value::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


::uint8_t* Value::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Value)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  switch (kind_case()) {
    case kNullValue: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteEnumToArray(
          1, this->_internal_null_value(), target);
      break;
    }
    case kNumberValue: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteDoubleToArray(
          2, this->_internal_number_value(), target);
      break;
    }
    case kStringValue: {
      const std::string& _s = this->_internal_string_value();
      ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.protobuf.Value.string_value");
      target = stream->WriteStringMaybeAliased(3, _s, target);
      break;
    }
    case kBoolValue: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteBoolToArray(
          4, this->_internal_bool_value(), target);
      break;
    }
    case kStructValue: {
      target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
          5, *_impl_.kind_.struct_value_, _impl_.kind_.struct_value_->GetCachedSize(), target, stream);
      break;
    }
    case kListValue: {
      target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
          6, *_impl_.kind_.list_value_, _impl_.kind_.list_value_->GetCachedSize(), target, stream);
      break;
    }
    default:
      break;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Value)
  return target;
}

::size_t Value::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Value)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  switch (kind_case()) {
    // .google.protobuf.NullValue null_value = 1;
    case kNullValue: {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_null_value());
      break;
    }
    // double number_value = 2;
    case kNumberValue: {
      total_size += 9;
      break;
    }
    // string string_value = 3;
    case kStringValue: {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_string_value());
      break;
    }
    // bool bool_value = 4;
    case kBoolValue: {
      total_size += 2;
      break;
    }
    // .google.protobuf.Struct struct_value = 5;
    case kStructValue: {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.kind_.struct_value_);
      break;
    }
    // .google.protobuf.ListValue list_value = 6;
    case kListValue: {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.kind_.list_value_);
      break;
    }
    case KIND_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Value::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Value*>(&to_msg);
  auto& from = static_cast<const Value&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Value)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[0]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[0];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_kind();
      }
      _this->_impl_._oneof_case_[0] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kNullValue: {
        _this->_impl_.kind_.null_value_ = from._impl_.kind_.null_value_;
        break;
      }
      case kNumberValue: {
        _this->_impl_.kind_.number_value_ = from._impl_.kind_.number_value_;
        break;
      }
      case kStringValue: {
        if (oneof_needs_init) {
          _this->_impl_.kind_.string_value_.InitDefault();
        }
        _this->_impl_.kind_.string_value_.Set(from._internal_string_value(), arena);
        break;
      }
      case kBoolValue: {
        _this->_impl_.kind_.bool_value_ = from._impl_.kind_.bool_value_;
        break;
      }
      case kStructValue: {
        if (oneof_needs_init) {
          _this->_impl_.kind_.struct_value_ =
              ::google::protobuf::Message::CopyConstruct<::google::protobuf::Struct>(arena, *from._impl_.kind_.struct_value_);
        } else {
          _this->_impl_.kind_.struct_value_->MergeFrom(from._internal_struct_value());
        }
        break;
      }
      case kListValue: {
        if (oneof_needs_init) {
          _this->_impl_.kind_.list_value_ =
              ::google::protobuf::Message::CopyConstruct<::google::protobuf::ListValue>(arena, *from._impl_.kind_.list_value_);
        } else {
          _this->_impl_.kind_.list_value_->MergeFrom(from._internal_list_value());
        }
        break;
      }
      case KIND_NOT_SET:
        break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Value::CopyFrom(const Value& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Value)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Value::IsInitialized() const {
  return true;
}

void Value::InternalSwap(Value* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.kind_, other->_impl_.kind_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata Value::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class ListValue::_Internal {
 public:
};

ListValue::ListValue(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.ListValue)
}
inline PROTOBUF_NDEBUG_INLINE ListValue::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : values_{visibility, arena, from.values_},
        _cached_size_{0} {}

ListValue::ListValue(
    ::google::protobuf::Arena* arena,
    const ListValue& from)
    : ::google::protobuf::Message(arena) {
  ListValue* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:google.protobuf.ListValue)
}
inline PROTOBUF_NDEBUG_INLINE ListValue::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : values_{visibility, arena},
        _cached_size_{0} {}

inline void ListValue::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
ListValue::~ListValue() {
  // @@protoc_insertion_point(destructor:google.protobuf.ListValue)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ListValue::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
ListValue::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(ListValue, _impl_._cached_size_),
              false,
          },
          &ListValue::MergeImpl,
          &ListValue::kDescriptorMethods,
          &descriptor_table_google_2fprotobuf_2fstruct_2eproto,
          nullptr,  // tracker
      };
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> ListValue::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_ListValue_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::google::protobuf::ListValue>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated .google.protobuf.Value values = 1;
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(ListValue, _impl_.values_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .google.protobuf.Value values = 1;
    {PROTOBUF_FIELD_OFFSET(ListValue, _impl_.values_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::google::protobuf::Value>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void ListValue::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.ListValue)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.values_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* ListValue::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


::uint8_t* ListValue::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.ListValue)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .google.protobuf.Value values = 1;
  for (unsigned i = 0, n = static_cast<unsigned>(
                           this->_internal_values_size());
       i < n; i++) {
    const auto& repfield = this->_internal_values().Get(i);
    target =
        ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            1, repfield, repfield.GetCachedSize(),
            target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.ListValue)
  return target;
}

::size_t ListValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.ListValue)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated .google.protobuf.Value values = 1;
  total_size += 1UL * this->_internal_values_size();
  for (const auto& msg : this->_internal_values()) {
    total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void ListValue::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<ListValue*>(&to_msg);
  auto& from = static_cast<const ListValue&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.ListValue)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_values()->MergeFrom(
      from._internal_values());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ListValue::CopyFrom(const ListValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.ListValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool ListValue::IsInitialized() const {
  return true;
}

void ListValue::InternalSwap(ListValue* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.values_.InternalSwap(&other->_impl_.values_);
}

::google::protobuf::Metadata ListValue::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::std::false_type _static_init_ PROTOBUF_UNUSED =
    (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2fstruct_2eproto),
     ::std::false_type{});
#include "google/protobuf/port_undef.inc"
