Control Flow Graph for System Call: SyS_sigpending  
Please note that every function will be expanded only once!!! 

`SyS_sigpending`  
--->[`_raw_spin_lock_irq`](https://elixir.bootlin.com/linux/v4.14.62/ident/_raw_spin_lock_irq)  
--->--->[`queued_spin_lock_slowpath`](https://elixir.bootlin.com/linux/v4.14.62/ident/queued_spin_lock_slowpath)  
--->[`_copy_to_user`](https://elixir.bootlin.com/linux/v4.14.62/ident/_copy_to_user)  
