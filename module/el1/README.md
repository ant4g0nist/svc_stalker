Be very careful when modifying `sleh_synchronous_hijacker`. If you cause a
crash, the kernel will call `sleh_synchronous`, which will call
`sleh_synchronous_hijacker`, then you'll crash and the kernel will call
`sleh_synchronous`, which will call `sleh_synchronous_hijacker` which will
crash... and on and on until the stack is corrupted. The same goes for
the code in `handle_svc_hook` because it is called by `sleh_synchronous_hijacker`.