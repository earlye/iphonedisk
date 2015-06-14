// Author: Allen Porter <allen@thebends.org>

#ifndef __MOBILE_FS_SERVICE_H__
#define __MOBILE_FS_SERVICE_H__

#include "MobileDevice.h"
#include "mobilefs/mobiledevice_ex.h"

namespace proto {
class FsService;
}

namespace mobilefs {

proto::FsService* NewMobileFsService(afc_connection* conn);

}  // namespace mobilefs

#ifdef TYPE_BOOL
#undef TYPE_BOOL
#endif

#endif  // __MOBILE_FS_SERVICE_H__
