/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef streamcorpus_TYPES_H
#define streamcorpus_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace streamcorpus {

struct OffsetType {
  enum type {
    LINES = 0,
    BYTES = 1,
    CHARS = 2
  };
};

extern const std::map<int, const char*> _OffsetType_VALUES_TO_NAMES;

struct EntityType {
  enum type {
    PER = 0,
    ORG = 1,
    LOC = 2,
    TIME = 5,
    DATE = 6,
    MONEY = 7,
    PERCENT = 8,
    MISC = 9,
    GPE = 10,
    FAC = 11,
    VEH = 12,
    WEA = 13,
    phone = 14,
    email = 15,
    URL = 16
  };
};

extern const std::map<int, const char*> _EntityType_VALUES_TO_NAMES;

struct MentionType {
  enum type {
    NAME = 0,
    PRO = 1,
    NOM = 2
  };
};

extern const std::map<int, const char*> _MentionType_VALUES_TO_NAMES;

struct Gender {
  enum type {
    FEMALE = 0,
    MALE = 1
  };
};

extern const std::map<int, const char*> _Gender_VALUES_TO_NAMES;

struct AttributeType {
  enum type {
    PER_AGE = 0,
    PER_GENDER = 1
  };
};

extern const std::map<int, const char*> _AttributeType_VALUES_TO_NAMES;

struct RelationType {
  enum type {
    PHYS_Located = 0,
    PHYS_Near = 1,
    PARTWHOLE_Geographical = 2,
    PARTWHOLE_Subsidiary = 3,
    PARTWHOLE_Artifact = 4,
    PERSOC_Business = 5,
    PERSOC_Family = 6,
    PERSOC_LastingPersonal = 7,
    ORGAFF_Employment = 8,
    ORGAFF_Ownership = 9,
    ORGAFF_Founder = 10,
    ORGAFF_StudentAlum = 11,
    ORGAFF_SportsAffiliation = 12,
    ORGAFF_InvestorShareholder = 13,
    ORGAFF_Membership = 14,
    ART_UserOwnerInventorManufacturer = 15,
    GENAFF_CitizenResidentReligionEthnicity = 16,
    GENAFF_OrgLocation = 17,
    Business_DeclareBankruptcy = 18,
    Business_EndOrg = 19,
    Business_MergeOrg = 20,
    Business_StartOrg = 21,
    Conflict_Attack = 22,
    Conflict_Demonstrate = 23,
    Contact_PhoneWrite = 24,
    Contact_Meet = 25,
    Justice_Acquit = 26,
    Justice_Appeal = 27,
    Justice_ArrestJail = 28,
    Justice_ChargeIndict = 29,
    Justice_Convict = 30,
    Justice_Execute = 31,
    Justice_Extradite = 32,
    Justice_Fine = 33,
    Justice_Pardon = 34,
    Justice_ReleaseParole = 35,
    Justice_Sentence = 36,
    Justice_Sue = 37,
    Justice_TrialHearing = 38,
    Life_BeBorn = 39,
    Life_Die = 40,
    Life_Divorce = 41,
    Life_Injure = 42,
    Life_Marry = 43,
    Movement_Transport = 44,
    Personnel_Elect = 45,
    Personnel_EndPosition = 46,
    Personnel_Nominate = 47,
    Personnel_StartPosition = 48,
    Transaction_TransferMoney = 49,
    Transaction_TransferOwnership = 50
  };
};

extern const std::map<int, const char*> _RelationType_VALUES_TO_NAMES;

struct Versions {
  enum type {
    v0_2_0 = 0,
    v0_3_0 = 1
  };
};

extern const std::map<int, const char*> _Versions_VALUES_TO_NAMES;

typedef std::string AnnotatorID;

typedef int32_t MentionID;

typedef std::string TaggerID;

typedef std::string SourceMetadata;

typedef std::string SystemID;

typedef std::string DocIDorStreamID;

typedef struct _StreamTime__isset {
  _StreamTime__isset() : epoch_ticks(false), zulu_timestamp(false) {}
  bool epoch_ticks;
  bool zulu_timestamp;
} _StreamTime__isset;

class StreamTime {
 public:

  static const char* ascii_fingerprint; // = "DD2684E5F49042C4C07B5348ECFFFD06";
  static const uint8_t binary_fingerprint[16]; // = {0xDD,0x26,0x84,0xE5,0xF4,0x90,0x42,0xC4,0xC0,0x7B,0x53,0x48,0xEC,0xFF,0xFD,0x06};

  StreamTime() : epoch_ticks(0), zulu_timestamp() {
  }

  virtual ~StreamTime() throw() {}

  double epoch_ticks;
  std::string zulu_timestamp;

  _StreamTime__isset __isset;

  void __set_epoch_ticks(const double val) {
    epoch_ticks = val;
  }

  void __set_zulu_timestamp(const std::string& val) {
    zulu_timestamp = val;
  }

