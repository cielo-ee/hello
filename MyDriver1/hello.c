/* hello.c */

#include <wdm.h>
#pragma warning(disable: 4100)

DRIVER_INITIALIZE DriverEntry;

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
	DbgPrint("Hello, World!\n");
	return STATUS_SUCCESS;
}
