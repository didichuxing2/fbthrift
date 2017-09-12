/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/PubSubStreamingService.h"
#include "src/gen-cpp2/PubSubStreamingService.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> PubSubStreamingServiceSvIf::getProcessor() {
  return std::make_unique<PubSubStreamingServiceAsyncProcessor>(this);
}

void PubSubStreamingServiceSvIf::client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("client");
}

folly::Future<folly::Unit> PubSubStreamingServiceSvIf::future_client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) {
  return apache::thrift::detail::si::future([&] { return client(foo); });
}

void PubSubStreamingServiceSvIf::async_tm_client(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_client(foo); });
}

void PubSubStreamingServiceSvIf::server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("server");
}

folly::Future<folly::Unit> PubSubStreamingServiceSvIf::future_server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) {
  return apache::thrift::detail::si::future([&] { return server(foo); });
}

void PubSubStreamingServiceSvIf::async_tm_server(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_server(foo); });
}

void PubSubStreamingServiceSvIf::both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("both");
}

folly::Future<folly::Unit> PubSubStreamingServiceSvIf::future_both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) {
  return apache::thrift::detail::si::future([&] { return both(foo); });
}

void PubSubStreamingServiceSvIf::async_tm_both(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foo) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_both(foo); });
}

yarpl::Reference<yarpl::flowable::Flowable<int32_t>> PubSubStreamingServiceSvIf::returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("returnstream");
}

void PubSubStreamingServiceSvIf::takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*instream*/, int32_t /*other_param*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("takesstream");
}

folly::Future<folly::Unit> PubSubStreamingServiceSvIf::future_takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) {
  return apache::thrift::detail::si::future([&] { return takesstream(instream, other_param); });
}

void PubSubStreamingServiceSvIf::async_tm_takesstream(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> instream, int32_t other_param) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_takesstream(instream, other_param); });
}

void PubSubStreamingServiceSvIf::clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foostream*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("clientthrows");
}

folly::Future<folly::Unit> PubSubStreamingServiceSvIf::future_clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) {
  return apache::thrift::detail::si::future([&] { return clientthrows(foostream); });
}

void PubSubStreamingServiceSvIf::async_tm_clientthrows(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, yarpl::Reference<yarpl::flowable::Flowable<int32_t>> foostream) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_clientthrows(foostream); });
}

void PubSubStreamingServiceSvNull::client(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) {}

void PubSubStreamingServiceSvNull::server(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) {}

void PubSubStreamingServiceSvNull::both(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foo*/) {}

yarpl::Reference<yarpl::flowable::Flowable<int32_t>> PubSubStreamingServiceSvNull::returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/) {
  return 0;
}

void PubSubStreamingServiceSvNull::takesstream(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*instream*/, int32_t /*other_param*/) {}

void PubSubStreamingServiceSvNull::clientthrows(yarpl::Reference<yarpl::flowable::Flowable<int32_t>> /*foostream*/) {}

const char* PubSubStreamingServiceAsyncProcessor::getServiceName() {
  return "PubSubStreamingService";
}

folly::Optional<std::string> PubSubStreamingServiceAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void PubSubStreamingServiceAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool PubSubStreamingServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> PubSubStreamingServiceAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> PubSubStreamingServiceAsyncProcessor::cacheKeyMap_ {};
const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap& PubSubStreamingServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap PubSubStreamingServiceAsyncProcessor::binaryProcessMap_ {
  {"client", &PubSubStreamingServiceAsyncProcessor::_processInThread_client<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"server", &PubSubStreamingServiceAsyncProcessor::_processInThread_server<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"both", &PubSubStreamingServiceAsyncProcessor::_processInThread_both<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"returnstream", &PubSubStreamingServiceAsyncProcessor::_processInThread_returnstream<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"takesstream", &PubSubStreamingServiceAsyncProcessor::_processInThread_takesstream<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"clientthrows", &PubSubStreamingServiceAsyncProcessor::_processInThread_clientthrows<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap& PubSubStreamingServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap PubSubStreamingServiceAsyncProcessor::compactProcessMap_ {
  {"client", &PubSubStreamingServiceAsyncProcessor::_processInThread_client<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"server", &PubSubStreamingServiceAsyncProcessor::_processInThread_server<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"both", &PubSubStreamingServiceAsyncProcessor::_processInThread_both<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"returnstream", &PubSubStreamingServiceAsyncProcessor::_processInThread_returnstream<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"takesstream", &PubSubStreamingServiceAsyncProcessor::_processInThread_takesstream<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"clientthrows", &PubSubStreamingServiceAsyncProcessor::_processInThread_clientthrows<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift