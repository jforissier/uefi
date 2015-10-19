#ifndef _OEM_DEVICE_PATH_H_
#define _OEM_DEVICE_PATH_H_
#include <Protocol/DevicePath.h>


typedef enum
{
    C_NIC  = 1,
    C_SATA = 2,
    C_SAS  = 3,
    C_USB  = 4,
} CONTROLLER_TYPE;


typedef struct{
  VENDOR_DEVICE_PATH Vender;
  
  UINT8 ControllerType;
  
  UINT8 Socket;
  
  UINT8 Port;
  
} EXT_VENDOR_DEVICE_PATH;

//uniBIOS_l00306713_000_start 2015-5-21 10:18:41
 //Issue ID:DTS2015050507615    Description: 【iWare V200R002C00B980 BIOS】启动管理代码检视修改
typedef struct{

UINT16  BootIndex;
UINT16  Port;
}SATADES;

typedef struct{
    
UINT16  BootIndex;
UINT16  ParentPortNumber;
UINT16  InterfaceNumber;
}USBDES;

typedef struct{

UINT16  BootIndex;
UINT16  Port;
}PXEDES;
//uniBIOS_l00306713_000_end   2015-5-21 10:18:41
//uniBIOS_l00306713_000_end   2015-5-5 14:46:48

//DTS2015081300635 【iWare uniBIOS V200R001C00B990 ST】 网卡驱动代码检视意见修改
extern EFI_GUID gEfiHisiSocControllerGuid; 

#endif

