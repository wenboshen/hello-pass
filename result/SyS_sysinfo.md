Control Flow Graph for System Call: SyS_sysinfo  
Please note that every function will be expanded only once!!! 

`SyS_sysinfo`  
--->[`do_sysinfo`](https://elixir.bootlin.com/linux/v4.14.62/ident/do_sysinfo)  
--->--->[`ktime_get_with_offset`](https://elixir.bootlin.com/linux/v4.14.62/ident/ktime_get_with_offset)  
--->--->[`ns_to_timespec`](https://elixir.bootlin.com/linux/v4.14.62/ident/ns_to_timespec)  
--->--->[`get_avenrun`](https://elixir.bootlin.com/linux/v4.14.62/ident/get_avenrun)  
--->--->[`si_meminfo`](https://elixir.bootlin.com/linux/v4.14.62/ident/si_meminfo)  
--->--->--->[`nr_blockdev_pages`](https://elixir.bootlin.com/linux/v4.14.62/ident/nr_blockdev_pages)  
--->--->--->--->[`_raw_spin_lock`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_lock)  
--->--->--->--->--->[`queued_spin_lock_slowpath`](https://elixir.bootlin.com/linux/v4.14.62/ident/queued_spin_lock_slowpath)  
--->--->[`si_swapinfo`](https://elixir.bootlin.com/linux/v4.14.62/ident/si_swapinfo)  
--->--->--->[`_raw_spin_lock`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_lock)  
--->[`_copy_to_user`](https://elixir.bootlin.com/linux/v4.14.62/ident/_copy_to_user)  