  bool operator == (const StreamTime & rhs) const
  {
    if (!(epoch_ticks == rhs.epoch_ticks))
      return false;
    if (!(zulu_timestamp == rhs.zulu_timestamp))
      return false;
    return true;
  }
  bool operator != (const StreamTime &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StreamTime & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StreamTime &a, StreamTime &b);

typedef struct _Annotator__isset {
  _Annotator__isset() : annotator_id(false), annotation_time(false) {}
  bool annotator_id;
  bool annotation_time;
} _Annotator__isset;

class Annotator {
 public:

  static const char* ascii_fingerprint; // = "8D64F3DD69187433CDFC330482190EEE";
  static const uint8_t binary_fingerprint[16]; // = {0x8D,0x64,0xF3,0xDD,0x69,0x18,0x74,0x33,0xCD,0xFC,0x33,0x04,0x82,0x19,0x0E,0xEE};

  Annotator() : annotator_id() {
  }

  virtual ~Annotator() throw() {}

  AnnotatorID annotator_id;
  StreamTime annotation_time;

  _Annotator__isset __isset;

  void __set_annotator_id(const AnnotatorID& val) {
    annotator_id = val;
  }

  void __set_annotation_time(const StreamTime& val) {
    annotation_time = val;
    __isset.annotation_time = true;
  }

  bool operator == (const Annotator & rhs) const
  {
    if (!(annotator_id == rhs.annotator_id))
      return false;
    if (__isset.annotation_time != rhs.__isset.annotation_time)
      return false;
    else if (__isset.annotation_time && !(annotation_time == rhs.annotation_time))
      return false;
    return true;
  }
  bool operator != (const Annotator &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Annotator & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Annotator &a, Annotator &b);

typedef struct _Offset__isset {
  _Offset__isset() : type(false), first(false), length(false), xpath(false), content_form(true), value(false) {}
  bool type;
  bool first;
  bool length;
  bool xpath;
  bool content_form;
  bool value;
} _Offset__isset;

class Offset {
 public:

  static const char* ascii_fingerprint; // = "A20D4C3BA289AF4627C9FDEC29A1B027";
  static const uint8_t binary_fingerprint[16]; // = {0xA2,0x0D,0x4C,0x3B,0xA2,0x89,0xAF,0x46,0x27,0xC9,0xFD,0xEC,0x29,0xA1,0xB0,0x27};

  Offset() : type((OffsetType::type)0), first(0), length(0), xpath(), content_form("clean_visible"), value() {
  }

  virtual ~Offset() throw() {}

  OffsetType::type type;
  int64_t first;
  int32_t length;
  std::string xpath;
  std::string content_form;
  std::string value;

  _Offset__isset __isset;

  void __set_type(const OffsetType::type val) {
    type = val;
  }

  void __set_first(const int64_t val) {
    first = val;
  }

  void __set_length(const int32_t val) {
    length = val;
  }

  void __set_xpath(const std::string& val) {
    xpath = val;
    __isset.xpath = true;
  }

  void __set_content_form(const std::string& val) {
    content_form = val;
    __isset.content_form = true;
  }

  void __set_value(const std::string& val) {
    value = val;
    __isset.value = true;
  }

