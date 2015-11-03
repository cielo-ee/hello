/* hello.c */


#include "hello.h"
#pragma warning(disable: 4100)

DRIVER_INITIALIZE DriverEntry;

NTSTATUS DriverEntry(IN PDRIVER_OBJECT DriverObject,IN PUNICODE_STRING RegistryPath)
{
	DbgPrint("Driver Entry loaded\n");

	DriverObject->DriverExtension->AddDevice = spAddDevice;

	return STATUS_SUCCESS;
}


NTSTATUS spAddDevice(IN PDRIVER_OBJECT DriverObject,
	IN PDEVICE_OBJECT PhysicalDeviceObject)
{
	DbgPrint("AddDevice is loaded\n");
	return STATUS_SUCCESS;
}
