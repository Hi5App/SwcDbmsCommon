// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Service/Service.proto

#include "Service/Service.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace proto {
}  // namespace proto
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Service_2fService_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Service_2fService_2eproto = nullptr;
const uint32_t TableStruct_Service_2fService_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_Service_2fService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025Service/Service.proto\022\005proto\032\037google/p"
  "rotobuf/timestamp.proto\032\025Message/Message"
  ".proto\032\025Message/Request.proto\032\026Message/R"
  "esponse.proto2\304\'\n\004DBMS\022C\n\nCreateUser\022\030.p"
  "roto.CreateUserRequest\032\031.proto.CreateUse"
  "rResponse\"\000\022C\n\nDeleteUser\022\030.proto.Delete"
  "UserRequest\032\031.proto.DeleteUserResponse\"\000"
  "\022C\n\nUpdateUser\022\030.proto.UpdateUserRequest"
  "\032\031.proto.UpdateUserResponse\"\000\022L\n\rGetUser"
  "ByUuid\022\033.proto.GetUserByUuidRequest\032\034.pr"
  "oto.GetUserByUuidResponse\"\000\022L\n\rGetUserBy"
  "Name\022\033.proto.GetUserByNameRequest\032\034.prot"
  "o.GetUserByNameResponse\"\000\022C\n\nGetAllUser\022"
  "\030.proto.GetAllUserRequest\032\031.proto.GetAll"
  "UserResponse\"\000\022@\n\tUserLogin\022\027.proto.User"
  "LoginRequest\032\030.proto.UserLoginResponse\"\000"
  "\022C\n\nUserLogout\022\030.proto.UserLogoutRequest"
  "\032\031.proto.UserLogoutResponse\"\000\022p\n UserOnl"
  "ineHeartBeatNotifications\022&.proto.UserOn"
  "lineHeartBeatNotification\032\".proto.UserOn"
  "lineHeartBeatResponse\"\000\022g\n\026GetUserPermis"
  "sionGroup\022$.proto.GetUserPermissionGroup"
  "Request\032%.proto.GetUserPermissionGroupRe"
  "sponse\"\000\022[\n\022GetPermissionGroup\022 .proto.G"
  "etPermissionGroupRequest\032!.proto.GetPerm"
  "issionGroupResponse\"\000\022d\n\025GetAllPermissio"
  "nGroup\022#.proto.GetAllPermissionGroupRequ"
  "est\032$.proto.GetAllPermissionGroupRespons"
  "e\"\000\022p\n\031ChangeUserPermissionGroup\022\'.proto"
  ".ChangeUserPermissionGroupRequest\032(.prot"
  "o.ChangeUserPermissionGroupResponse\"\000\022L\n"
  "\rCreateProject\022\033.proto.CreateProjectRequ"
  "est\032\034.proto.CreateProjectResponse\"\000\022L\n\rD"
  "eleteProject\022\033.proto.DeleteProjectReques"
  "t\032\034.proto.DeleteProjectResponse\"\000\022L\n\rUpd"
  "ateProject\022\033.proto.UpdateProjectRequest\032"
  "\034.proto.UpdateProjectResponse\"\000\022C\n\nGetPr"
  "oject\022\030.proto.GetProjectRequest\032\031.proto."
  "GetProjectResponse\"\000\022L\n\rGetAllProject\022\033."
  "proto.GetAllProjectRequest\032\034.proto.GetAl"
  "lProjectResponse\"\000\022@\n\tCreateSwc\022\027.proto."
  "CreateSwcRequest\032\030.proto.CreateSwcRespon"
  "se\"\000\022@\n\tDeleteSwc\022\027.proto.DeleteSwcReque"
  "st\032\030.proto.DeleteSwcResponse\"\000\022@\n\tUpdate"
  "Swc\022\027.proto.UpdateSwcRequest\032\030.proto.Upd"
  "ateSwcResponse\"\000\022O\n\016GetSwcMetaInfo\022\034.pro"
  "to.GetSwcMetaInfoRequest\032\035.proto.GetSwcM"
  "etaInfoResponse\"\000\022X\n\021GetAllSwcMetaInfo\022\037"
  ".proto.GetAllSwcMetaInfoRequest\032 .proto."
  "GetAllSwcMetaInfoResponse\"\000\022X\n\021CreateSwc"
  "Snapshot\022\037.proto.CreateSwcSnapshotReques"
  "t\032 .proto.CreateSwcSnapshotResponse\"\000\022g\n"
  "\026GetAllSnapshotMetaInfo\022$.proto.GetAllSn"
  "apshotMetaInfoRequest\032%.proto.GetAllSnap"
  "shotMetaInfoResponse\"\000\022F\n\013GetSnapshot\022\031."
  "proto.GetSnapshotRequest\032\032.proto.GetSnap"
  "shotResponse\"\000\022\205\001\n GetAllIncrementOperat"
  "ionMetaInfo\022..proto.GetAllIncrementOpera"
  "tionMetaInfoRequest\032/.proto.GetAllIncrem"
  "entOperationMetaInfoResponse\"\000\022d\n\025GetInc"
  "rementOperation\022#.proto.GetIncrementOper"
  "ationRequest\032$.proto.GetIncrementOperati"
  "onResponse\"\000\022X\n\021CreateSwcNodeData\022\037.prot"
  "o.CreateSwcNodeDataRequest\032 .proto.Creat"
  "eSwcNodeDataResponse\"\000\022X\n\021DeleteSwcNodeD"
  "ata\022\037.proto.DeleteSwcNodeDataRequest\032 .p"
  "roto.DeleteSwcNodeDataResponse\"\000\022X\n\021Upda"
  "teSwcNodeData\022\037.proto.UpdateSwcNodeDataR"
  "equest\032 .proto.UpdateSwcNodeDataResponse"
  "\"\000\022O\n\016GetSwcNodeData\022\034.proto.GetSwcNodeD"
  "ataRequest\032\035.proto.GetSwcNodeDataRespons"
  "e\"\000\022[\n\022GetSwcFullNodeData\022 .proto.GetSwc"
  "FullNodeDataRequest\032!.proto.GetSwcFullNo"
  "deDataResponse\"\000\022\202\001\n\037GetSwcNodeDataListB"
  "yTimeAndUser\022-.proto.GetSwcNodeDataListB"
  "yTimeAndUserRequest\032..proto.GetSwcNodeDa"
  "taListByTimeAndUserResponse\"\000\022d\n\025CreateD"
  "ailyStatistics\022#.proto.CreateDailyStatis"
  "ticsRequest\032$.proto.CreateDailyStatistic"
  "sResponse\"\000\022d\n\025DeleteDailyStatistics\022#.p"
  "roto.DeleteDailyStatisticsRequest\032$.prot"
  "o.DeleteDailyStatisticsResponse\"\000\022d\n\025Upd"
  "ateDailyStatistics\022#.proto.UpdateDailySt"
  "atisticsRequest\032$.proto.UpdateDailyStati"
  "sticsResponse\"\000\022[\n\022GetDailyStatistics\022 ."
  "proto.GetDailyStatisticsRequest\032!.proto."
  "GetDailyStatisticsResponse\"\000\022d\n\025GetAllDa"
  "ilyStatistics\022#.proto.GetAllDailyStatist"
  "icsRequest\032$.proto.GetAllDailyStatistics"
  "Response\"\000\022g\n\026CreateSwcAttachmentAno\022$.p"
  "roto.CreateSwcAttachmentAnoRequest\032%.pro"
  "to.CreateSwcAttachmentAnoResponse\"\000\022g\n\026D"
  "eleteSwcAttachmentAno\022$.proto.DeleteSwcA"
  "ttachmentAnoRequest\032%.proto.DeleteSwcAtt"
  "achmentAnoResponse\"\000\022g\n\026UpdateSwcAttachm"
  "entAno\022$.proto.UpdateSwcAttachmentAnoReq"
  "uest\032%.proto.UpdateSwcAttachmentAnoRespo"
  "nse\"\000\022^\n\023GetSwcAttachmentAno\022!.proto.Get"
  "SwcAttachmentAnoRequest\032\".proto.GetSwcAt"
  "tachmentAnoResponse\"\000\022g\n\026CreateSwcAttach"
  "mentApo\022$.proto.CreateSwcAttachmentApoRe"
  "quest\032%.proto.CreateSwcAttachmentApoResp"
  "onse\"\000\022g\n\026DeleteSwcAttachmentApo\022$.proto"
  ".DeleteSwcAttachmentApoRequest\032%.proto.D"
  "eleteSwcAttachmentApoResponse\"\000\022g\n\026Updat"
  "eSwcAttachmentApo\022$.proto.UpdateSwcAttac"
  "hmentApoRequest\032%.proto.UpdateSwcAttachm"
  "entApoResponse\"\000\022^\n\023GetSwcAttachmentApo\022"
  "!.proto.GetSwcAttachmentApoRequest\032\".pro"
  "to.GetSwcAttachmentApoResponse\"\000\022U\n\020Reve"
  "rtSwcVersion\022\036.proto.RevertSwcVersionReq"
  "uest\032\037.proto.RevertSwcVersionResponse\"\000\022"
  "g\n\026CreateSwcAttachmentSwc\022$.proto.Create"
  "SwcAttachmentSwcRequest\032%.proto.CreateSw"
  "cAttachmentSwcResponse\"\000\022g\n\026DeleteSwcAtt"
  "achmentSwc\022$.proto.DeleteSwcAttachmentSw"
  "cRequest\032%.proto.DeleteSwcAttachmentSwcR"
  "esponse\"\000\022g\n\026UpdateSwcAttachmentSwc\022$.pr"
  "oto.UpdateSwcAttachmentSwcRequest\032%.prot"
  "o.UpdateSwcAttachmentSwcResponse\"\000\022^\n\023Ge"
  "tSwcAttachmentSwc\022!.proto.GetSwcAttachme"
  "ntSwcRequest\032\".proto.GetSwcAttachmentSwc"
  "Response\"\000\022d\n\025CreatePermissionGroup\022#.pr"
  "oto.CreatePermissionGroupRequest\032$.proto"
  ".CreatePermissionGroupResponse\"\000\022d\n\025Dele"
  "tePermissionGroup\022#.proto.DeletePermissi"
  "onGroupRequest\032$.proto.DeletePermissionG"
  "roupResponse\"\000\022d\n\025UpdatePermissionGroup\022"
  "#.proto.UpdatePermissionGroupRequest\032$.p"
  "roto.UpdatePermissionGroupResponse\"\000B/Z-"
  "DBMS/SwcDbmsCommon/Generated/go/proto/se"
  "rviceP\000b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Service_2fService_2eproto_deps[4] = {
  &::descriptor_table_Message_2fMessage_2eproto,
  &::descriptor_table_Message_2fRequest_2eproto,
  &::descriptor_table_Message_2fResponse_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::_pbi::once_flag descriptor_table_Service_2fService_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Service_2fService_2eproto = {
    false, false, 5255, descriptor_table_protodef_Service_2fService_2eproto,
    "Service/Service.proto",
    &descriptor_table_Service_2fService_2eproto_once, descriptor_table_Service_2fService_2eproto_deps, 4, 0,
    schemas, file_default_instances, TableStruct_Service_2fService_2eproto::offsets,
    nullptr, file_level_enum_descriptors_Service_2fService_2eproto,
    file_level_service_descriptors_Service_2fService_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Service_2fService_2eproto_getter() {
  return &descriptor_table_Service_2fService_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Service_2fService_2eproto(&descriptor_table_Service_2fService_2eproto);
namespace proto {

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