  bool operator == (const Offset & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(first == rhs.first))
      return false;
    if (!(length == rhs.length))
      return false;
    if (__isset.xpath != rhs.__isset.xpath)
      return false;
    else if (__isset.xpath && !(xpath == rhs.xpath))
      return false;
    if (__isset.content_form != rhs.__isset.content_form)
      return false;
    else if (__isset.content_form && !(content_form == rhs.content_form))
      return false;
    if (__isset.value != rhs.__isset.value)
      return false;
    else if (__isset.value && !(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const Offset &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Offset & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Offset &a, Offset &b);

typedef struct _Target__isset {
  _Target__isset() : target_id(false), kb_id(false), kb_snapshot_time(false) {}
  bool target_id;
  bool kb_id;
  bool kb_snapshot_time;
} _Target__isset;

class Target {
 public:

  static const char* ascii_fingerprint; // = "8F380763C4E93CCC138A5250BA588978";
  static const uint8_t binary_fingerprint[16]; // = {0x8F,0x38,0x07,0x63,0xC4,0xE9,0x3C,0xCC,0x13,0x8A,0x52,0x50,0xBA,0x58,0x89,0x78};

  Target() : target_id(), kb_id() {
  }

  virtual ~Target() throw() {}

  std::string target_id;
  std::string kb_id;
  StreamTime kb_snapshot_time;

  _Target__isset __isset;

  void __set_target_id(const std::string& val) {
    target_id = val;
  }

  void __set_kb_id(const std::string& val) {
    kb_id = val;
    __isset.kb_id = true;
  }

  void __set_kb_snapshot_time(const StreamTime& val) {
    kb_snapshot_time = val;
    __isset.kb_snapshot_time = true;
  }

  bool operator == (const Target & rhs) const
  {
    if (!(target_id == rhs.target_id))
      return false;
    if (__isset.kb_id != rhs.__isset.kb_id)
      return false;
    else if (__isset.kb_id && !(kb_id == rhs.kb_id))
      return false;
    if (__isset.kb_snapshot_time != rhs.__isset.kb_snapshot_time)
      return false;
    else if (__isset.kb_snapshot_time && !(kb_snapshot_time == rhs.kb_snapshot_time))
      return false;
    return true;
  }
  bool operator != (const Target &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Target & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Target &a, Target &b);

typedef struct _Label__isset {
  _Label__isset() : annotator(false), target(false), offsets(true), positive(true) {}
  bool annotator;
  bool target;
  bool offsets;
  bool positive;
} _Label__isset;

class Label {
 public:

  static const char* ascii_fingerprint; // = "38E221E7C84EBA053C116F99AB780CD4";
  static const uint8_t binary_fingerprint[16]; // = {0x38,0xE2,0x21,0xE7,0xC8,0x4E,0xBA,0x05,0x3C,0x11,0x6F,0x99,0xAB,0x78,0x0C,0xD4};

  Label() : positive(true) {

  }

  virtual ~Label() throw() {}

  Annotator annotator;
  Target target;
  std::map<OffsetType::type, Offset>  offsets;
  bool positive;

  _Label__isset __isset;

  void __set_annotator(const Annotator& val) {
    annotator = val;
  }

  void __set_target(const Target& val) {
    target = val;
  }

  void __set_offsets(const std::map<OffsetType::type, Offset> & val) {
    offsets = val;
    __isset.offsets = true;
  }

  void __set_positive(const bool val) {
    positive = val;
    __isset.positive = true;
  }

  bool operator == (const Label & rhs) const
  {
    if (!(annotator == rhs.annotator))
      return false;
    if (!(target == rhs.target))
      return false;
    if (__isset.offsets != rhs.__isset.offsets)
      return false;
    else if (__isset.offsets && !(offsets == rhs.offsets))
      return false;
    if (__isset.positive != rhs.__isset.positive)
      return false;
    else if (__isset.positive && !(positive == rhs.positive))
      return false;
    return true;
  }
  bool operator != (const Label &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Label & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Label &a, Label &b);

typedef struct _Attribute__isset {
  _Attribute__isset() : attribute_type(false), evidence(false), value(false), sentence_id(false), mention_id(false) {}
  bool attribute_type;
  bool evidence;
  bool value;
  bool sentence_id;
  bool mention_id;
} _Attribute__isset;

class Attribute {
 public:

  static const char* ascii_fingerprint; // = "CD102D355AA4CEE7E2FEA15A78CFC35C";
  static const uint8_t binary_fingerprint[16]; // = {0xCD,0x10,0x2D,0x35,0x5A,0xA4,0xCE,0xE7,0xE2,0xFE,0xA1,0x5A,0x78,0xCF,0xC3,0x5C};

  Attribute() : attribute_type((AttributeType::type)0), evidence(), value(), sentence_id(0), mention_id(0) {
  }

  virtual ~Attribute() throw() {}

  AttributeType::type attribute_type;
  std::string evidence;
  std::string value;
  int32_t sentence_id;
  MentionID mention_id;

  _Attribute__isset __isset;

  void __set_attribute_type(const AttributeType::type val) {
    attribute_type = val;
    __isset.attribute_type = true;
  }

  void __set_evidence(const std::string& val) {
    evidence = val;
    __isset.evidence = true;
  }

  void __set_value(const std::string& val) {
    value = val;
    __isset.value = true;
  }

  void __set_sentence_id(const int32_t val) {
    sentence_id = val;
    __isset.sentence_id = true;
  }

  void __set_mention_id(const MentionID val) {
    mention_id = val;
    __isset.mention_id = true;
  }

  bool operator == (const Attribute & rhs) const
  {
    if (__isset.attribute_type != rhs.__isset.attribute_type)
      return false;
    else if (__isset.attribute_type && !(attribute_type == rhs.attribute_type))
      return false;
    if (__isset.evidence != rhs.__isset.evidence)
      return false;
    else if (__isset.evidence && !(evidence == rhs.evidence))
      return false;
    if (__isset.value != rhs.__isset.value)
      return false;
    else if (__isset.value && !(value == rhs.value))
      return false;
    if (__isset.sentence_id != rhs.__isset.sentence_id)
      return false;
    else if (__isset.sentence_id && !(sentence_id == rhs.sentence_id))
      return false;
    if (__isset.mention_id != rhs.__isset.mention_id)
      return false;
    else if (__isset.mention_id && !(mention_id == rhs.mention_id))
      return false;
    return true;
  }
  bool operator != (const Attribute &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Attribute & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Attribute &a, Attribute &b);

typedef struct _Token__isset {
  _Token__isset() : token_num(false), token(false), offsets(true), sentence_pos(true), lemma(false), pos(false), entity_type(false), mention_id(true), equiv_id(true), parent_id(true), dependency_path(false), labels(true), mention_type(false) {}
  bool token_num;
  bool token;
  bool offsets;
  bool sentence_pos;
  bool lemma;
  bool pos;
  bool entity_type;
  bool mention_id;
  bool equiv_id;
  bool parent_id;
  bool dependency_path;
  bool labels;
  bool mention_type;
} _Token__isset;

class Token {
 public:

  static const char* ascii_fingerprint; // = "E162B5D44385C82A09F40ED4849A62F3";
  static const uint8_t binary_fingerprint[16]; // = {0xE1,0x62,0xB5,0xD4,0x43,0x85,0xC8,0x2A,0x09,0xF4,0x0E,0xD4,0x84,0x9A,0x62,0xF3};

  Token() : token_num(0), token(), sentence_pos(-1), lemma(), pos(), entity_type((EntityType::type)0), mention_id(-1), equiv_id(-1), parent_id(-1), dependency_path(), mention_type((MentionType::type)0) {


  }

  virtual ~Token() throw() {}

  int32_t token_num;
  std::string token;
  std::map<OffsetType::type, Offset>  offsets;
  int32_t sentence_pos;
  std::string lemma;
  std::string pos;
  EntityType::type entity_type;
  MentionID mention_id;
  int32_t equiv_id;
  int32_t parent_id;
  std::string dependency_path;
  std::map<AnnotatorID, std::vector<Label> >  labels;
  MentionType::type mention_type;

  _Token__isset __isset;

  void __set_token_num(const int32_t val) {
    token_num = val;
  }

  void __set_token(const std::string& val) {
    token = val;
  }

  void __set_offsets(const std::map<OffsetType::type, Offset> & val) {
    offsets = val;
    __isset.offsets = true;
  }

  void __set_sentence_pos(const int32_t val) {
    sentence_pos = val;
    __isset.sentence_pos = true;
  }

  void __set_lemma(const std::string& val) {
    lemma = val;
    __isset.lemma = true;
  }

  void __set_pos(const std::string& val) {
    pos = val;
    __isset.pos = true;
  }

  void __set_entity_type(const EntityType::type val) {
    entity_type = val;
    __isset.entity_type = true;
  }

  void __set_mention_id(const MentionID val) {
    mention_id = val;
    __isset.mention_id = true;
  }

  void __set_equiv_id(const int32_t val) {
    equiv_id = val;
    __isset.equiv_id = true;
  }

  void __set_parent_id(const int32_t val) {
    parent_id = val;
    __isset.parent_id = true;
  }

  void __set_dependency_path(const std::string& val) {
    dependency_path = val;
    __isset.dependency_path = true;
  }

  void __set_labels(const std::map<AnnotatorID, std::vector<Label> > & val) {
    labels = val;
    __isset.labels = true;
  }

  void __set_mention_type(const MentionType::type val) {
    mention_type = val;
    __isset.mention_type = true;
  }

  bool operator == (const Token & rhs) const
  {
    if (!(token_num == rhs.token_num))
      return false;
    if (!(token == rhs.token))
      return false;
    if (__isset.offsets != rhs.__isset.offsets)
      return false;
    else if (__isset.offsets && !(offsets == rhs.offsets))
      return false;
    if (__isset.sentence_pos != rhs.__isset.sentence_pos)
      return false;
    else if (__isset.sentence_pos && !(sentence_pos == rhs.sentence_pos))
      return false;
    if (__isset.lemma != rhs.__isset.lemma)
      return false;
    else if (__isset.lemma && !(lemma == rhs.lemma))
      return false;
    if (__isset.pos != rhs.__isset.pos)
      return false;
    else if (__isset.pos && !(pos == rhs.pos))
      return false;
    if (__isset.entity_type != rhs.__isset.entity_type)
      return false;
    else if (__isset.entity_type && !(entity_type == rhs.entity_type))
      return false;
    if (__isset.mention_id != rhs.__isset.mention_id)
      return false;
    else if (__isset.mention_id && !(mention_id == rhs.mention_id))
      return false;
    if (__isset.equiv_id != rhs.__isset.equiv_id)
      return false;
    else if (__isset.equiv_id && !(equiv_id == rhs.equiv_id))
      return false;
    if (__isset.parent_id != rhs.__isset.parent_id)
      return false;
    else if (__isset.parent_id && !(parent_id == rhs.parent_id))
      return false;
    if (__isset.dependency_path != rhs.__isset.dependency_path)
      return false;
    else if (__isset.dependency_path && !(dependency_path == rhs.dependency_path))
      return false;
    if (__isset.labels != rhs.__isset.labels)
      return false;
    else if (__isset.labels && !(labels == rhs.labels))
      return false;
    if (__isset.mention_type != rhs.__isset.mention_type)
      return false;
    else if (__isset.mention_type && !(mention_type == rhs.mention_type))
      return false;
    return true;
  }
  bool operator != (const Token &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Token & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Token &a, Token &b);

typedef struct _Sentence__isset {
  _Sentence__isset() : tokens(true), labels(true) {}
  bool tokens;
  bool labels;
} _Sentence__isset;

class Sentence {
 public:

  static const char* ascii_fingerprint; // = "0BD494595242BE983E094A40DF42C413";
  static const uint8_t binary_fingerprint[16]; // = {0x0B,0xD4,0x94,0x59,0x52,0x42,0xBE,0x98,0x3E,0x09,0x4A,0x40,0xDF,0x42,0xC4,0x13};

  Sentence() {


  }

  virtual ~Sentence() throw() {}

  std::vector<Token>  tokens;
  std::map<AnnotatorID, std::vector<Label> >  labels;

  _Sentence__isset __isset;

  void __set_tokens(const std::vector<Token> & val) {
    tokens = val;
  }

  void __set_labels(const std::map<AnnotatorID, std::vector<Label> > & val) {
    labels = val;
    __isset.labels = true;
  }

  bool operator == (const Sentence & rhs) const
  {
    if (!(tokens == rhs.tokens))
      return false;
    if (__isset.labels != rhs.__isset.labels)
      return false;
    else if (__isset.labels && !(labels == rhs.labels))
      return false;
    return true;
  }
  bool operator != (const Sentence &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Sentence & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Sentence &a, Sentence &b);

typedef struct _Tagging__isset {
  _Tagging__isset() : tagger_id(false), raw_tagging(false), tagger_config(false), tagger_version(false), generation_time(false) {}
  bool tagger_id;
  bool raw_tagging;
  bool tagger_config;
  bool tagger_version;
  bool generation_time;
} _Tagging__isset;

class Tagging {
 public:

  static const char* ascii_fingerprint; // = "0A0DFB97882FDAD8FD6CF82C36CDF3B0";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0x0D,0xFB,0x97,0x88,0x2F,0xDA,0xD8,0xFD,0x6C,0xF8,0x2C,0x36,0xCD,0xF3,0xB0};

  Tagging() : tagger_id(), raw_tagging(), tagger_config(), tagger_version() {
  }

  virtual ~Tagging() throw() {}

  TaggerID tagger_id;
  std::string raw_tagging;
  std::string tagger_config;
  std::string tagger_version;
  StreamTime generation_time;

  _Tagging__isset __isset;

  void __set_tagger_id(const TaggerID& val) {
    tagger_id = val;
  }

  void __set_raw_tagging(const std::string& val) {
    raw_tagging = val;
  }

  void __set_tagger_config(const std::string& val) {
    tagger_config = val;
    __isset.tagger_config = true;
  }

  void __set_tagger_version(const std::string& val) {
    tagger_version = val;
    __isset.tagger_version = true;
  }

  void __set_generation_time(const StreamTime& val) {
    generation_time = val;
    __isset.generation_time = true;
  }

  bool operator == (const Tagging & rhs) const
  {
    if (!(tagger_id == rhs.tagger_id))
      return false;
    if (!(raw_tagging == rhs.raw_tagging))
      return false;
    if (__isset.tagger_config != rhs.__isset.tagger_config)
      return false;
    else if (__isset.tagger_config && !(tagger_config == rhs.tagger_config))
      return false;
    if (__isset.tagger_version != rhs.__isset.tagger_version)
      return false;
    else if (__isset.tagger_version && !(tagger_version == rhs.tagger_version))
      return false;
    if (__isset.generation_time != rhs.__isset.generation_time)
      return false;
    else if (__isset.generation_time && !(generation_time == rhs.generation_time))
      return false;
    return true;
  }
  bool operator != (const Tagging &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Tagging & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Tagging &a, Tagging &b);

typedef struct _Relation__isset {
  _Relation__isset() : relation_type(false), sentence_id_1(false), mention_id_1(false), sentence_id_2(false), mention_id_2(false) {}
  bool relation_type;
  bool sentence_id_1;
  bool mention_id_1;
  bool sentence_id_2;
  bool mention_id_2;
} _Relation__isset;

class Relation {
 public:

  static const char* ascii_fingerprint; // = "50CD5AB579623D1F31762CDE35F209CF";
  static const uint8_t binary_fingerprint[16]; // = {0x50,0xCD,0x5A,0xB5,0x79,0x62,0x3D,0x1F,0x31,0x76,0x2C,0xDE,0x35,0xF2,0x09,0xCF};

  Relation() : relation_type((RelationType::type)0), sentence_id_1(0), mention_id_1(0), sentence_id_2(0), mention_id_2(0) {
  }

  virtual ~Relation() throw() {}

  RelationType::type relation_type;
  int32_t sentence_id_1;
  MentionID mention_id_1;
  int32_t sentence_id_2;
  MentionID mention_id_2;

  _Relation__isset __isset;

  void __set_relation_type(const RelationType::type val) {
    relation_type = val;
    __isset.relation_type = true;
  }

  void __set_sentence_id_1(const int32_t val) {
    sentence_id_1 = val;
    __isset.sentence_id_1 = true;
  }

  void __set_mention_id_1(const MentionID val) {
    mention_id_1 = val;
    __isset.mention_id_1 = true;
  }

  void __set_sentence_id_2(const int32_t val) {
    sentence_id_2 = val;
    __isset.sentence_id_2 = true;
  }

  void __set_mention_id_2(const MentionID val) {
    mention_id_2 = val;
    __isset.mention_id_2 = true;
  }

  bool operator == (const Relation & rhs) const
  {
    if (__isset.relation_type != rhs.__isset.relation_type)
      return false;
    else if (__isset.relation_type && !(relation_type == rhs.relation_type))
      return false;
    if (__isset.sentence_id_1 != rhs.__isset.sentence_id_1)
      return false;
    else if (__isset.sentence_id_1 && !(sentence_id_1 == rhs.sentence_id_1))
      return false;
    if (__isset.mention_id_1 != rhs.__isset.mention_id_1)
      return false;
    else if (__isset.mention_id_1 && !(mention_id_1 == rhs.mention_id_1))
      return false;
    if (__isset.sentence_id_2 != rhs.__isset.sentence_id_2)
      return false;
    else if (__isset.sentence_id_2 && !(sentence_id_2 == rhs.sentence_id_2))
      return false;
    if (__isset.mention_id_2 != rhs.__isset.mention_id_2)
      return false;
    else if (__isset.mention_id_2 && !(mention_id_2 == rhs.mention_id_2))
      return false;
    return true;
  }
  bool operator != (const Relation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Relation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Relation &a, Relation &b);

typedef struct _Language__isset {
  _Language__isset() : code(false), name(false) {}
  bool code;
  bool name;
} _Language__isset;

class Language {
 public:

  static const char* ascii_fingerprint; // = "5B708A954C550ECA9C1A49D3C5CAFAB9";
  static const uint8_t binary_fingerprint[16]; // = {0x5B,0x70,0x8A,0x95,0x4C,0x55,0x0E,0xCA,0x9C,0x1A,0x49,0xD3,0xC5,0xCA,0xFA,0xB9};

  Language() : code(), name() {
  }

  virtual ~Language() throw() {}

  std::string code;
  std::string name;

  _Language__isset __isset;

  void __set_code(const std::string& val) {
    code = val;
  }

  void __set_name(const std::string& val) {
    name = val;
    __isset.name = true;
  }

  bool operator == (const Language & rhs) const
  {
    if (!(code == rhs.code))
      return false;
    if (__isset.name != rhs.__isset.name)
      return false;
    else if (__isset.name && !(name == rhs.name))
      return false;
    return true;
  }
  bool operator != (const Language &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Language & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Language &a, Language &b);

typedef struct _ContentItem__isset {
  _ContentItem__isset() : raw(false), encoding(false), media_type(false), clean_html(false), clean_visible(false), logs(true), taggings(true), labels(true), sentences(true), sentence_blobs(true), language(false), relations(true), attributes(true), external_ids(true) {}
  bool raw;
  bool encoding;
  bool media_type;
  bool clean_html;
  bool clean_visible;
  bool logs;
  bool taggings;
  bool labels;
  bool sentences;
  bool sentence_blobs;
  bool language;
  bool relations;
  bool attributes;
  bool external_ids;
} _ContentItem__isset;

class ContentItem {
 public:

  static const char* ascii_fingerprint; // = "124FFE6662D2E2FCFEEB3A63A2058727";
  static const uint8_t binary_fingerprint[16]; // = {0x12,0x4F,0xFE,0x66,0x62,0xD2,0xE2,0xFC,0xFE,0xEB,0x3A,0x63,0xA2,0x05,0x87,0x27};

  ContentItem() : raw(), encoding(), media_type(), clean_html(), clean_visible() {








  }

  virtual ~ContentItem() throw() {}

  std::string raw;
  std::string encoding;
  std::string media_type;
  std::string clean_html;
  std::string clean_visible;
  std::vector<std::string>  logs;
  std::map<TaggerID, Tagging>  taggings;
  std::map<AnnotatorID, std::vector<Label> >  labels;
  std::map<TaggerID, std::vector<Sentence> >  sentences;
  std::map<TaggerID, std::string>  sentence_blobs;
  Language language;
  std::map<TaggerID, std::vector<Relation> >  relations;
  std::map<TaggerID, std::vector<Attribute> >  attributes;
  std::map<TaggerID, std::map<MentionID, std::string> >  external_ids;

  _ContentItem__isset __isset;

  void __set_raw(const std::string& val) {
    raw = val;
    __isset.raw = true;
  }

  void __set_encoding(const std::string& val) {
    encoding = val;
    __isset.encoding = true;
  }

  void __set_media_type(const std::string& val) {
    media_type = val;
    __isset.media_type = true;
  }

  void __set_clean_html(const std::string& val) {
    clean_html = val;
    __isset.clean_html = true;
  }

  void __set_clean_visible(const std::string& val) {
    clean_visible = val;
    __isset.clean_visible = true;
  }

  void __set_logs(const std::vector<std::string> & val) {
    logs = val;
    __isset.logs = true;
  }

  void __set_taggings(const std::map<TaggerID, Tagging> & val) {
    taggings = val;
    __isset.taggings = true;
  }

  void __set_labels(const std::map<AnnotatorID, std::vector<Label> > & val) {
    labels = val;
    __isset.labels = true;
  }

  void __set_sentences(const std::map<TaggerID, std::vector<Sentence> > & val) {
    sentences = val;
    __isset.sentences = true;
  }

  void __set_sentence_blobs(const std::map<TaggerID, std::string> & val) {
    sentence_blobs = val;
    __isset.sentence_blobs = true;
  }

  void __set_language(const Language& val) {
    language = val;
    __isset.language = true;
  }

  void __set_relations(const std::map<TaggerID, std::vector<Relation> > & val) {
    relations = val;
    __isset.relations = true;
  }

  void __set_attributes(const std::map<TaggerID, std::vector<Attribute> > & val) {
    attributes = val;
    __isset.attributes = true;
  }

  void __set_external_ids(const std::map<TaggerID, std::map<MentionID, std::string> > & val) {
    external_ids = val;
    __isset.external_ids = true;
  }

  bool operator == (const ContentItem & rhs) const
  {
    if (__isset.raw != rhs.__isset.raw)
      return false;
    else if (__isset.raw && !(raw == rhs.raw))
      return false;
    if (__isset.encoding != rhs.__isset.encoding)
      return false;
    else if (__isset.encoding && !(encoding == rhs.encoding))
      return false;
    if (__isset.media_type != rhs.__isset.media_type)
      return false;
    else if (__isset.media_type && !(media_type == rhs.media_type))
      return false;
    if (__isset.clean_html != rhs.__isset.clean_html)
      return false;
    else if (__isset.clean_html && !(clean_html == rhs.clean_html))
      return false;
    if (__isset.clean_visible != rhs.__isset.clean_visible)
      return false;
    else if (__isset.clean_visible && !(clean_visible == rhs.clean_visible))
      return false;
    if (__isset.logs != rhs.__isset.logs)
      return false;
    else if (__isset.logs && !(logs == rhs.logs))
      return false;
    if (__isset.taggings != rhs.__isset.taggings)
      return false;
    else if (__isset.taggings && !(taggings == rhs.taggings))
      return false;
    if (__isset.labels != rhs.__isset.labels)
      return false;
    else if (__isset.labels && !(labels == rhs.labels))
      return false;
    if (__isset.sentences != rhs.__isset.sentences)
      return false;
    else if (__isset.sentences && !(sentences == rhs.sentences))
      return false;
    if (__isset.sentence_blobs != rhs.__isset.sentence_blobs)
      return false;
    else if (__isset.sentence_blobs && !(sentence_blobs == rhs.sentence_blobs))
      return false;
    if (__isset.language != rhs.__isset.language)
      return false;
    else if (__isset.language && !(language == rhs.language))
      return false;
    if (__isset.relations != rhs.__isset.relations)
      return false;
    else if (__isset.relations && !(relations == rhs.relations))
      return false;
    if (__isset.attributes != rhs.__isset.attributes)
      return false;
    else if (__isset.attributes && !(attributes == rhs.attributes))
      return false;
    if (__isset.external_ids != rhs.__isset.external_ids)
      return false;
    else if (__isset.external_ids && !(external_ids == rhs.external_ids))
      return false;
    return true;
  }
  bool operator != (const ContentItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ContentItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ContentItem &a, ContentItem &b);

typedef struct _Rating__isset {
  _Rating__isset() : annotator(false), target(false), relevance(false), contains_mention(false), comments(false), mentions(false) {}
  bool annotator;
  bool target;
  bool relevance;
  bool contains_mention;
  bool comments;
  bool mentions;
} _Rating__isset;

class Rating {
 public:

  static const char* ascii_fingerprint; // = "DCBA8CB33AD8DD99F9FD43759B321154";
  static const uint8_t binary_fingerprint[16]; // = {0xDC,0xBA,0x8C,0xB3,0x3A,0xD8,0xDD,0x99,0xF9,0xFD,0x43,0x75,0x9B,0x32,0x11,0x54};

  Rating() : relevance(0), contains_mention(0), comments() {
  }

  virtual ~Rating() throw() {}

  Annotator annotator;
  Target target;
  int16_t relevance;
  bool contains_mention;
  std::string comments;
  std::vector<std::string>  mentions;

  _Rating__isset __isset;

  void __set_annotator(const Annotator& val) {
    annotator = val;
  }

  void __set_target(const Target& val) {
    target = val;
  }

  void __set_relevance(const int16_t val) {
    relevance = val;
    __isset.relevance = true;
  }

  void __set_contains_mention(const bool val) {
    contains_mention = val;
    __isset.contains_mention = true;
  }

  void __set_comments(const std::string& val) {
    comments = val;
    __isset.comments = true;
  }

  void __set_mentions(const std::vector<std::string> & val) {
    mentions = val;
    __isset.mentions = true;
  }

  bool operator == (const Rating & rhs) const
  {
    if (!(annotator == rhs.annotator))
      return false;
    if (!(target == rhs.target))
      return false;
    if (__isset.relevance != rhs.__isset.relevance)
      return false;
    else if (__isset.relevance && !(relevance == rhs.relevance))
      return false;
    if (__isset.contains_mention != rhs.__isset.contains_mention)
      return false;
    else if (__isset.contains_mention && !(contains_mention == rhs.contains_mention))
      return false;
    if (__isset.comments != rhs.__isset.comments)
      return false;
    else if (__isset.comments && !(comments == rhs.comments))
      return false;
    if (__isset.mentions != rhs.__isset.mentions)
      return false;
    else if (__isset.mentions && !(mentions == rhs.mentions))
      return false;
    return true;
  }
  bool operator != (const Rating &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Rating & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Rating &a, Rating &b);

typedef struct _StreamItem__isset {
  _StreamItem__isset() : version(true), doc_id(false), abs_url(false), schost(false), original_url(false), source(false), body(false), source_metadata(true), stream_id(false), stream_time(false), other_content(true), ratings(true), external_ids(true) {}
  bool version;
  bool doc_id;
  bool abs_url;
  bool schost;
  bool original_url;
  bool source;
  bool body;
  bool source_metadata;
  bool stream_id;
  bool stream_time;
  bool other_content;
  bool ratings;
  bool external_ids;
} _StreamItem__isset;

class StreamItem {
 public:

  static const char* ascii_fingerprint; // = "F858834988A57CDA6EB18D2A772CC260";
  static const uint8_t binary_fingerprint[16]; // = {0xF8,0x58,0x83,0x49,0x88,0xA5,0x7C,0xDA,0x6E,0xB1,0x8D,0x2A,0x77,0x2C,0xC2,0x60};

  StreamItem() : version((Versions::type)1), doc_id(), abs_url(), schost(), original_url(), source(), stream_id() {
    version = (Versions::type)1;





  }

  virtual ~StreamItem() throw() {}

  Versions::type version;
  std::string doc_id;
  std::string abs_url;
  std::string schost;
  std::string original_url;
  std::string source;
  ContentItem body;
  std::map<std::string, SourceMetadata>  source_metadata;
  std::string stream_id;
  StreamTime stream_time;
  std::map<std::string, ContentItem>  other_content;
  std::map<AnnotatorID, std::vector<Rating> >  ratings;
  std::map<SystemID, std::map<DocIDorStreamID, std::string> >  external_ids;

  _StreamItem__isset __isset;

  void __set_version(const Versions::type val) {
    version = val;
  }

  void __set_doc_id(const std::string& val) {
    doc_id = val;
  }

  void __set_abs_url(const std::string& val) {
    abs_url = val;
    __isset.abs_url = true;
  }

  void __set_schost(const std::string& val) {
    schost = val;
    __isset.schost = true;
  }

  void __set_original_url(const std::string& val) {
    original_url = val;
    __isset.original_url = true;
  }

  void __set_source(const std::string& val) {
    source = val;
    __isset.source = true;
  }

  void __set_body(const ContentItem& val) {
    body = val;
    __isset.body = true;
  }

  void __set_source_metadata(const std::map<std::string, SourceMetadata> & val) {
    source_metadata = val;
    __isset.source_metadata = true;
  }

  void __set_stream_id(const std::string& val) {
    stream_id = val;
  }

  void __set_stream_time(const StreamTime& val) {
    stream_time = val;
  }

  void __set_other_content(const std::map<std::string, ContentItem> & val) {
    other_content = val;
    __isset.other_content = true;
  }

  void __set_ratings(const std::map<AnnotatorID, std::vector<Rating> > & val) {
    ratings = val;
    __isset.ratings = true;
  }

  void __set_external_ids(const std::map<SystemID, std::map<DocIDorStreamID, std::string> > & val) {
    external_ids = val;
    __isset.external_ids = true;
  }

  bool operator == (const StreamItem & rhs) const
  {
    if (!(version == rhs.version))
      return false;
    if (!(doc_id == rhs.doc_id))
      return false;
    if (__isset.abs_url != rhs.__isset.abs_url)
      return false;
    else if (__isset.abs_url && !(abs_url == rhs.abs_url))
      return false;
    if (__isset.schost != rhs.__isset.schost)
      return false;
    else if (__isset.schost && !(schost == rhs.schost))
      return false;
    if (__isset.original_url != rhs.__isset.original_url)
      return false;
    else if (__isset.original_url && !(original_url == rhs.original_url))
      return false;
    if (__isset.source != rhs.__isset.source)
      return false;
    else if (__isset.source && !(source == rhs.source))
      return false;
    if (__isset.body != rhs.__isset.body)
      return false;
    else if (__isset.body && !(body == rhs.body))
      return false;
    if (__isset.source_metadata != rhs.__isset.source_metadata)
      return false;
    else if (__isset.source_metadata && !(source_metadata == rhs.source_metadata))
      return false;
    if (!(stream_id == rhs.stream_id))
      return false;
    if (!(stream_time == rhs.stream_time))
      return false;
    if (__isset.other_content != rhs.__isset.other_content)
      return false;
    else if (__isset.other_content && !(other_content == rhs.other_content))
      return false;
    if (__isset.ratings != rhs.__isset.ratings)
      return false;
    else if (__isset.ratings && !(ratings == rhs.ratings))
      return false;
    if (__isset.external_ids != rhs.__isset.external_ids)
      return false;
    else if (__isset.external_ids && !(external_ids == rhs.external_ids))
      return false;
    return true;
  }
  bool operator != (const StreamItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StreamItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StreamItem &a, StreamItem &b);

} // namespace

#endif
