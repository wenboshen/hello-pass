Control Flow Graph for System Call: SyS_timer_gettime  
Please note that every function will be expanded only once!!! 

`SyS_timer_gettime`  
--->[`_raw_spin_lock_irqsave`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_lock_irqsave)  
--->--->[`queued_spin_lock_slowpath`](https://elixir.bootlin.com/linux/v4.14.62/ident/queued_spin_lock_slowpath)  
--->[`_raw_spin_unlock_irqrestore`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_unlock_irqrestore)  
--->[`_raw_spin_unlock_irqrestore`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_unlock_irqrestore)  
--->[`_raw_spin_unlock_irqrestore`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_unlock_irqrestore)  
--->[`put_itimerspec64`](https://elixir.bootlin.com/linux/v4.14.62/ident/put_itimerspec64)  
--->--->[`_copy_to_user`](https://elixir.bootlin.com/linux/v4.14.62/ident/_copy_to_user)  
--->--->[`_copy_to_user`](https://elixir.bootlin.com/linux/v4.14.62/ident/_copy_to_user)  
