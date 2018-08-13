Control Flow Graph for System Call: SyS_getrlimit  
Please note that every function will be expanded only once!!! 

`SyS_getrlimit`  
--->[`_raw_read_lock`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_read_lock)  
--->--->[`queued_read_lock_slowpath`](https://elixir.bootlin.com/linux/v4.14.62/ident/queued_read_lock_slowpath)  
--->--->--->[`queued_spin_lock_slowpath`](https://elixir.bootlin.com/linux/v4.14.62/ident/queued_spin_lock_slowpath)  
--->[`_raw_spin_lock`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_lock)  
--->--->[`queued_spin_lock_slowpath`](https://elixir.bootlin.com/linux/v4.14.62/ident/queued_spin_lock_slowpath)  
--->[`_copy_to_user`](https://elixir.bootlin.com/linux/v4.14.62/ident/_copy_to_user)  
