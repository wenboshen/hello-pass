CFG: SyS_open
do_sys_open

  getname

  get_unused_fd_flags

  do_filp_open

    path_openat

      get_empty_filp

        capable

        __percpu_counter_sum

        kmem_cache_alloc

        percpu_counter_add_batch

        security_file_alloc

        percpu_counter_add_batch

        call_rcu_sched

        __mutex_init

        printk

      path_lookupat

        path_init

          mntget

          lockref_get

          dput

          mntput

          mntget

          lockref_get

          _raw_spin_lock

          mntget

          lockref_get

          __fdget_raw

          fput

          mntget

          lockref_get

          fput

        __follow_mount_rcu

          __lookup_mnt

        lockref_get

        follow_managed

          lookup_mnt

            mntput_no_expire

              _raw_spin_lock

              cpumask_next

              cpumask_next

              unhash_mnt

                _raw_spin_lock

                kfree

              task_work_add

              llist_add_batch

              queue_delayed_work_on

              cleanup_mnt

                cpumask_next

                cpumask_next

                mnt_pin_kill

                  pin_kill

                    _raw_spin_lock_irq

                    schedule

                    schedule

                    _raw_spin_lock_irq

                __fsnotify_vfsmount_delete

                  fsnotify_destroy_marks

                    __srcu_read_lock

                    _raw_spin_lock

                    __srcu_read_unlock

                    __srcu_read_unlock

                    __srcu_read_unlock

                    fsnotify_put_mark

                      fsnotify_put_group

                        kfree

                      refcount_dec_and_lock

                        __warn_printk

                        _raw_spin_lock

                      iput

                      _raw_spin_lock

                      queue_work_on

                      iput

                      _raw_spin_lock

                      queue_delayed_work_on

                    fsnotify_destroy_mark

                      mutex_lock

                      _raw_spin_lock

                      fsnotify_put_mark

                      mutex_unlock

                      _raw_spin_lock

                    _raw_spin_lock

                    fsnotify_put_mark

                    iput

                dput

                deactivate_super

                  down_write

                  deactivate_locked_super

                    unregister_shrinker

                      down_write

                      up_write

                      kfree

                    list_lru_destroy

                      kfree

                    list_lru_destroy

                    put_filesystem

                      module_put

                    _raw_spin_lock

                    __put_super

                      security_sb_free

                      kfree

                      call_rcu_sched

                    up_write

                _raw_spin_lock

                ida_remove

                  radix_tree_next_chunk

                  radix_tree_iter_tag_set

                  radix_tree_iter_delete

                    __radix_tree_delete

                  find_first_bit

                  kfree

                  radix_tree_iter_delete

                  __warn_printk

                call_rcu_sched

          dput

          mntput

          lockref_get

          mntget

          finish_automount

            cpumask_next

            cpumask_next

            do_add_mount

              lock_mount

                down_write

                up_write

                down_write

                lookup_mnt

                get_mountpoint

                  _raw_spin_lock

                  __kmalloc

                  d_set_mounted

                    _raw_spin_lock

                    _raw_spin_lock

                    _raw_spin_lock

                  _raw_spin_lock

                  kfree

                up_write

                synchronize_sched

                group_pin_kill

                  pin_kill

                up_write

                up_write

                synchronize_sched

                group_pin_kill

                up_write

                path_put

                lockref_get

                down_write

              attach_recursive_mnt

                get_mountpoint

                invent_group_ids

                  ida_pre_get

                    kmem_cache_alloc

                    kmem_cache_free

                    __kmalloc

                    kfree

                  ida_get_new_above

                    idr_get_free_cmn

                    find_next_zero_bit

                    find_next_zero_bit

                    find_first_zero_bit

                    radix_tree_iter_tag_clear

                    radix_tree_iter_replace

                    radix_tree_iter_replace

                  ida_remove

                propagate_mnt

                  propagate_one

                    is_subdir

                    copy_tree

                    mnt_set_mountpoint

                      lockref_get

                    _raw_spin_lock

                    count_mounts

                  propagate_one

                  _raw_spin_lock

                _raw_spin_lock

                _raw_spin_lock

                unhash_mnt

                lockref_get

                __wake_up

                lockref_get

                commit_tree

                  __wake_up

                mnt_change_mountpoint

                  lockref_get

                  _raw_spin_lock

                  kfree

                  _raw_spin_lock

                commit_tree

                _raw_spin_lock

                kfree

                umount_tree

                  propagate_mount_unlock

                    __lookup_mnt

                  propagate_umount

                    __lookup_mnt

                    mnt_change_mountpoint

                  __wake_up

                  pin_insert_group

                    _raw_spin_lock

                  unhash_mnt

                  change_mnt_propagation

                    mnt_release_group_id

                      ida_remove

                ida_remove

                _raw_spin_lock

                _raw_spin_lock

                kfree

              unlock_mount

                _raw_spin_lock

                _raw_spin_lock

                kfree

                up_write

                synchronize_sched

                group_pin_kill

                up_write

            down_write

            up_write

            synchronize_sched

            group_pin_kill

            mntput_no_expire

            mntput_no_expire

          dput

          mntput

          lockref_get

          mntput

          dput

          mntput

        dput

        mntput

        terminate_walk

          dput

          mntput

          dput

          mntput

          dput

          mntput

        link_path_walk

          _raw_spin_lock

          generic_permission

            get_cached_acl_rcu

            posix_acl_permission

              in_group_p

              in_group_p

            get_acl

              kfree_call_rcu

              kfree_call_rcu

            posix_acl_permission

            kfree_call_rcu

            in_group_p

            capable_wrt_inode_uidgid

              printk

              security_capable

            capable_wrt_inode_uidgid

            capable_wrt_inode_uidgid

            capable_wrt_inode_uidgid

          security_inode_permission

          unlazy_walk

            legitimize_links

              __legitimize_mnt

              lockref_get_not_dead

                _raw_spin_lock

              drop_links

            __legitimize_mnt

            lockref_get_not_dead

            __legitimize_mnt

            lockref_get_not_dead

          _raw_spin_lock

          generic_permission

          security_inode_permission

          walk_component

            handle_dots

              is_subdir

              __lookup_mnt

              dget_parent

              dput

              is_subdir

              follow_up

                _raw_spin_lock

                mntget

                lockref_get

                dput

                mntput

              lookup_mnt

              dput

              mntput

              lockref_get

            dput

            mntput

            lookup_fast

              __d_lookup_rcu

              unlazy_walk

              __follow_mount_rcu

              legitimize_links

              legitimize_mnt

                mntput_no_expire

              lockref_get_not_dead

              lockref_get_not_dead

              dput

              __legitimize_mnt

              lockref_get_not_dead

              dput

              __d_lookup

                _raw_spin_lock

              d_invalidate

                _raw_spin_lock

                _raw_spin_lock

                __d_drop

                d_walk

                  _raw_spin_lock

                  _raw_spin_lock

                  _raw_spin_lock

                  _raw_spin_lock

                shrink_dentry_list

                  _raw_spin_lock

                  _raw_spin_trylock

                  _raw_spin_lock

                  _raw_spin_lock

                  _raw_spin_lock

                  call_rcu_sched

                  kmem_cache_free

                  call_rcu_sched

                  _raw_spin_trylock

                  __dentry_kill

                    lockref_mark_dead

                    list_lru_del

                      _raw_spin_lock

                    __d_drop

                    dentry_unlink_inode

                      fsnotify

                        __srcu_read_lock

                        __srcu_read_lock

                        fsnotify_compare_groups

                        __srcu_read_unlock

                      __fsnotify_inode_delete

                        fsnotify_destroy_marks

                      iput

                    _raw_spin_lock

                    call_rcu_sched

                    kmem_cache_free

                    call_rcu_sched

                  lockref_put_or_lock

                    _raw_spin_lock

                  _raw_spin_trylock

                  _raw_spin_lock

                  _raw_spin_lock

                  _raw_spin_lock

                  _raw_spin_trylock

                  lockref_put_or_lock

                  __dentry_kill

                __detach_mounts

                  down_write

                  _raw_spin_lock

                  unhash_mnt

                  umount_tree

                  _raw_spin_lock

                  kfree

                  up_write

                  synchronize_sched

                  group_pin_kill

                dput

                _cond_resched

              dput

              dput

              follow_managed

            lookup_slow

              down_read

              d_alloc_parallel

                __d_alloc

                  kmem_cache_alloc

                  __kmalloc

                  kmem_cache_free

                  d_set_d_op

                  kfree

                  kmem_cache_free

                _raw_spin_lock

                __d_lookup_rcu

                lockref_get_not_dead

                dput

                dput

                lockref_get_not_dead

                _raw_spin_lock

                add_wait_queue

                  _raw_spin_lock_irqsave

                  _raw_spin_unlock_irqrestore

                schedule

                _raw_spin_lock

                dput

                dput

              dput

              d_invalidate

              dput

              d_alloc_parallel

              _raw_spin_lock

              __d_lookup_done

                __wake_up

              dput

              up_read

            follow_managed

            dput

            mntput

            step_into

              dput

              mntput

              dput

              mntput

              dput

              mntput

              mntget

              __kmalloc

              __kmalloc

              __memcpy

              __legitimize_mnt

              lockref_get_not_dead

              unlazy_walk

              __kmalloc

              __kmalloc

              __memcpy

              dput

              mntput

          walk_component

          touch_atime

            __atime_needs_update

              current_kernel_time64

              __warn_printk

              timespec_trunc

                __warn_printk

            __sb_start_write

              _cond_resched

              __percpu_down_read

              __percpu_down_read

            __mnt_want_write

            current_kernel_time64

            __warn_printk

            timespec_trunc

            __mnt_drop_write

            __sb_end_write

              __percpu_up_read

          _cond_resched

          __atime_needs_update

          unlazy_walk

          touch_atime

          security_inode_follow_link

          unlazy_walk

          dput

          mntput

          mntget

          lockref_get

          dput

          mntput

          unlazy_walk

        link_path_walk

        walk_component

        trailing_symlink

          audit_log_link_denied

            __kmalloc

            audit_log_start

              audit_filter

                security_task_getsecid

                security_audit_rule_match

              __wake_up

              add_wait_queue_exclusive

                _raw_spin_lock_irqsave

                _raw_spin_unlock_irqrestore

              schedule_timeout

              remove_wait_queue

                _raw_spin_lock_irqsave

                _raw_spin_unlock_irqrestore

              _raw_spin_lock_irqsave

              _raw_spin_unlock_irqrestore

              _raw_spin_unlock_irqrestore

              __printk_ratelimit

                ___ratelimit

              printk

              audit_log_lost

                _raw_spin_lock_irqsave

                _raw_spin_unlock_irqrestore

                _raw_spin_unlock_irqrestore

                __printk_ratelimit

                printk

                __printk_ratelimit

                printk

                panic

                  panic_smp_self_stop

                  bust_spinlocks

                    unblank_screen

                      do_unblank_screen

                        _cond_resched

                        is_console_locked

                        printk

                        mod_timer

                        redraw_screen

                          is_console_locked

                          clear_selection

                            complement_pos

                              is_console_locked

                              atomic_notifier_call_chain

                              atomic_notifier_call_chain

                            invert_screen

                              is_console_locked

                              do_update_region

                              atomic_notifier_call_chain

                          is_console_locked

                          is_console_locked

                          sysfs_notify

                            kernfs_find_and_get_ns

                              mutex_lock

                              kernfs_find_ns

                                __warn_printk

                                strlen

                                strcmp

                              mutex_unlock

                            kernfs_get

                            kernfs_find_and_get_ns

                            kernfs_put

                              __warn_printk

                              kernfs_put

                              kfree_const

                              security_release_secctx

                              kfree

                              kfree

                              kfree

                              _raw_spin_lock

                              radix_tree_delete_item

                                __radix_tree_delete

                              kmem_cache_free

                              idr_destroy

                              kfree

                            kernfs_notify

                              _raw_spin_lock_irqsave

                              kernfs_get

                              queue_work_on

                              _raw_spin_unlock_irqrestore

                            kernfs_put

                          clear_selection

                          is_console_locked

                          is_console_locked

                          build_attr

                          do_update_region

                          clear_selection

                          clear_selection

                          __tasklet_schedule

                            wake_up_process

                          compute_shiftstate

                            _raw_spin_lock_irqsave

                            find_first_bit

                            find_next_bit

                            _raw_spin_unlock_irqrestore

                          atomic_notifier_call_chain

                        is_console_locked

                        clear_selection

                        clear_selection

                        vt_event_post

                          _raw_spin_lock_irqsave

                          _raw_spin_unlock_irqrestore

                          _raw_spin_unlock_irqrestore

                          __wake_up

                    console_unblank

                      __printk_safe_enter

                      down_trylock

                        _raw_spin_lock_irqsave

                        _raw_spin_unlock_irqrestore

                      __printk_safe_exit

                      _cond_resched

                      down

                      console_unlock

                        __printk_safe_enter

                        up

                        __printk_safe_exit

                        __printk_safe_enter

                        up

                        __printk_safe_exit

                        __printk_safe_enter

                        _raw_spin_lock

                        sprintf

                        memchr

                        snprintf

                        snprintf

                        sprintf

                        scnprintf

                        msg_print_ext_body

                          scnprintf

                          scnprintf

                        rcu_irq_enter_disabled

                        rcu_irq_enter_irqson

                        rcu_irq_exit_irqson

                        __printk_safe_exit

                        _cond_resched

                        __printk_safe_enter

                        up

                        __printk_safe_exit

                        _raw_spin_lock

                        __printk_safe_exit

                        console_trylock

                          __printk_safe_enter

                          down_trylock

                          __printk_safe_exit

                          __printk_safe_enter

                          up

                          __printk_safe_exit

                        irq_work_queue

                          llist_add_batch

                          tick_nohz_tick_stopped

                          arch_irq_work_raise

                          llist_add_batch

                          arch_irq_work_raise

                    wake_up_klogd

                      irq_work_queue

                  vsnprintf

                  printk

                  dump_stack

                  printk_safe_flush_on_panic

                    __bitmap_weight

                    debug_locks_off

                    cpumask_next

                    __printk_safe_flush

                      _raw_spin_lock_irqsave

                      printk_deferred

                        vprintk_emit

                          __const_udelay

                          __printk_safe_enter

                          _raw_spin_lock

                          vscnprintf

                            vsnprintf

                          cont_add

                            log_store

                            sched_clock_cpu

                              native_sched_clock

                              native_sched_clock

                              native_sched_clock

                            log_store

                            log_store

                          log_store

                          cont_add

                          log_store

                          __printk_safe_exit

                          console_trylock

                          console_unlock

                        irq_work_queue

                      printk_deferred

                      printk_deferred

                      printk_deferred

                      printk_deferred

                      printk_deferred

                      _raw_spin_unlock_irqrestore

                    __printk_safe_flush

                    cpumask_next

                  __crash_kexec

                    mutex_trylock

                    __memcpy

                    crash_save_vmcoreinfo

                      get_seconds

                      vmcoreinfo_append_str

                        vscnprintf

                    machine_crash_shutdown

                    machine_kexec

                      disable_IO_APIC

                      __memcpy

                      relocate_kernel

                    mutex_unlock

                  crash_smp_send_stop

                  atomic_notifier_call_chain

                  printk_safe_flush_on_panic

                  kmsg_dump

                  __crash_kexec

                  bust_spinlocks

                  debug_locks_off

                  console_flush_on_panic

                    console_trylock

                    console_unlock

                  printk

                  __const_udelay

                  emergency_restart

                    kmsg_dump

                    machine_emergency_restart

                  printk

                  __const_udelay

              kmem_cache_alloc

              __alloc_skb

              __nlmsg_put

                skb_put

              kfree_skb

              kmem_cache_free

              audit_log_lost

              auditsc_get_stamp

                audit_serial

              current_kernel_time64

              audit_log_format

            audit_log_format

            audit_log_task_info

            audit_log_format

            audit_log_end

            security_inode_getsecid

            get_vfs_caps_from_disk

              __vfs_getxattr

            audit_log_name

            kfree

          touch_atime

          _cond_resched

          __atime_needs_update

          unlazy_walk

          touch_atime

          security_inode_follow_link

          unlazy_walk

          dput

          mntput

          mntget

          lockref_get

        unlazy_walk

        terminate_walk

      mnt_want_write

      vfs_tmpfile

        _raw_spin_lock

        generic_permission

        security_inode_permission

        d_alloc

          __d_alloc

          _raw_spin_lock

        _raw_spin_lock

        dput

      dput

      __audit_inode

        strcmp

        __kmalloc

        parent_len

          strlen

        audit_tree_lookup

        audit_put_chunk

          kfree_call_rcu

          kfree

        audit_put_chunk

        audit_put_chunk

        __kmalloc

        audit_put_chunk

        audit_put_chunk

        printk

        audit_put_chunk

        audit_put_chunk

        audit_copy_inode

          security_inode_getsecid

          get_vfs_caps_from_disk

      may_open

        __inode_permission

          _raw_spin_lock

          generic_permission

          security_inode_permission

        inode_owner_or_capable

          ns_capable

            printk

            security_capable

      finish_open

        do_dentry_open

          path_get

          errseq_sample

          __mnt_want_write

          try_module_get

          security_file_open

            __fsnotify_parent

              dget_parent

              __fsnotify_update_child_dentry_flags

                _raw_spin_lock

                _raw_spin_lock

                _raw_spin_lock

              take_dentry_name_snapshot

                _raw_spin_lock

              fsnotify

              fsnotify

              release_dentry_name_snapshot

                kfree_call_rcu

              dput

            fsnotify

          __break_lease

            kmem_cache_alloc

            __init_waitqueue_head

            _cond_resched

            __percpu_down_read

            _raw_spin_lock

            time_out_leases

              lease_modify

                _raw_spin_lock

                __wake_up

                f_delown

                  _raw_write_lock_irq

                  put_pid

                fasync_helper

                  fasync_remove_entry

                    _raw_spin_lock

                    _raw_spin_lock

                    _raw_spin_lock_irq

                    call_rcu_sched

                  kmem_cache_alloc

                  _raw_spin_lock

                  _raw_spin_lock

                  _raw_spin_lock_irq

                  kmem_cache_free

                printk

                _raw_spin_lock

                _raw_spin_lock

                __wake_up

                locks_free_lock

                  kmem_cache_free

              lease_modify

            _raw_spin_lock

            _raw_spin_lock

            __wake_up

            _raw_spin_lock

            __percpu_up_read

            locks_free_lock

            _cond_resched

            init_wait_entry

            prepare_to_wait_event

            schedule_timeout

            prepare_to_wait_event

            finish_wait

            _cond_resched

            __percpu_down_read

            _raw_spin_lock

            _raw_spin_lock

            time_out_leases

            __percpu_up_read

            locks_free_lock

            locks_free_lock

          file_ra_state_init

            I_BDEV

          module_put

          __mnt_drop_write

          path_put

      open_check_o_direct

      fput

      mnt_drop_write

      dput

      mntput

      path_lookupat

      __audit_inode

      vfs_open

        do_dentry_open

      dput

      mntput

      path_init

      put_filp

      link_path_walk

      link_path_walk

      handle_dots

      lookup_fast

      unlazy_walk

      __audit_inode

      mnt_want_write

      down_write

      down_read

      d_lookup

        __d_lookup

      d_alloc_parallel

      d_invalidate

      dput

      current_umask

      _raw_spin_lock

      generic_permission

      security_inode_permission

      security_inode_create

      _raw_spin_lock

      __d_lookup_done

      __audit_inode_child

        audit_comparator

        audit_tree_lookup

        __kmalloc

        printk

        audit_put_chunk

        audit_put_chunk

        audit_put_chunk

        audit_compare_dname_path

          strlen

          strlen

          strlen

          strncmp

        strcmp

        audit_compare_dname_path

        __kmalloc

        audit_copy_inode

        __kmalloc

        audit_copy_inode

      fsnotify

      may_open

      dput

      __audit_inode_child

      fsnotify

      dput

      _raw_spin_lock

      __d_lookup_done

      dput

      __audit_inode_child

      __audit_inode_child

      fsnotify

      dput

      up_write

      up_read

      __audit_inode

      dput

      mntput

      mnt_drop_write

      follow_managed

      dput

      mntput

      __audit_inode

      dput

      mntput

      step_into

      unlazy_walk

      __audit_inode

      mnt_want_write

      may_open

      vfs_open

      open_check_o_direct

      locks_mandatory_locked

        _raw_spin_lock

      do_truncate

        dentry_needs_remove_privs

          capable

          security_inode_need_killpriv

        down_write

        notify_change

          inode_owner_or_capable

          inode_permission

          current_time

          security_inode_need_killpriv

          security_inode_setattr

          __break_lease

          ihold

          simple_setattr

            setattr_prepare

              send_sig

                do_send_sig_info

              capable_wrt_inode_uidgid

              in_group_p

              capable_wrt_inode_uidgid

              inode_owner_or_capable

              in_group_p

              capable_wrt_inode_uidgid

              inode_owner_or_capable

              security_inode_killpriv

            truncate_setsize

              pagecache_isize_extended

                pagecache_get_page

                  find_get_entry

                    radix_tree_lookup_slot

                    radix_tree_lookup_slot

                    __put_page

                    __put_page

                  __put_page

                  _cond_resched

                  __lock_page

                    _raw_spin_lock_irq

                    io_schedule

                    finish_wait

                  wake_up_page_bit

                    _raw_spin_lock_irqsave

                    __wake_up_locked_key_bookmark

                    _raw_spin_unlock_irqrestore

                    _raw_spin_lock_irqsave

                    __wake_up_locked_key_bookmark

                    _raw_spin_unlock_irqrestore

                  __put_page

                  find_get_entry

                  mark_page_accessed

                    activate_page

                      pagevec_lru_move_fn

                        _raw_spin_unlock_irqrestore

                        _raw_spin_lock_irqsave

                        _raw_spin_unlock_irqrestore

                        release_pages

                          _raw_spin_unlock_irqrestore

                          _raw_spin_unlock_irqrestore

                          PageHuge

                          __page_cache_release

                            _raw_spin_lock_irqsave

                            __mod_node_page_state

                            __mod_zone_page_state

                            _raw_spin_unlock_irqrestore

                          _raw_spin_unlock_irqrestore

                          _raw_spin_lock_irqsave

                          __mod_node_page_state

                          __mod_zone_page_state

                          _raw_spin_unlock_irqrestore

                          free_unref_page_list

                            free_unref_page_prepare

                            free_pcppages_bulk

                              _raw_spin_lock

                              bad_page

                                printk

                                printk

                                __dump_page

                                  __page_mapcount

                                  PageHeadHuge

                                  printk

                                  printk

                                  printk

                                  printk

                                  print_hex_dump

                                  printk

                                printk

                                print_modules

                                  printk

                                  printk

                                  printk

                                  printk

                                dump_stack

                                add_taint

                              __free_one_page

                                __mod_zone_page_state

                    workingset_activation

                  I_BDEV

                  __page_cache_alloc

                    cpuset_mem_spread_node

                      node_random

                      __next_node_in

                        find_next_bit

                        find_first_bit

                    __alloc_pages_nodemask

                    alloc_pages_current

                  add_to_page_cache_lru

                    __add_to_page_cache_locked

                      PageHuge

                      radix_tree_maybe_preload

                        kmem_cache_alloc

                        kmem_cache_free

                      _raw_spin_lock_irq

                      __radix_tree_create

                      shmem_mapping

                      __radix_tree_replace

                      __inc_node_page_state

                      __put_page

                    workingset_refault

                      lruvec_lru_size

                        node_page_state

                      mod_node_page_state

                      mod_node_page_state

                    workingset_activation

                    lru_cache_add

                      pagevec_lru_move_fn

                  __put_page

                page_mkclean

                  page_mapped

                    PageHuge

                  page_mapping

                  rmap_walk_anon

                    page_anon_vma

                    page_anon_vma

                    down_read

                    PageHeadHuge

                    anon_vma_interval_tree_iter_first

                    PageHeadHuge

                    _cond_resched

                    anon_vma_interval_tree_iter_next

                    up_read

                  rmap_walk_file

                    page_mapping

                    PageHeadHuge

                    down_read

                    vma_interval_tree_iter_first

                    PageHeadHuge

                    _cond_resched

                    vma_interval_tree_iter_next

                    up_read

                set_page_dirty

                  page_mapping

                unlock_page

                  wake_up_page_bit

                __put_page

              unmap_mapping_range

                down_write

                vma_interval_tree_iter_first

                zap_page_range_single

                  lru_add_drain

                    lru_add_drain_cpu

                      pagevec_lru_move_fn

                      pagevec_lru_move_fn

                      pagevec_lru_move_fn

                      pagevec_lru_move_fn

                      pagevec_lru_move_fn

                  __mmu_notifier_invalidate_range_start

                    __srcu_read_lock

                    __srcu_read_unlock

                  unmap_single_vma

                    uprobe_munmap

                      _raw_spin_lock

                    untrack_pfn

                      follow_phys

                        __follow_pte_pmd

                          pmd_huge

                          __mmu_notifier_invalidate_range_start

                          _raw_spin_lock

                          pmd_huge

                          __mmu_notifier_invalidate_range_end

                            __srcu_read_lock

                            __srcu_read_unlock

                          __mmu_notifier_invalidate_range_start

                          _raw_spin_lock

                          __mmu_notifier_invalidate_range_end

                      walk_system_ram_range

                        _raw_read_lock

                      free_memtype

                        walk_system_ram_range

                        _raw_spin_lock

                        rbt_memtype_erase

                          rb_next

                          rb_next

                          __rb_erase_color

                          __rb_insert_augmented

                        printk

                        kfree

                        printk

                    down_write

                    __unmap_hugepage_range_final

                      __unmap_hugepage_range

                        __mmu_notifier_invalidate_range_start

                        huge_pte_offset

                          pud_huge

                          pmd_huge

                        _raw_spin_lock

                        huge_pmd_unshare

                          __put_page

                        set_page_dirty

                        page_remove_rmap

                          PageHuge

                          __mod_node_page_state

                          clear_page_mlock

                            mod_zone_page_state

                            isolate_lru_page

                              ___ratelimit

                              __warn_printk

                              _raw_spin_lock_irq

                              __mod_node_page_state

                              __mod_zone_page_state

                            putback_lru_page

                              page_mapping

                              add_page_to_unevictable_list

                                _raw_spin_lock_irq

                                __mod_node_page_state

                                __mod_zone_page_state

                              page_mapping

                              isolate_lru_page

                              __put_page

                              lru_cache_add

                              __put_page

                          PageHuge

                          __dec_node_page_state

                          clear_page_mlock

                        __tlb_remove_page_size

                          __get_free_pages

                        tlb_flush_mmu

                          tlb_flush_mmu_tlbonly

                            flush_tlb_mm_range

                              flush_tlb_func_common

                                switch_mm_irqs_off

                              cpumask_any_but

                                find_next_bit

                              native_flush_tlb_others

                                smp_call_function_many

                                  cpumask_next_and

                                  cpumask_next_and

                                  cpumask_next_and

                                  cpumask_next_and

                                  smp_call_function_single

                                    generic_exec_single

                                      llist_add_batch

                                    generic_exec_single

                                  __bitmap_and

                                  __bitmap_weight

                                  cpumask_next

                                  llist_add_batch

                                  cpumask_next

                                  cpumask_next

                                  cpumask_next

                            flush_tlb_mm_range

                            __mmu_notifier_invalidate_range

                              __srcu_read_lock

                              __srcu_read_unlock

                            call_rcu_sched

                          free_pages_and_swap_cache

                            lru_add_drain

                            page_mapped

                            try_to_free_swap

                              page_swapcount

                                printk

                                printk

                                printk

                                printk

                                _raw_spin_lock

                                _raw_spin_lock

                              pm_suspended_storage

                              delete_from_swap_cache

                                _raw_spin_lock_irq

                                radix_tree_delete

                                  __radix_tree_delete

                                __mod_node_page_state

                                put_swap_page

                                  printk

                                  printk

                                  printk

                                  printk

                                  _raw_spin_lock

                                  _raw_spin_lock

                                  free_swap_slot

                                    _raw_spin_lock_irq

                                    swapcache_free_entries

                                      sort

                                      printk

                                      printk

                                      printk

                                      printk

                                      _raw_spin_lock

                                      _raw_spin_lock

                                      _raw_spin_lock

                                      queue_work_on

                                      _raw_spin_lock

                                      _raw_spin_lock

                                      find_first_bit

                                      plist_add

                                      find_next_bit

                                    swapcache_free_entries

                            unlock_page

                            release_pages

                        __mmu_notifier_invalidate_range_end

                    up_write

                    unmap_page_range

                      p4d_clear_bad

                        printk

                        __pti_set_user_pgd

                      pud_clear_bad

                        printk

                      pmd_clear_bad

                        printk

                      _raw_spin_lock

                      flush_tlb_batched_pending

                        flush_tlb_mm_range

                      print_bad_pte

                        printk

                        linear_hugepage_index

                        printk

                        dump_page

                          __dump_page

                        printk

                        printk

                        dump_stack

                        add_taint

                      print_bad_pte

                      page_rmapping

                      set_page_dirty

                      mark_page_accessed

                      page_remove_rmap

                      __page_mapcount

                      print_bad_pte

                      __get_free_pages

                      free_swap_and_cache

                        printk

                        printk

                        printk

                        printk

                        _raw_spin_lock

                        _raw_spin_lock

                        swap_count_continued

                          vmalloc_to_page

                          _raw_spin_lock

                        _raw_spin_lock

                        _raw_spin_lock

                        pagecache_get_page

                        __put_page

                        free_swap_slot

                        page_mapped

                        _raw_spin_lock

                        _raw_spin_lock

                        delete_from_swap_cache

                        unlock_page

                        __put_page

                      print_bad_pte

                      tlb_flush_mmu_tlbonly

                      free_pages_and_swap_cache

                      _cond_resched

                      _cond_resched

                  __mmu_notifier_invalidate_range_end

                  tlb_finish_mmu

                    tlb_flush_mmu_tlbonly

                    free_pages_and_swap_cache

                    free_pages

                vma_interval_tree_iter_next

                up_write

              truncate_inode_pages_range

                pagevec_lookup_entries

                  find_get_entries

                    radix_tree_next_chunk

                    __put_page

                    __put_page

                unlock_page

                unlock_page

                truncate_cleanup_page

                  page_mapped

                  unmap_mapping_range

                  __cancel_dirty_page

                    page_mapping

                    I_BDEV

                    I_BDEV

                    account_page_cleaned

                      I_BDEV

                      mod_node_page_state

                      dec_zone_page_state

                      percpu_counter_add_batch

                delete_from_page_cache_batch

                  _raw_spin_lock_irqsave

                  unaccount_page_cache_page

                    page_mapped

                    printk

                    dump_page

                    dump_stack

                    add_taint

                    __page_mapcount

                    PageHuge

                    __mod_node_page_state

                    __mod_node_page_state

                    I_BDEV

                    account_page_cleaned

                  radix_tree_next_chunk

                  radix_tree_clear_tags

                  shmem_mapping

                  __radix_tree_replace

                  _raw_spin_unlock_irqrestore

                  __put_page

                unlock_page

                truncate_exceptional_pvec_entries

                  shmem_mapping

                  _raw_spin_lock_irq

                  __radix_tree_lookup

                  __radix_tree_replace

                __pagevec_release

                  lru_add_drain_cpu

                  release_pages

                _cond_resched

                pagecache_get_page

                wait_on_page_bit

                  _raw_spin_lock_irq

                  io_schedule

                  finish_wait

                unlock_page

                __put_page

                pagecache_get_page

                wait_on_page_bit

                unlock_page

                __put_page

                _cond_resched

                pagevec_lookup_entries

                pagevec_remove_exceptionals

                __pagevec_release

                _cond_resched

                __lock_page

                wait_on_page_bit

                truncate_cleanup_page

                delete_from_page_cache

                  page_mapping

                  _raw_spin_lock_irqsave

                  __delete_from_page_cache

                    unaccount_page_cache_page

                    PageHuge

                    __radix_tree_lookup

                    radix_tree_clear_tags

                    shmem_mapping

                    __radix_tree_replace

                  _raw_spin_unlock_irqrestore

                  __put_page

                unlock_page

                truncate_exceptional_pvec_entries

                __pagevec_release

              unmap_mapping_range

            setattr_copy

              timespec_trunc

              timespec_trunc

              timespec_trunc

              in_group_p

              capable_wrt_inode_uidgid

            __mark_inode_dirty

              block_dump___mark_inode_dirty

                strcmp

                d_find_alias

                  _raw_spin_lock

                  _raw_spin_lock

                  _raw_spin_lock

                _raw_spin_lock

                printk

                dput

                printk

              _raw_spin_lock

              I_BDEV

              _raw_spin_lock

              __warn_printk

              inode_io_list_move_locked

              wb_wakeup_delayed

                __msecs_to_jiffies

                _raw_spin_lock_bh

                queue_delayed_work_on

                _raw_spin_unlock_bh

          __fsnotify_parent

          fsnotify

        up_write

      fput

      mnt_drop_write

      trailing_symlink

      terminate_walk

      put_filp

    path_openat

    path_openat

    kfree

  put_unused_fd

  __fsnotify_parent

  fsnotify

  fd_install

    _raw_spin_lock

  putname
