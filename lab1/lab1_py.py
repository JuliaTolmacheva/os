from ctypes import windll, byref, Structure, Array, wintypes
class ULONGLONG(Structure):
    _fields_ = [("RAM", wintypes.ULONG),]
si = ULONGLONG()
kernel32 = windll.kernel32
kernel32.GetPhysicallyInstalledSystemMemory(byref(si))
print("RAM=",si.RAM/1024/1024)
