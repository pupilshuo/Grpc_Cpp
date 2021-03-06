// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: test.proto
#ifndef GRPC_test_2eproto__INCLUDED
#define GRPC_test_2eproto__INCLUDED

#include "test.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace test {

class Hello final {
 public:
  static constexpr char const* service_full_name() {
    return "test.Hello";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status HelloLys(::grpc::ClientContext* context, const ::test::HelloReq& request, ::test::HelloRes* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::test::HelloRes>> AsyncHelloLys(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::test::HelloRes>>(AsyncHelloLysRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::test::HelloRes>> PrepareAsyncHelloLys(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::test::HelloRes>>(PrepareAsyncHelloLysRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void HelloLys(::grpc::ClientContext* context, const ::test::HelloReq* request, ::test::HelloRes* response, std::function<void(::grpc::Status)>) = 0;
      virtual void HelloLys(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::test::HelloRes* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void HelloLys(::grpc::ClientContext* context, const ::test::HelloReq* request, ::test::HelloRes* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void HelloLys(::grpc::ClientContext* context, const ::test::HelloReq* request, ::test::HelloRes* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void HelloLys(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::test::HelloRes* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void HelloLys(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::test::HelloRes* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::test::HelloRes>* AsyncHelloLysRaw(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::test::HelloRes>* PrepareAsyncHelloLysRaw(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status HelloLys(::grpc::ClientContext* context, const ::test::HelloReq& request, ::test::HelloRes* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::test::HelloRes>> AsyncHelloLys(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::test::HelloRes>>(AsyncHelloLysRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::test::HelloRes>> PrepareAsyncHelloLys(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::test::HelloRes>>(PrepareAsyncHelloLysRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void HelloLys(::grpc::ClientContext* context, const ::test::HelloReq* request, ::test::HelloRes* response, std::function<void(::grpc::Status)>) override;
      void HelloLys(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::test::HelloRes* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void HelloLys(::grpc::ClientContext* context, const ::test::HelloReq* request, ::test::HelloRes* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void HelloLys(::grpc::ClientContext* context, const ::test::HelloReq* request, ::test::HelloRes* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void HelloLys(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::test::HelloRes* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void HelloLys(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::test::HelloRes* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::test::HelloRes>* AsyncHelloLysRaw(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::test::HelloRes>* PrepareAsyncHelloLysRaw(::grpc::ClientContext* context, const ::test::HelloReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_HelloLys_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status HelloLys(::grpc::ServerContext* context, const ::test::HelloReq* request, ::test::HelloRes* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_HelloLys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_HelloLys() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_HelloLys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HelloLys(::grpc::ServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHelloLys(::grpc::ServerContext* context, ::test::HelloReq* request, ::grpc::ServerAsyncResponseWriter< ::test::HelloRes>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_HelloLys<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_HelloLys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_HelloLys() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::test::HelloReq, ::test::HelloRes>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::test::HelloReq* request, ::test::HelloRes* response) { return this->HelloLys(context, request, response); }));}
    void SetMessageAllocatorFor_HelloLys(
        ::grpc::experimental::MessageAllocator< ::test::HelloReq, ::test::HelloRes>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::test::HelloReq, ::test::HelloRes>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_HelloLys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HelloLys(::grpc::ServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* HelloLys(
      ::grpc::CallbackServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* HelloLys(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_HelloLys<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_HelloLys<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_HelloLys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_HelloLys() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_HelloLys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HelloLys(::grpc::ServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_HelloLys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_HelloLys() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_HelloLys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HelloLys(::grpc::ServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHelloLys(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_HelloLys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_HelloLys() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->HelloLys(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_HelloLys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HelloLys(::grpc::ServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* HelloLys(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* HelloLys(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HelloLys : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_HelloLys() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::test::HelloReq, ::test::HelloRes>(
            [this](::grpc_impl::ServerContext* context,
                   ::grpc_impl::ServerUnaryStreamer<
                     ::test::HelloReq, ::test::HelloRes>* streamer) {
                       return this->StreamedHelloLys(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_HelloLys() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HelloLys(::grpc::ServerContext* /*context*/, const ::test::HelloReq* /*request*/, ::test::HelloRes* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHelloLys(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::test::HelloReq,::test::HelloRes>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_HelloLys<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_HelloLys<Service > StreamedService;
};

}  // namespace test


#endif  // GRPC_test_2eproto__INCLUDED
