Control Flow Graph for System Call: SyS_sched_getaffinity  
Please note that every function will be expanded only once!!! 

`SyS_sched_getaffinity`  
--->[`find_task_by_vpid`](https://elixir.bootlin.com/linux/v4.14.62/ident/find_task_by_vpid)  
--->[`security_task_getscheduler`](https://elixir.bootlin.com/linux/v4.14.62/ident/security_task_getscheduler)  
--->[`_raw_spin_lock_irqsave`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_lock_irqsave)  
--->--->[`queued_spin_lock_slowpath`](https://elixir.bootlin.com/linux/v4.14.62/ident/queued_spin_lock_slowpath)  
--->[`__bitmap_and`](https://elixir.bootlin.com/linux/v4.14.62/ident/__bitmap_and)  
--->[`_raw_spin_unlock_irqrestore`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_unlock_irqrestore)  
--->[`_copy_to_user`](https://elixir.bootlin.com/linux/v4.14.62/ident/_copy_to_user)  
