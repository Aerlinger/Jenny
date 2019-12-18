/**
 * File generated by Jenny -- https://github.com/LanderlYoung/Jenny
 *
 * DO NOT EDIT THIS FILE.
 *
 * For bug report, please refer to github issue tracker https://github.com/LanderlYoung/Jenny/issues,
 * or contact author landerlyoung@gmail.com.
 */
#include "java_URLConnectionProxy.h"


// external logger function passed by jenny.errorLoggerFunction
void jennySampleErrorLog(JNIEnv* env, const char* error);


namespace java {

jclass URLConnectionProxy::sClazz = nullptr;

// thread safe init
std::mutex URLConnectionProxy::sInitLock;
std::atomic_bool URLConnectionProxy::sInited;

/*static*/ bool URLConnectionProxy::initClazz(JNIEnv *env) {
#define JENNY_CHECK_NULL(val)                      \
       do {                                        \
           if ((val) == nullptr) {                 \
               jennySampleErrorLog(env, "can't init URLConnectionProxy::" #val); \
               return false;                       \
           }                                       \
       } while(false)

    if (!sInited) {
        std::lock_guard<std::mutex> lg(sInitLock);
        if (!sInited) {
            auto clazz = env->FindClass(FULL_CLASS_NAME);
            JENNY_CHECK_NULL(clazz);
            sClazz = reinterpret_cast<jclass>(env->NewGlobalRef(clazz));
            env->DeleteLocalRef(clazz);
            JENNY_CHECK_NULL(sClazz);


            sMethod_getFileNameMap_0 = env->GetStaticMethodID(sClazz, "getFileNameMap", "()Ljava/net/FileNameMap;");
            JENNY_CHECK_NULL(sMethod_getFileNameMap_0);

            sMethod_setFileNameMap_0 = env->GetStaticMethodID(sClazz, "setFileNameMap", "(Ljava/net/FileNameMap;)V");
            JENNY_CHECK_NULL(sMethod_setFileNameMap_0);

            sMethod_connect_0 = env->GetMethodID(sClazz, "connect", "()V");
            JENNY_CHECK_NULL(sMethod_connect_0);

            sMethod_setConnectTimeout_0 = env->GetMethodID(sClazz, "setConnectTimeout", "(I)V");
            JENNY_CHECK_NULL(sMethod_setConnectTimeout_0);

            sMethod_getConnectTimeout_0 = env->GetMethodID(sClazz, "getConnectTimeout", "()I");
            JENNY_CHECK_NULL(sMethod_getConnectTimeout_0);

            sMethod_setReadTimeout_0 = env->GetMethodID(sClazz, "setReadTimeout", "(I)V");
            JENNY_CHECK_NULL(sMethod_setReadTimeout_0);

            sMethod_getReadTimeout_0 = env->GetMethodID(sClazz, "getReadTimeout", "()I");
            JENNY_CHECK_NULL(sMethod_getReadTimeout_0);

            sMethod_getURL_0 = env->GetMethodID(sClazz, "getURL", "()Ljava/net/URL;");
            JENNY_CHECK_NULL(sMethod_getURL_0);

            sMethod_getContentLength_0 = env->GetMethodID(sClazz, "getContentLength", "()I");
            JENNY_CHECK_NULL(sMethod_getContentLength_0);

            sMethod_getContentLengthLong_0 = env->GetMethodID(sClazz, "getContentLengthLong", "()J");
            JENNY_CHECK_NULL(sMethod_getContentLengthLong_0);

            sMethod_getContentType_0 = env->GetMethodID(sClazz, "getContentType", "()Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_getContentType_0);

            sMethod_getContentEncoding_0 = env->GetMethodID(sClazz, "getContentEncoding", "()Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_getContentEncoding_0);

            sMethod_getExpiration_0 = env->GetMethodID(sClazz, "getExpiration", "()J");
            JENNY_CHECK_NULL(sMethod_getExpiration_0);

            sMethod_getDate_0 = env->GetMethodID(sClazz, "getDate", "()J");
            JENNY_CHECK_NULL(sMethod_getDate_0);

            sMethod_getLastModified_0 = env->GetMethodID(sClazz, "getLastModified", "()J");
            JENNY_CHECK_NULL(sMethod_getLastModified_0);

            sMethod_getHeaderField_0 = env->GetMethodID(sClazz, "getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_getHeaderField_0);

            sMethod_getHeaderField_1 = env->GetMethodID(sClazz, "getHeaderField", "(I)Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_getHeaderField_1);

            sMethod_getHeaderFields_0 = env->GetMethodID(sClazz, "getHeaderFields", "()Ljava/util/Map;");
            JENNY_CHECK_NULL(sMethod_getHeaderFields_0);

            sMethod_getHeaderFieldInt_0 = env->GetMethodID(sClazz, "getHeaderFieldInt", "(Ljava/lang/String;I)I");
            JENNY_CHECK_NULL(sMethod_getHeaderFieldInt_0);

            sMethod_getHeaderFieldLong_0 = env->GetMethodID(sClazz, "getHeaderFieldLong", "(Ljava/lang/String;J)J");
            JENNY_CHECK_NULL(sMethod_getHeaderFieldLong_0);

            sMethod_getHeaderFieldDate_0 = env->GetMethodID(sClazz, "getHeaderFieldDate", "(Ljava/lang/String;J)J");
            JENNY_CHECK_NULL(sMethod_getHeaderFieldDate_0);

            sMethod_getHeaderFieldKey_0 = env->GetMethodID(sClazz, "getHeaderFieldKey", "(I)Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_getHeaderFieldKey_0);

            sMethod_getContent_0 = env->GetMethodID(sClazz, "getContent", "()Ljava/lang/Object;");
            JENNY_CHECK_NULL(sMethod_getContent_0);

            sMethod_getContent_1 = env->GetMethodID(sClazz, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
            JENNY_CHECK_NULL(sMethod_getContent_1);

            sMethod_getPermission_0 = env->GetMethodID(sClazz, "getPermission", "()Ljava/security/Permission;");
            JENNY_CHECK_NULL(sMethod_getPermission_0);

            sMethod_getInputStream_0 = env->GetMethodID(sClazz, "getInputStream", "()Ljava/io/InputStream;");
            JENNY_CHECK_NULL(sMethod_getInputStream_0);

            sMethod_getOutputStream_0 = env->GetMethodID(sClazz, "getOutputStream", "()Ljava/io/OutputStream;");
            JENNY_CHECK_NULL(sMethod_getOutputStream_0);

            sMethod_toString_0 = env->GetMethodID(sClazz, "toString", "()Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_toString_0);

            sMethod_setDoInput_0 = env->GetMethodID(sClazz, "setDoInput", "(Z)V");
            JENNY_CHECK_NULL(sMethod_setDoInput_0);

            sMethod_getDoInput_0 = env->GetMethodID(sClazz, "getDoInput", "()Z");
            JENNY_CHECK_NULL(sMethod_getDoInput_0);

            sMethod_setDoOutput_0 = env->GetMethodID(sClazz, "setDoOutput", "(Z)V");
            JENNY_CHECK_NULL(sMethod_setDoOutput_0);

            sMethod_getDoOutput_0 = env->GetMethodID(sClazz, "getDoOutput", "()Z");
            JENNY_CHECK_NULL(sMethod_getDoOutput_0);

            sMethod_setAllowUserInteraction_0 = env->GetMethodID(sClazz, "setAllowUserInteraction", "(Z)V");
            JENNY_CHECK_NULL(sMethod_setAllowUserInteraction_0);

            sMethod_getAllowUserInteraction_0 = env->GetMethodID(sClazz, "getAllowUserInteraction", "()Z");
            JENNY_CHECK_NULL(sMethod_getAllowUserInteraction_0);

            sMethod_setDefaultAllowUserInteraction_0 = env->GetStaticMethodID(sClazz, "setDefaultAllowUserInteraction", "(Z)V");
            JENNY_CHECK_NULL(sMethod_setDefaultAllowUserInteraction_0);

            sMethod_getDefaultAllowUserInteraction_0 = env->GetStaticMethodID(sClazz, "getDefaultAllowUserInteraction", "()Z");
            JENNY_CHECK_NULL(sMethod_getDefaultAllowUserInteraction_0);

            sMethod_setUseCaches_0 = env->GetMethodID(sClazz, "setUseCaches", "(Z)V");
            JENNY_CHECK_NULL(sMethod_setUseCaches_0);

            sMethod_getUseCaches_0 = env->GetMethodID(sClazz, "getUseCaches", "()Z");
            JENNY_CHECK_NULL(sMethod_getUseCaches_0);

            sMethod_setIfModifiedSince_0 = env->GetMethodID(sClazz, "setIfModifiedSince", "(J)V");
            JENNY_CHECK_NULL(sMethod_setIfModifiedSince_0);

            sMethod_getIfModifiedSince_0 = env->GetMethodID(sClazz, "getIfModifiedSince", "()J");
            JENNY_CHECK_NULL(sMethod_getIfModifiedSince_0);

            sMethod_getDefaultUseCaches_0 = env->GetMethodID(sClazz, "getDefaultUseCaches", "()Z");
            JENNY_CHECK_NULL(sMethod_getDefaultUseCaches_0);

            sMethod_setDefaultUseCaches_0 = env->GetMethodID(sClazz, "setDefaultUseCaches", "(Z)V");
            JENNY_CHECK_NULL(sMethod_setDefaultUseCaches_0);

            sMethod_setRequestProperty_0 = env->GetMethodID(sClazz, "setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
            JENNY_CHECK_NULL(sMethod_setRequestProperty_0);

            sMethod_addRequestProperty_0 = env->GetMethodID(sClazz, "addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
            JENNY_CHECK_NULL(sMethod_addRequestProperty_0);

            sMethod_getRequestProperty_0 = env->GetMethodID(sClazz, "getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_getRequestProperty_0);

            sMethod_getRequestProperties_0 = env->GetMethodID(sClazz, "getRequestProperties", "()Ljava/util/Map;");
            JENNY_CHECK_NULL(sMethod_getRequestProperties_0);

            sMethod_setDefaultRequestProperty_0 = env->GetStaticMethodID(sClazz, "setDefaultRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
            JENNY_CHECK_NULL(sMethod_setDefaultRequestProperty_0);

            sMethod_getDefaultRequestProperty_0 = env->GetStaticMethodID(sClazz, "getDefaultRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_getDefaultRequestProperty_0);

            sMethod_setContentHandlerFactory_0 = env->GetStaticMethodID(sClazz, "setContentHandlerFactory", "(Ljava/net/ContentHandlerFactory;)V");
            JENNY_CHECK_NULL(sMethod_setContentHandlerFactory_0);

            sMethod_guessContentTypeFromName_0 = env->GetStaticMethodID(sClazz, "guessContentTypeFromName", "(Ljava/lang/String;)Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_guessContentTypeFromName_0);

            sMethod_guessContentTypeFromStream_0 = env->GetStaticMethodID(sClazz, "guessContentTypeFromStream", "(Ljava/io/InputStream;)Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_guessContentTypeFromStream_0);



            sInited = true;
        }
    }
#undef JENNY_CHECK_NULL
   return true;
}

/*static*/ void URLConnectionProxy::releaseClazz(JNIEnv *env) {
    if (sInited) {
        std::lock_guard<std::mutex> lg(sInitLock);
        if (sInited) {
            env->DeleteGlobalRef(sClazz);
            sClazz = nullptr;
            sInited = false;
        }
    }
}


jmethodID URLConnectionProxy::sMethod_getFileNameMap_0;
jmethodID URLConnectionProxy::sMethod_setFileNameMap_0;
jmethodID URLConnectionProxy::sMethod_connect_0;
jmethodID URLConnectionProxy::sMethod_setConnectTimeout_0;
jmethodID URLConnectionProxy::sMethod_getConnectTimeout_0;
jmethodID URLConnectionProxy::sMethod_setReadTimeout_0;
jmethodID URLConnectionProxy::sMethod_getReadTimeout_0;
jmethodID URLConnectionProxy::sMethod_getURL_0;
jmethodID URLConnectionProxy::sMethod_getContentLength_0;
jmethodID URLConnectionProxy::sMethod_getContentLengthLong_0;
jmethodID URLConnectionProxy::sMethod_getContentType_0;
jmethodID URLConnectionProxy::sMethod_getContentEncoding_0;
jmethodID URLConnectionProxy::sMethod_getExpiration_0;
jmethodID URLConnectionProxy::sMethod_getDate_0;
jmethodID URLConnectionProxy::sMethod_getLastModified_0;
jmethodID URLConnectionProxy::sMethod_getHeaderField_0;
jmethodID URLConnectionProxy::sMethod_getHeaderField_1;
jmethodID URLConnectionProxy::sMethod_getHeaderFields_0;
jmethodID URLConnectionProxy::sMethod_getHeaderFieldInt_0;
jmethodID URLConnectionProxy::sMethod_getHeaderFieldLong_0;
jmethodID URLConnectionProxy::sMethod_getHeaderFieldDate_0;
jmethodID URLConnectionProxy::sMethod_getHeaderFieldKey_0;
jmethodID URLConnectionProxy::sMethod_getContent_0;
jmethodID URLConnectionProxy::sMethod_getContent_1;
jmethodID URLConnectionProxy::sMethod_getPermission_0;
jmethodID URLConnectionProxy::sMethod_getInputStream_0;
jmethodID URLConnectionProxy::sMethod_getOutputStream_0;
jmethodID URLConnectionProxy::sMethod_toString_0;
jmethodID URLConnectionProxy::sMethod_setDoInput_0;
jmethodID URLConnectionProxy::sMethod_getDoInput_0;
jmethodID URLConnectionProxy::sMethod_setDoOutput_0;
jmethodID URLConnectionProxy::sMethod_getDoOutput_0;
jmethodID URLConnectionProxy::sMethod_setAllowUserInteraction_0;
jmethodID URLConnectionProxy::sMethod_getAllowUserInteraction_0;
jmethodID URLConnectionProxy::sMethod_setDefaultAllowUserInteraction_0;
jmethodID URLConnectionProxy::sMethod_getDefaultAllowUserInteraction_0;
jmethodID URLConnectionProxy::sMethod_setUseCaches_0;
jmethodID URLConnectionProxy::sMethod_getUseCaches_0;
jmethodID URLConnectionProxy::sMethod_setIfModifiedSince_0;
jmethodID URLConnectionProxy::sMethod_getIfModifiedSince_0;
jmethodID URLConnectionProxy::sMethod_getDefaultUseCaches_0;
jmethodID URLConnectionProxy::sMethod_setDefaultUseCaches_0;
jmethodID URLConnectionProxy::sMethod_setRequestProperty_0;
jmethodID URLConnectionProxy::sMethod_addRequestProperty_0;
jmethodID URLConnectionProxy::sMethod_getRequestProperty_0;
jmethodID URLConnectionProxy::sMethod_getRequestProperties_0;
jmethodID URLConnectionProxy::sMethod_setDefaultRequestProperty_0;
jmethodID URLConnectionProxy::sMethod_getDefaultRequestProperty_0;
jmethodID URLConnectionProxy::sMethod_setContentHandlerFactory_0;
jmethodID URLConnectionProxy::sMethod_guessContentTypeFromName_0;
jmethodID URLConnectionProxy::sMethod_guessContentTypeFromStream_0;


} // endof namespace java
